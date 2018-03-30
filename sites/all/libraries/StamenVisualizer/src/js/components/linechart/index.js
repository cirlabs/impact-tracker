import * as d3 from 'd3';
import './index.scss';

const ADDITIONAL_LEGEND_OBJECTS = [
  {
    key: 'total_logs',
    label: 'Total logs'
  },
  {
    key: 'page_views',
    label: 'Page Views'
  }
];

const LineChart = (selection, data_targets) => {
  const chart = {};
  const rootElm = selection.attr('class', 'nodata');
  const svg = rootElm.append('svg').attr('class', 'line-chart');
  const g = svg.append('g');
  let axisX, axisY, axisY2, totalBarGroup, barGroup, analyticsLine, highlightBars, highlightBarRects;
  let log_axis_label, legend;
  let interactive, interactiveline;

  let tooltip = rootElm.append('div')
      .attr('class', 'tooltip');

  let margin = {top: 20, right: 40, bottom: 40, left: 40};
  let size = {w: rootElm.node().offsetWidth, h: 500};
  let width, height;
  let hashtable;

  let isTotalActive = false;
  let isPageViewsActive = true;

  const barKeys = data_targets.map(d => d.key);
  let legendData = [...data_targets, ...ADDITIONAL_LEGEND_OBJECTS].map(d => {

    let active;

    if (d.label === 'Page Views') {
      active = isPageViewsActive;
    } else if (d.label === 'Total logs') {
      active = isTotalActive;
    } else {
      active = !isTotalActive;
    }

    const isBar = d.clr ? true : false;

    return {
      key: d.key,
      label: d.label,
      active: active,
      isRenderable: active,
      isOutcomeKey: !isBar,
      isBar
    }
  });


  let colors = data_targets.map(d => d.clr);
  const PAD_PADDING = 2;

  let data = null;
  let analytics_data = null;
  let selectedDate = null;
  let selectedDateRange;
  let barWidth = 1;

  const dateFormatter = d3.timeFormat('%m/%d/%Y');
  const commaizer = d3.format('0,')
  let x = d3.scaleTime().clamp(true);
  let y = d3.scaleLinear();
  let y2 = d3.scaleLinear();
  let z = d3.scaleOrdinal()
    .range([...colors])
    .domain([...barKeys]);

  const colorMap = {};
  legendData.forEach(d => {
    colorMap[d.key] = z(d.key);
  });

  let line = d3.line()
    .curve(d3.curveBasis)
    .x(function(d) {
      return x(d.dt);
    })
    .y(function(d) {
      return y2(d.total);
    });

  let bisectDate = d3.bisector(function(d) { return d.ts; }).left;
  let getDataForDate = function(arr, ts) {
    if (!arr || !arr.length) return;

    let idx = bisectDate(arr, ts, 1);
    let d0 = arr[idx - 1];
    let d1 = arr[idx];
    if (!d1) return d0;
    return ts - d0.ts > d1.ts - ts ? d1 : d0;
  }

  let onChartClickHandler = () => {};
  let _onLegendClick = () => {};


  const dimensions = () => {
    const w = size.w - margin.left - margin.right;
    const h = size.h - margin.top - margin.bottom;

    return [w, h];
  }

  const onSize = () => {
    [width, height] = dimensions();

    svg
      .attr('width', width + margin.left + margin.right)
      .attr('height', height + margin.top + margin.bottom);

    g.attr('transform', `translate(${margin.left}, ${margin.top})`)

    x.range([0, width]);
    y.range([height, 0]);
    y2.range([height, 0]);
  }

  const computeBarWidth = (data) => {
    const outer_padding = width * .01;
    x.range([outer_padding, width - outer_padding])
      .domain(selectedDateRange);

    const x0 = x(selectedDateRange[0]);
    const x1 = x(d3.timeDay.offset(selectedDateRange[0]), 1);
    const barWidth = Math.floor(x1 - x0 - PAD_PADDING);

    x.range([barWidth + outer_padding, width - outer_padding - barWidth]);

    return barWidth;
  }

  const formatTip = (impactObj, analyticsObj, dt) => {
    dt = dateFormatter(dt);

    let vals = barKeys.map(k => {
      if ((impactObj && analyticsObj) && (+analyticsObj.dt !== +impactObj.dt)) return `<p>${k}: 0</p>`;
      return `<p>${k}: ${impactObj[k]}</p>`;
    });

    if (analyticsObj) {
      vals.push(`<p>Pageviews: ${commaizer(analyticsObj.total)}</p>`);
    }

    return `<p class="date">${dt}</p>${vals.join('')}`;
  }

  const getDataFromMousePosition = (context) => {
    let mx = d3.mouse(context)[0];
    let my = d3.mouse(context)[1];
    let dt = x.invert(mx);
    dt = d3.timeDay.floor(dt);
    let ts = +dt;

    let d0 = getDataForDate(data, ts);
    let d1 = getDataForDate(analytics_data, ts);
    return [dt, mx, my, d0, d1];
  }

  const interactiveHandler = function() {
    let [dt, mx, my, d0, d1] = getDataFromMousePosition(this);

    if (!dt) return;
    // dt = d3.timeDay.floor(dt);
    const ts = +dt;
    // if (ts === selectedDate) return;
    selectedDate = ts;

    highlightBarRects.classed('active', false)
    .filter(d => {
      return d.ts === ts;
    })
    .classed('active', true);

    let msg = formatTip(d0, d1, dt);
    tooltip.html(msg);

    let tx = mx + margin.left;
    const posRight = mx + tooltip.node().offsetWidth;
    if (posRight > width) {
      tx -= posRight - width;
    }

    let ty = my + margin.top;
    const bottom = tooltip.node().offsetHeight + my;
    if (bottom > height) {
      ty += height - bottom;
    }

    tooltip
      .style('left', `${tx - (barWidth / 2)}px`)
      .style('top', `${ty}px`);


    let lh = height - my;
    interactiveline
      .attr('height', lh)
      .attr('y', my)
      .attr('transform', `translate(${x(dt) - (barWidth / 2)},0)`);
  }

  const createChildren = () => {
    axisX = g.append('g')
      .attr('class', 'axis axis--x');

    axisY = g.append('g')
      .attr('class', 'axis axis--y');

    log_axis_label = axisY.append('text')
      .attr('class', 'logs-label')
      .attr('transform', 'rotate(-90)')
      .attr('y', 6)
      .attr('dy', '0.71em')
      .attr('fill', '#000');
      //.text('# of log records');

    axisY2 = g.append('g')
      .attr('class', 'axis axis--y');

    axisY2
      .append('text')
      .attr('transform', 'rotate(90)')
      .attr('y', 6)
      .attr('dy', '0.71em')
      .attr('fill', '#000')
      .text('Google Analytics');

    highlightBars = g.append('g').attr('class', 'highlight-bars');
    totalBarGroup = g.append('g').attr('class', 'total-bars');
    barGroup = g.append('g').attr('class', 'log-bars');;

    analyticsLine = g.append('g')
      .attr('class', 'impacts')
    .append('path')
      .attr('class', 'line');

    interactive = g.append('rect')
    .attr('class', 'interactive')
    .attr('x', 0)
    .attr('y', 0)
    .on('mousemove', interactiveHandler)
    .on('mouseout', function() {
      tooltip.classed('show', false);
      interactiveline.classed('show', false);
      highlightBarRects.classed('active', false);
    }).on('mouseover', function(d) {
      tooltip.classed('show', true);
      interactiveline.classed('show', true);
    }).on('click', function(d) {
      d3.event.preventDefault();

      let [dt, mx, my, d0, d1] = getDataFromMousePosition(this);

      onChartClickHandler(d0, d1);
    });

    interactiveline = g.append('rect')
      .attr('class', 'interactive-line')
      .attr('x', 0)
      .attr('width', 1);
  }

  const createLegend = () => {
    legend = rootElm.append('ul')
      .attr('class', 'legend')
      .selectAll('li')
      .data(legendData)
      .enter()
      .append('li')
      .attr('class', d => {
        if (!d.active) return d.key;
        return `${d.key} active`;
      })
      .on('click', function(d) {
        d3.event.preventDefault();

        const active = d3.select(this).classed('active');

        legendData = [...legendData];
        legendData.forEach(r => {
          if (r.key === d.key) {
            r.active = !active;
          }

          if (d.isOutcomeKey && r.key === 'total_logs') {
            r.active = false;
          }
        });

        legend.each(function(r) {
          const el = d3.select(this);
          if (d.key === 'total_logs' && r.isOutcomeKey) {

            if (!active === true) {
              el.classed('active', false);
            } else {
              el.classed('active', r.active);
            }


          } else if (d.isOutcomeKey && r.key === 'total_logs') {
            el.classed('active', false);

          } else if (r.key === d.key) {
            el.classed('active', !active);
          }
        });

        const rootLegendNode = rootElm.select('ul.legend');
        legendData.forEach(r => {
          const elm = rootLegendNode.select(`.${r.key}`);
          r.isRenderable = elm.classed('active');
        });

        _onLegendClick(legendData);
        render();
      });

    legend.append('span')
      .attr('class', 'clr')
      .style('background', d => colorMap[d.key]);

    legend.append('span')
      .attr('class', 'txt')
      .text(d => d.label);
  }

  const render = () => {
    if (data === null) return;

    rootElm.classed('nodata', false);

    onSize();

    let activeBars = legendData.filter(d => {
      return d.isRenderable && d.isBar;
    }).map(d => d.key);

    const isAnalyticsActive = legendData.some(d => {
      if (d.key === 'page_views' && d.isRenderable) return true;
      return false;
    });

    const isTotalBarsActive = legendData.some(d => {
      if (d.key === 'total_logs' && d.isRenderable) return true;
      return false;
    });

    if (isTotalBarsActive) activeBars = [];

    hashtable = {};
    data.forEach((d,i) => {
      hashtable[d.dt] = i;
    });

    barWidth = computeBarWidth(data);

    const barTotalKey = (isTotalBarsActive) ? 'total_logs' : 'total_outcomes';
    y.domain([0, d3.max(data, d => d[barTotalKey])]);

    if (analytics_data) {
      y2.domain([0, d3.max(analytics_data, d => d.total)]);
    }

    axisX
      .attr('transform', 'translate(0,' + height + ')')
      .call(d3.axisBottom(x).ticks(8));

    axisY
      .call(d3.axisLeft(y));

    axisY2
      .attr('transform', `translate(${width}, 0)`)
      .call(d3.axisRight(y2));

    if (isTotalBarsActive) {
      log_axis_label.text('# of log records');
    } else {
      log_axis_label.text('# of outcomes');
    }

    interactive
      .attr('width', width)
      .attr('height', height);

    interactiveline
      .attr('height', height)
      .attr('y', height)
      .attr('transform', `translate(0,0)`);

    const days = d3.timeDay.range(x.domain()[0], d3.timeDay.offset(x.domain()[1], 1)).map(d => {
      return {
        dt: d,
        ts: +d
      };
    });

    let hbars = highlightBars.selectAll('rect')
      .data(days, d => d.ts);

    hbars.enter()
      .append('rect')
      .attr('class', 'highlight-bar')
      .attr('x', d => { return x(d.dt) - (barWidth / 2); })
      .attr('y', 0)
      .attr('height', height)
      .attr('width', barWidth)
      .merge(hbars)
      .attr('x', d => { return x(d.dt) - (barWidth / 2); })
      .attr('y', 0)
      .attr('height', height)
      .attr('width', barWidth)

    hbars.exit().remove();

    highlightBarRects = d3.selectAll('.highlight-bar');

    // totalBarGroup.selectAll('.rect-total').remove();
    let bars = totalBarGroup.selectAll('.rect-total')
      .data(data);

    bars
      .enter().append('rect')
        .attr('class', 'rect-total')
        .attr('x', d => { return x(d.dt) - (barWidth / 2); })
        .attr('y', d => y(d.total_logs))
        .attr('height', d => { return height - y(d.total_logs); })
        .attr('width', barWidth)
      .merge(bars)
        .transition()
        .attr('x', d => { return x(d.dt) - (barWidth / 2); })
        .attr('y', d => y(d.total_logs))
        .attr('height', d => {
          if (!isTotalBarsActive) return 0;
          return height - y(d.total_logs);
        })
        .attr('width', barWidth);

    bars.exit().remove();


    const stackedData = d3.stack().keys(activeBars)(data);

    //barGroup.selectAll('.group-stacked').remove();

    let barGroups = barGroup.selectAll('.group-stacked')
      .data(stackedData);

    barGroups
      .enter().append('g')
        .attr('class', 'group-stacked')
        .attr('fill', d => colorMap[d.key])
      .merge(barGroups)
        .attr('fill', d => colorMap[d.key]);

    barGroups.exit().remove();

    let sbars = barGroup.selectAll('.group-stacked').selectAll('rect')
      .data(d => d);

    sbars
      .enter().append('rect')
        .attr('id', d => { return d.data.id; })
        .attr('x', d => { return x(d.data.dt) - (barWidth / 2); })
        .attr('y', d => y(d[0]))
        .attr('height', 0)
        .attr('width', barWidth)
      .merge(sbars)
        .transition()
        .attr('x', d => { return x(d.data.dt) - (barWidth / 2); })
        .attr('y', d => y(d[1]))
        .attr('height', d => { return y(d[0]) - y(d[1]); })
        .attr('width', barWidth);

    sbars.exit().remove();

    const showAnalytics = Array.isArray(analytics_data) && analytics_data.length > 0;

    rootElm.select('li.page_views').style('display', d => {
      return showAnalytics ? 'block' : 'none';
    });

    if (!showAnalytics) return;

    analyticsLine
      .transition()
      .attr('d', isAnalyticsActive ? line(analytics_data) : '');
  }


  chart.data = (impacts, analytics, dateRange) => {
    if (impacts) {
      data = impacts;
    }

    if (analytics != null) {
      analytics_data = analytics;
    }

    selectedDateRange = dateRange;

    render();
    return chart;
  };

  chart.onClickHandler = (fn) => {
    if (typeof fn !== 'function') return onChartClickHandler;
    onChartClickHandler = fn;

    return chart;
  }

  chart.onLegendClick = (fn) => {
    if (typeof fn !== 'function') return _onLegendClick;
    _onLegendClick = fn;

    return chart;
  }

  chart.getHash = () => {

    const h = legendData.filter(d => d.active).map(d => d.key);
    return h.join(':');
  }

  chart.setLegend = (keys) => {
    if (!legend) return;
    if (keys.length < 1) return;


    legendData = [...legendData];
    legendData.forEach(r => {
      r.active = keys.indexOf(r.key) > -1;
    });

    const hasTotal = keys.indexOf('total_logs') > -1;

    legend.each(function(r) {
      const el = d3.select(this);
      if (r.isOutcomeKey) {

        if (hasTotal === true) {
          el.classed('active', false);
        } else {
          el.classed('active', r.active);
        }

      } else if (r.key === 'total_logs') {
        el.classed('active', hasTotal);

      } else {
        el.classed('active', r.active);
      }
    });

    const rootLegendNode = rootElm.select('ul.legend');
    legendData.forEach(r => {
      const elm = rootLegendNode.select(`.${r.key}`);
      r.isRenderable = elm.classed('active');
    });
  }

  chart.size = (w, h) => {
    size.w = w;
    size.h = h;

    render();
    return chart;
  };


  createChildren();
  createLegend();

  return chart;
}

export default LineChart;
