<?php
/**
 * @file
 * outcomes.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function outcomes_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'impact_importer-subtopic-explode';
  $feeds_tamper->importer = 'impact_importer';
  $feeds_tamper->source = 'Subtopic';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';%s',
    'limit' => '',
    'real_separator' => '; ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['impact_importer-subtopic-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'impact_importer-tags-explode';
  $feeds_tamper->importer = 'impact_importer';
  $feeds_tamper->source = 'Tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';%s',
    'limit' => '',
    'real_separator' => '; ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['impact_importer-tags-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'impact_importer-topic-explode';
  $feeds_tamper->importer = 'impact_importer';
  $feeds_tamper->source = 'Topic';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';%s',
    'limit' => '',
    'real_separator' => '; ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['impact_importer-topic-explode'] = $feeds_tamper;

  return $export;
}
