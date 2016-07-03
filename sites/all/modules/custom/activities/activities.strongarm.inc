<?php
/**
 * @file
 * activities.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function activities_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_activity';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_activity'] = $strongarm;

  return $export;
}
