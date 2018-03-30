// Allows for hot reloading index.html while
// in development mode.
if (process.env.NODE_ENV !== 'production') {
  require('./index.html')
}

import * as d3 from 'd3';
import {
  impacts_loader,
  comma_rollup,
  bar_data,
  rollup_sort,
  filter_analytics,
  getAnalyticsData,
  logDateFormatter,
  verify_items
} from './js/data';
import Filterer from './js/components/filterer';
import CheckboxList from './js/components/checkbox-list';
import LineChart from './js/components/linechart';
import Paginator from './js/components/paginator';
import APP_CONFIG from './config';

// Load styles
import './index.scss';

// components
let filterer, meta_filter, metaList, time_slice_filterer, time_slice_filter, linechart, paginator;

let root;

const loadedData = {
  impacts: null,
  analytics: null
};

let analyticsLoading = false;
let analyticsViewId;
let analyticsViewIdElement = document.getElementsByName('google-signin-view_id')[0];
if (analyticsViewIdElement) {
  analyticsViewId = analyticsViewIdElement.getAttribute('content');
}

const selected = {
  meta: 'topic',
  items: [],
  dateExtent: null,
  startDate: null,
  endDate: null,
  timeslice: {...APP_CONFIG.date_slices[0]}
}

// capture dates in the hash,
// only used on initial load
const datesFromHash = {
  start: null,
  end: null,
  dt: null
};

const makeLink = (o) => {
  const base = "http://cir.impact-tracker.org/log";
  const dt = logDateFormatter(o.dt);
  return `${base}?field_date_value[min][date]=${dt}&field_date_value[max][date]=${dt}`;
}

const filterChange = (d) => {
  if (d.key === selected.meta) return;

  selected.meta = d.key;
  selected.items = [];

  updateDisplay();
}

const metaChange = (d) => {
  selected.items = d;
  updateDisplay();
}

const timeSliceChange = d => {
  changeTimeSlice(d.key);
}

const onChartClick = (impactItem, analyticsItem) => {
  /*
  const url = makeLink(impactItem);
  document.location.href = url;
  */
}

const onLegendClick = () => {
  //updateHash();
}

// parse incoming hash
const parseHash = () => {
  let hash = document.location.hash;
  if (hash.charAt(0) === '#') hash = hash.slice(1);
  hash.split('&').forEach(function(d) {
    const kv = d.split('=').map(decodeURIComponent);

    let f;
    switch (kv[0]) {
      case 'k':
        f = APP_CONFIG.meta_lables.find(d => {
          return d.key === kv[1];
        });

        if (typeof f !== 'undefined') {
          selected.meta = f.key;
        }
        break;

      case 'ts':
        f = APP_CONFIG.date_slices.find(d => {
          return kv[1] === d.key;
        });

        if (typeof f !== 'undefined') {
          selected.timeslice = {...f};
        }

        break;

      case 'items':
        selected.items = kv[1].split('|');
        break;

      case 'lg':
        linechart.setLegend(kv[1].split(':'));
        break;
      case 'dtrange':
        const ll = kv[1].split(':');
        const dts = ll.map(d => new Date(+d)).filter(d => !isNaN(d.getTime()));
        if (dts.length === 2) {
          datesFromHash.start = dts[0];
          datesFromHash.end = dts[1];
        }
        break;

      case 'dt':
        const dt = new Date(+kv[1]);
        if ( !isNaN(dt.getTime()) ) datesFromHash.dt = dt;
        break;
    }
  });
}

// updates hash with selected items
const updateHash = () => {
  const {meta, items, dateExtent, startDate, timeslice} = selected;
  var o = {
    k: meta,
    items: items,
    ts: timeslice.key
  }

  o.lg = linechart.getHash();
  o['dtrange'] = `${+dateExtent[0]}:${+dateExtent[1]}`;
  o['dt'] = +startDate;

  const hashparams = Object.keys(o).map(k => {
    const v = o[k];

    if (Array.isArray(v)) {
      return `${k}=${v.map(d => encodeURIComponent(d)).join('|')}`;
    }
    return `${k}=${encodeURIComponent(v)}`;

  });

  const hash = `#${hashparams.join('&')}`;

  if(history.pushState) {
    history.pushState(null, null, hash);
  } else {
    location.hash = hash;
  }
}

