<?php
/**
 * @file
 * meltwater_archive_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function meltwater_archive_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'meltwater_archive_importer';
  $feeds_importer->config = array(
    'name' => 'Meltwater Archive Importer',
    'description' => 'Import an Excel file of past Meltwater items',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'xls xlsx',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExcelParser',
      'config' => array(
        'all_worksheets' => 0,
        'max_rows' => 65535,
        'chunk_size' => 50,
        'use_chunk_reader' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Date',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Headline',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'URL',
            'target' => 'field_publications:field_link:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'URL',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'Source',
            'target' => 'field_publications:field_publication',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'Hit Sentence',
            'target' => 'field_additional_notes',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'outcome',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['meltwater_archive_importer'] = $feeds_importer;

  return $export;
}
