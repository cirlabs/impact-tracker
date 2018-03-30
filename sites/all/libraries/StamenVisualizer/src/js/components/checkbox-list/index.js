import * as d3 from 'd3';
import './index.scss';

const CheckboxList = (selection) => {
  let onChangeHandler = () => {};
  const rootElm = selection;
  const container = rootElm.append('ul').attr('class', 'checkbox-list');
  const list = {};
  let selected = [];

  let data = null;

  const setSelected = () => {
    container.selectAll('li')
      .classed('no-value', d => d.val < 1)
    .select('input')
      .property('checked', isSelected)
      .property('disabled', isDisabled);
  };

  const handleCheckboxChange = d => {
    // setSelected(d);

    if (isSelected(d)) {
      selected = selected.filter(item => item !== d.label);
    } else {
      selected = [...selected, d.label];
    }

    onChangeHandler(selected);
  }

  const isSelected = d => {
    return selected.indexOf(d.label) > -1;
  }

  const isDisabled = d => {
    return d.val < 1;
  }

  const render = () => {
    if (data === null) return;

    let li = container.selectAll('li')
      .data(data, d => d.label);

    li.order();

    let li_enter = li.enter()
      .append('li');

    let label = li_enter.append('label');

    label
      .append('input')
      .attr('type', 'checkbox')
      .attr('value', d => d.val)
      .on('change', handleCheckboxChange);

    label.append('span')
      .attr('class', 'label')
      .text(d => d.label);

    label.append('span')
      .attr('class', 'counts');

    let merged = li_enter
      .merge(li);

    merged
      .classed('no-value', d => d.val < 1);

    merged.select('input')
      .property('checked', isSelected)
      .property('disabled', isDisabled);

    merged.select('.counts')
      .text(d => `${d.val}/${d.total}`)

    li.exit().remove();
  };

  list.data = (arr) => {
    data = arr;
    render();
    return list;
  };

  list.onChange = fn => {
    if (typeof fn !== 'function') return onChangeHandler;
    onChangeHandler = fn;

    return list;
  }

  list.selected = _ => {
    selected = [..._];
    setSelected();
    return list;
  }

  return list;

}

export default CheckboxList;
