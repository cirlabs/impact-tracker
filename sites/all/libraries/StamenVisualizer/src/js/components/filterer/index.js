import * as d3 from 'd3';
import './index.scss';

const Filterer = () => {
  let onChangeHandler = () => {};
  let container = null;
  let selectedItem = null;

  const setActive = function(selected) {
    container.selectAll('li').classed('active', false)
      .filter(d => d.key === selected.key)
      .classed('active', true);
  }

  const filterer = function(selection) {
    selection.each(function(data, i) {
      let rootElm = d3.select(this);

      container = rootElm.select('ul');
      if (container.empty()) {
        container = rootElm.append('ul').attr('class', 'filterer');
      }

      if (selectedItem === null) selectedItem = data[0].key;

      let items = container.selectAll('li')
        .data(data);

      items.enter()
        .append('li')
        .on('click', (d) => {
          setActive(d);
          onChangeHandler(d);
        })
        .merge(items)
        .classed('active', d => d.key === selectedItem)
        .text(d => d.label);

      items.exit().remove();
    });
  }

  filterer.onChange = (fn) => {
    if (typeof fn !== 'function') return onChangeHandler;
    onChangeHandler = fn;

    return filterer;
  }

  filterer.active = (str) => {
    if (!arguments) return selectedItem;

    selectedItem = str;
    return filterer;
  }


  return filterer;
}

export default Filterer;