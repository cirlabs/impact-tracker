<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div class="impact-log-actions">
    <?php if ($exposed): ?>
      <button class="impact-filters-toggle">Filter Results</button>
    <?php endif; ?>
    <?php print $feed_icon; ?>
  </div>


  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <div id="timeline" class="loading">
    <div class="timeline-limit-warning">The timeline is only able to display up to 1000 outcomes at a time, but you have selected more than that. The chart below is only displaying the most recent 1000 outcomes from your selection.</div>
    <div class="timeline-message timeline-error">There was an error loading the timeline</div>
    <div class="timeline-message timeline-no-results">There are no outcomes to show</div>
    <div id="timeline-chart"></div>
    <div id="timeline-key" class="clearfix">
      <div class="timeline-key-section">
        <h3>Outcome Types</h3>
        <ul>
          <li><span class="icon-macro"></span> Macro</li>
          <li><span class="icon-meso"></span> meso</li>
          <li><span class="icon-micro"></span> micro</li>
          <li><span class="icon-media"></span> media</li>
        </ul>
      </div>
      <div class="timeline-key-section">
        <h3>Topics</h3>
        <ul id="timeline-topics-key-container">
          <li><span class="icon-circle topic-undefined"></span> Undefined</li>
        </ul>
      </div>
    </div>
  </div>

  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>
