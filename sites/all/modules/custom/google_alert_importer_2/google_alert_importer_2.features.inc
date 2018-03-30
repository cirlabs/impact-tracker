<?php
/**
 * @file
 * google_alert_importer_2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function google_alert_importer_2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
