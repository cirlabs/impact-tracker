import * as d3 from 'd3';
import './index.scss';

const PREV_ICON = 'M15.41 7.41L14 6l-6 6 6 6 1.41-1.41L10.83 12z';
const NEXT_ICON = 'M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z';
class Paginator {
  constructor(selection) {
    this.rootElm = selection;
    this._onClickHandler = () => {};
    this.createElements();
  }

  createButton(container, klass) {
    const btn = container.append('button').attr('class', klass).attr('data-dir', klass);
    const icon = btn.append('svg')
      .attr('fill', '#000000')
      .attr('height', 24)
      .attr('width', 24)
      .attr('viewBox', '0 0 24 24')
      .attr('xmlns', 'http://www.w3.org/2000/svg');

    icon.append('path')
      .attr('d', klass === 'prev' ? PREV_ICON : NEXT_ICON);

    icon.append('path')
      .attr('d', 'M0 0h24v24H0z')
      .attr('fill', 'none');
  }

  createElements() {
    const container = this.rootElm.append('div').attr('class', 'paginator');

    this.createButton(container, 'prev');
    this.label = container.append('p').attr('class', 'label').text('');
    this.createButton(container, 'next');

    this.prevBtn = container.select('.prev');
    this.nextBtn = container.select('.next');

    const me = this;
    container.selectAll('button').on('click', function() {
      d3.event.preventDefault();
      me._onClickHandler(this.dataset.dir);
    });
  }

  set onClick(fn) {
    this._onClickHandler = fn;
  }

  set labelText(label) {
    this.label.text(label);
  }

  set prevState(bool) {
    this.prevBtn.property('disabled', bool);
  }

  set nextState(bool) {
    this.nextBtn.property('disabled', bool);
  }

}

export default Paginator;