const updateDisplay = (skipMeta) => {
  //updateHash();
  if (!skipMeta) renderMetaList();
  renderLineChart();
}

const renderMetaList = () => {
  if (!(metaList && loadedData.impacts)) return;
  const {startDate, endDate} = selected;
  let data = comma_rollup(loadedData.impacts, selected.meta, selected.items, [+startDate, +endDate]);


  metaList
    .selected(selected.items)
    .data(rollup_sort(data, 'unassigned'));
}

const renderLineChart = () => {
  const {startDate, endDate} = selected;
  const dateRange = [startDate, endDate];

  let barData;
  if (loadedData.impacts) {
    barData = bar_data(loadedData.impacts, selected.meta, selected.items, [+startDate, +endDate]);
  }

  let lineData = null;
  if (loadedData.analytics) {
    lineData = filter_analytics(loadedData.analytics, dateRange);
  }

  linechart.data(barData, lineData, dateRange);
}

const updatePaginator = () => {
  const {dateExtent, startDate, endDate} = selected;

  if (!paginator) return;

  paginator.labelText = `${d3.timeFormat('%b')(startDate)} - ${d3.timeFormat('%b %Y')(endDate)}`;
  paginator.prevState = (startDate <= dateExtent[0]);
  paginator.nextState = (endDate >= dateExtent[1]);
}

const conformDates = () => {
  const {dateExtent, startDate, endDate} = selected;

  if (startDate < dateExtent[0]) selected.startDate = dateExtent[0];
  if (endDate > dateExtent[1]) selected.endDate = dateExtent[1];
}

const incrementDates = (dir) => {
  const {endDate, timeslice} = selected;
  const offset = timeslice.offset;
  selected.endDate = d3.timeMonth.offset(endDate, offset * dir);

  conformDates();
  setDates();
  updateDisplay();
}

const setDates = () => {
  const {dateExtent, startDate, endDate, timeslice} = selected;

  // Start at end of range and work backward
  if (endDate === null) {
    selected.endDate = dateExtent[1];
  }

  selected.startDate = d3.timeMonth.offset(selected.endDate, -timeslice.offset);

  const startDatePadding = d3.timeMonth.offset(selected.startDate, -6);

  // If new startDate is within 6 months of beginning of data we have, load more data
  if (selected.dateExtent[0] > startDatePadding) {
    loadImpactsData(false);
  }

  if (loadedData.analytics) {
    // If new startDate within 6 months of beginning of analytics data, load more
    const analyticsDateStart = d3.min(loadedData.analytics, d => d.dt);
    if (analyticsDateStart > startDatePadding) {
      loadAnalyticsData(d3.timeDay.offset(analyticsDateStart, -1), false);
    }
  }

  conformDates();
  updatePaginator();
}

const changeTimeSlice = (slice) => {
  const {dateExtent, startDate, endDate, timeslice} = selected;

  if (slice === timeslice.key) return;
  const find = APP_CONFIG.date_slices.filter(d => {
    return slice === d.key;
  });

  if (!find.length) return;

  selected.timeslice = find[0];

  const offset = timeslice.offset;
  const dt = d3.timeMonth.offset(startDate, offset);
  if (dt >= dateExtent[1]) {
    selected.startDate = d3.timeMonth.offset(endDate, -offset);
  }

  conformDates();
  setDates();
  updateDisplay();
}

const getTimeFilterDatum = () => {
  const {dateExtent} = selected;
  const datum = [];
  if (!dateExtent) return datum;

  APP_CONFIG.date_slices.forEach((d, i) => {
    if (i === 0) {
      datum.push({...d})
    } else {
      const prev = i - 1;
      const nextBoundary = d3.timeMonth.offset(dateExtent[0], APP_CONFIG.date_slices[prev].offset);

      if (dateExtent[1] > nextBoundary) {
        datum.push({...d});
      }
    }
  });

  return datum;
}

