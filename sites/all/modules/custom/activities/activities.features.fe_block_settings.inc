<?php
/**
 * @file
 * activities.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function activities_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-add_activity'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'add_activity',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'impact' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'impact',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
