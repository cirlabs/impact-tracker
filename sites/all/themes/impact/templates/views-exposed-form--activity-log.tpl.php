<?php

/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $sort_by: The select box to sort the view using an exposed form.
 * - $sort_order: The select box with the ASC, DESC options to define order. May be optional.
 * - $items_per_page: The select box with the available items per page. May be optional.
 * - $offset: A textfield to define the offset of the view. May be optional.
 * - $reset_button: A button to reset the exposed filter applied. May be optional.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($q)): ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
  ?>
<?php endif; ?>

<div class="impact-filters">
  <div class="table-wrap">
    <table>
      <tr>
        <?php foreach ($widgets as $id => $widget): ?>
          <td id="<?php print $widget->id; ?>-wrapper" class="views-exposed-widget views-widget-<?php print $id; ?>">
            <?php if (!empty($widget->label)): ?>
              <label for="<?php print $widget->id; ?>">
                <?php print $widget->label; ?>
              </label>
            <?php endif; ?>
            <?php if (!empty($widget->operator)): ?>
              <div class="views-operator">
                <?php print $widget->operator; ?>
              </div>
            <?php endif; ?>
            <div class="views-widget">
              <?php print $widget->widget; ?>
              <?php if ($id == 'filter-field_date_value'): ?>
                <ul class="impact-filters-date-presets">
                  <li><a href="#" class="impact-filters-last-7">Last 7 Days</a></li>
                  <li><a href="#" class="impact-filters-last-30">Last 30 Days</a></li>
                  <li><a href="#" class="impact-filters-last-365">Last 365 Days</a></li>
                </ul>
              <?php endif; ?>
            </div>
            <?php if (!empty($widget->description)): ?>
              <div class="description">
                <?php print $widget->description; ?>
              </div>
            <?php endif; ?>
          </td>
        <?php endforeach; ?>
      </tr>
    </table>
  </div>
  <div class="buttons">
    <div class="views-submit-button">
      <?php print $button; ?>
    </div>
    <?php if (!empty($reset_button)): ?>
      <div class="views-reset-button">
        <?php print $reset_button; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
