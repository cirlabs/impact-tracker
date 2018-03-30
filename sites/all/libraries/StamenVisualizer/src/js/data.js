import * as d3 from 'd3';
import APP_CONFIG from '../config';

export const logDateFormatter = d3.timeFormat('%m/%d/%Y');

const BAR_KEYS = APP_CONFIG.targets.map(d => d.key);

// http://cir.impact-tracker.org/log/export?field_date_value[min][date]=02/02/2017&field_date_value[max][date]=5/3/2017
export const get_impact_url = (config, hashDates) => {
  const loc = document.location;
  if (loc.origin.indexOf('impact-tracker.org') > -1) {
    const validHashDates = hashDates[0] !== null && hashDates[1] !== null;
    let start, end;

    if (validHashDates) {
      start = hashDates[0];
      end = hashDates[1];
    } else {
      end = new Date();
      start = d3.timeMonth.offset(end, -3);
    }

    return `/log/export?field_date_value[min][date]=${logDateFormatter(start)}&field_date_value[max][date]=${logDateFormatter(end)}`;
  }

  return config.demo_data.impactdata;
}

export const ANALYTICS_TIME_PARSER = d3.timeParse('%Y%m%d');

export const get_ga_url = (config) => {
  return config.demo_data.gafiles;
}

export const getAnalyticsData = (viewId, startDate, endDate) => {
  const analyticsTimeFormat = d3.timeFormat('%Y-%m-%d');
  return new Promise((resolve, reject) => {
    gapi.client.request({
      path: '/v4/reports:batchGet',
      root: 'https://analyticsreporting.googleapis.com/',
      method: 'POST',
      body: {
        reportRequests: [{
          viewId: viewId,
          metrics: [{ expression: 'ga:users' }],
          dimensions: [{ name: 'ga:date' }],
          dateRanges: [{ 
            startDate: analyticsTimeFormat(startDate),
            endDate: analyticsTimeFormat(endDate)
          }],
          orderBys: [{ fieldName: 'ga:date' }]
        }]
      }
    }).then((response) => {
      const rows = response.result.reports[0].data.rows;
      const mapped = rows.map(d => {
        d.dt = d3.timeDay.floor(ANALYTICS_TIME_PARSER(d.dimensions[0]));
        d.ts = +d.dt;
        d.total = d.views = +d.metrics[0].values[0];
        return d;
      });
      resolve(mapped);
    }, (error) => reject(error));
  });
}

export const analytics_loader = (urls, callback) => {
  let promises = urls.map(url => {
    return new Promise((resolve, reject) => {
      d3.csv(url, row => {
        row.Pageviews = +row.Pageviews.replace(',', '');
        row.dt = d3.timeDay.floor(ANALYTICS_TIME_PARSER(row.Date));
        row.ts = +row.dt;
        return row;
      }, results => {
        resolve(results);
      });
    });
  });

  Promise.all(promises).then(results => {
    callback([].concat(...results));
  });
}

export const analytics_rollup = data => {
  let rolled = d3.nest()
    .key(d => d.Date)
    .entries(data);

  rolled.forEach(d => {
    d.dt = d.values[0].dt;
    d.ts = d.values[0].ts;
    d.total = d3.sum(d.values, d => d.Pageviews);
  });

  return rolled.sort((a,b) => {
    return d3.ascending(a.dt, b.dt);
  });
}

export const filter_analytics = (data, dateExtent) => {
  if (!Array.isArray(data)) return [];

  return data
    .filter(d => d.dt >= dateExtent[0] && d.dt <= dateExtent[1])
    .sort((a, b) => d3.ascending(a.dt, b.dt));
}

const process_rollup = (data) => {
  return Object.keys(data).map(k => {
    return {
      val: data[k][1],
      total: data[k][0],
      label: k
    };
  });
}

export const rollup_sort = (data, pushBottom=null) => {
  return data.sort((a,b) => {
    // deal with labels that we want to stick
    // to last
    if (pushBottom !== null) {
      if (pushBottom.indexOf(a.label) > -1) return 1;
      if (pushBottom.indexOf(b.label) > -1) return -1;
    }


    if (a.total === b.total) {
      return d3.ascending(a.label, b.label);
    }

    return d3.descending(a.total, b.total);
  });
}

export const verify_items = (arr, key, items, emptyLabel='unassigned') => {
  const out = {};
  arr.forEach(d => {
    let v = d[key];
    if (v.length === 0) v = emptyLabel;

    const vals = v.split(',').map(d => d.trim());
    vals.forEach(p => {
      if (!out[p]) {
        out[p] = 1;
      }
    });
  });

  const valid = [];

  return items.filter(d => {
    return out.hasOwnProperty(d);
  });
}

export const comma_rollup = (arr, key, selected, dateExtent, emptyLabel='unassigned') => {
  const hasSelections = selected.length ? true : false;
  let out = {};

  arr.forEach(d => {
    let v = d[key];

    if (d.ts > dateExtent[1] || d.ts < dateExtent[0]) return;
    if (v.length === 0) v = emptyLabel;

    const values = v.split(',').map(d => d.trim());
    let contains;

    if (!hasSelections) {
      contains = true;
    } else {
      contains = selected.every(d => {
        return values.indexOf(d) > -1;
      });
    }

    values.forEach(p => {
      if (!out[p]) {
        out[p] = [0, 0];
      }

      out[p][0]++;

      if (!hasSelections || contains) {
        out[p][1]++;
      }
    });
  });

  return process_rollup(out);
}

export const rollup = (arr, key, emptyLabel='unassigned') => {
  let out = {};

  arr.forEach(d => {
    let v = d[key];

    if (v.length === 0) v = emptyLabel;

    if (!out[v]) {
      out[v] = 0;
    }
    out[v] ++;
  });

  return process_rollup(out);
}

export const impacts_loader = (url, callback) => {
  d3.json(url + location.search , payload => {
    const outcomes = payload && payload.outcomes;
    if (!outcomes || !Array.isArray(outcomes)) return callback([]);

    callback(outcomes.map(d => {
      const o = {...d.outcome};

      o.dt = d3.timeDay.floor(new Date(o.date));
      o.ts = +o.dt;

      return o;
    }));
  });
}

export const bar_data = (data, meta_key, meta_selected, dateExtent) => {
  let out = data
    .filter(d => {
      return (d.ts <= dateExtent[1] && d.ts >= dateExtent[0]);
    })
    .map(d => {
    let o = {};
    BAR_KEYS.forEach(k => {
      o[k] = d[k] && d[k].length ? 1 : 0;
    });

    o.impact_date = d.date;
    o.dt = new Date(d.ts); // clone
    o.ts = +o.dt;
    o.meta = d[meta_key];
    return o;
  });

  let nested = d3.nest()
      .key(d => d.impact_date)
      .entries(out);

  const hasSelections = meta_selected.length ? true : false;
  return nested.map(d => {
    let o = {};
    o.dt = d.values[0].dt;
    o.ts = d.values[0].ts;

    o.values = d.values;
    o.impact_date = d.values[0].impact_date;
    o.total_logs = (data.filter(r => o.impact_date === r.date)).length;

    let total = 0;
    BAR_KEYS.forEach(k => {
      o[k] = 0;
      d.values.forEach(v => {
        const meta_values = v.meta.split(',').map(r => r.trim());

        const contains = meta_values.some(r => {
          return meta_selected.indexOf(r) > -1;
        });

        if (!hasSelections || contains) {
          total += v[k];
          o[k] += v[k];
        }
      });
    });

    o.total_outcomes = total;
    o.max_total = Math.max(o.total_outcomes, o.total_logs);
    return o;
  });
}
