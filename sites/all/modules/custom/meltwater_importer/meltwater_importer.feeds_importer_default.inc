<?php
/**
 * @file
 * meltwater_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function meltwater_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'meltwater';
  $feeds_importer->config = array(
    'name' => 'Meltwater Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'use_tidy' => FALSE,
        'sources' => array(
          'title' => array(
            'name' => 'title',
            'value' => 'title',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'link' => array(
            'name' => 'link',
            'value' => 'link',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '2',
          ),
          'description' => array(
            'name' => 'description',
            'value' => 'description',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '3',
          ),
          'guid' => array(
            'name' => 'guid',
            'value' => 'guid',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '4',
          ),
          'pubdate' => array(
            'name' => 'pubDate',
            'value' => 'pubDate',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '5',
          ),
          'source' => array(
            'name' => 'source',
            'value' => 'source',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '6',
          ),
        ),
        'context' => array(
          'value' => '/rss/channel/item',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'description',
            'target' => 'field_additional_notes',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'link',
            'target' => 'field_publications:field_link:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'pubdate',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'source',
            'target' => 'field_publications:field_publication',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'link',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'outcome',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '900',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['meltwater'] = $feeds_importer;

  return $export;
}
