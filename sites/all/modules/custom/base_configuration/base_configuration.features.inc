<?php

/**
 * @file
 * base_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_menu_item_visibility_export_fields().
 */
function base_configuration_menu_item_visibility_export_fields() {
  $items = array(
    'main-menu_impact-log:log' => array(
      0 => array(
        'rid' => 2,
      ),
      1 => array(
        'rid' => 3,
      ),
      2 => array(
        'rid' => 4,
      ),
    ),
    'main-menu_review-submissions:review' => array(
      0 => array(
        'rid' => 3,
      ),
      1 => array(
        'rid' => 4,
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function base_configuration_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
