<?php

/**
 * @file
 * base_configuration.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function base_configuration_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Home',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'basic_page',
  'language' => 'und',
  'created' => 1432841754,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2b1c9950-4ba0-4942-b434-111ab950fa62',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<a href="/node/add/outcome" class="home-add-outcome">
  <span class="icon-macro"></span> <span class="icon-meso"></span> <span class="icon-micro"></span> <span class="icon-media"></span>
  <h1>Submit Outcome</h1>
</a>',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-28 12:35:54 -0700',
  'user_uuid' => 'e7a88214-3302-4ef4-a5c4-7416b6a33057',
);
  return $nodes;
}
