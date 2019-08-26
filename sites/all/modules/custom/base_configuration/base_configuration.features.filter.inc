<?php

/**
 * @file
 * base_configuration.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function base_configuration_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
