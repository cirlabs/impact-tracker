<?php
/**
 * @file
 * activities.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function activities_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Add Activity';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'add_activity';
  $fe_block_boxes->body = '<a href="/node/add/activity" class="home-add-activity">
  <span class="icon-impact"></span>
  <h1>Submit Activity</h1>
</a>';

  $export['add_activity'] = $fe_block_boxes;

  return $export;
}