const onImpactDataLoaded = (root, impacts) => {
};

const onDataLoaded = (root, datasets) => {
  if (datasets.analytics) loadedData.analytics = datasets.analytics;
  if (datasets.impacts) loadedData.impacts = datasets.impacts;

  root.classed('loading', false);

  if (loadedData.impacts) {
    selected.items = verify_items(loadedData.impacts, selected.meta, selected.items);
    selected.dateExtent = d3.extent(loadedData.impacts, d => d.dt);
    setDates();

    // Load up a year's worth of data to start. If we have a start date, make sure
    // we have at least six months before it to load.
    let targetRangeStartDate = d3.timeYear.offset(selected.dateExtent[1], -1);
    if (selected.startDate) {
      const startDatePadding = d3.timeMonth.offset(selected.startDate, -6);
      targetRangeStartDate = d3.min([ startDatePadding, targetRangeStartDate ]);
    }
    if (selected.dateExtent[0] > targetRangeStartDate) {
      loadImpactsData(false);
    }
  }

  filterer.active(selected.meta);
  meta_filter.datum(APP_CONFIG.meta_lables);
  meta_filter.call(filterer);

  time_slice_filterer.active(selected.timeslice.key);
  time_slice_filter.datum(getTimeFilterDatum());
  time_slice_filter.call(time_slice_filterer);

  updateDisplay();
}


// set up our components
const init_components = (root) => {
  filterer = new Filterer();
  filterer.onChange(filterChange);
  meta_filter = root.select('#visualizer-meta-filter');

  metaList = new CheckboxList(root.select('#visualizer-meta'));
  metaList.onChange(metaChange);

  time_slice_filterer = new Filterer();
  time_slice_filterer.onChange(timeSliceChange);
  time_slice_filter = root.select('#visualizer-time-slice-filter');

  linechart = new LineChart(root.select('#visualizer-chart'), APP_CONFIG.targets);
  linechart.onLegendClick(onLegendClick);

  paginator = new Paginator(root.select('#visualizer-date-paginator'));
  paginator.onClick = (dir) => {
    if (dir === 'prev') {
      incrementDates(-1);
    } else {
      incrementDates(1);
    }
  }

}

const loadAnalyticsData = (toDate = null, clear = true) => {
  if (analyticsLoading) return;
  analyticsLoading = true;

  const endDate = toDate || new Date();
  const startDate = d3.timeYear.offset(endDate, -1);
  getAnalyticsData(analyticsViewId, startDate, endDate)
    .then(data => {
      if (loadedData.analytics) data = data.concat(loadedData.analytics);
      onDataLoaded(root, { analytics: data });
    })
    .catch(err => {
      // Handle when not logged in
      let message;
      if (err.result) {
        message = err.result.error.message;
      }
      else {
        message = err;
      }
      console.log('Error while getting analytics data:', message);
    })
    .finally(() => {
      analyticsLoading = false;
    });
}

let currentImpactsPage = 0;

const loadImpactsData = (clear = true) => {
  let currentImpacts = loadedData.impacts || [];
  if (clear) {
    currentImpactsPage = 0;
    currentImpacts = [];
  }
  impacts_loader(APP_CONFIG.impact_data_feed + (location.search || '?') + `&page=${currentImpactsPage++}`, results => {
    const impacts = results
      .map(d => {
        d.dt = new Date(d.dt);
        return d;
      })
      .concat(currentImpacts)
      .sort((a,b) => d3.ascending(a.ts, b.ts));

    onDataLoaded(root, { impacts })
  });
};

const initialize = options => {
  root = d3.select(options.rootNode);
  root.classed('loading', true);
  init_components(root);

  if (window.gapi && gapi.auth2.init().isSignedIn.get()) {
    loadAnalyticsData();
  }

  loadImpactsData();
}

const namespace = !window.stamen ? window.stamen = {} : window.stamen;
namespace.visualizer = {
  version: 1.2,
  initialize,
  getAnalyticsData: loadAnalyticsData,
  destroy: () => {}
};

// init();
