<?php
/**
 * @file
 * activities.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function activities_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_activity-log:activity-log.
  $menu_links['main-menu_activity-log:activity-log'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'activity-log',
    'router_path' => 'activity-log',
    'link_title' => 'Activity Log',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_activity-log:activity-log',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activity Log');

  return $menu_links;
}
