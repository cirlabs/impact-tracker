<?php

/**
 * @file
 * outcomes.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function outcomes_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-impact_log-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'impact_log-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'impact' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'impact',
        'weight' => -6,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
