<?php

/**
 * @file
 * outcomes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function outcomes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function outcomes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function outcomes_node_info() {
  $items = array(
    'outcome' => array(
      'name' => t('Outcome'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Description'),
      'help' => t('Please record deliberate distribution of your projects, organic pick-up of and response to stories, and impact stemming from your content.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
