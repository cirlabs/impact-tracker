<?php
/**
 * @file
 * meltwater_archive_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function meltwater_archive_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meltwater_archive_importer-date-php';
  $feeds_tamper->importer = 'meltwater_archive_importer';
  $feeds_tamper->source = 'Date';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'return date_timestamp_get(date_create_from_format(\'d-F-Y h:iA\', substr($field, -19))); ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Execute php code';
  $export['meltwater_archive_importer-date-php'] = $feeds_tamper;

  return $export;
}
