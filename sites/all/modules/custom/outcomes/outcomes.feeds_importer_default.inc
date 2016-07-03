<?php
/**
 * @file
 * outcomes.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function outcomes_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'impact_importer';
  $feeds_importer->config = array(
    'name' => 'Impact Importer',
    'description' => '',
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
            'source' => 'Media',
            'target' => 'field_media',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Date',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Topic',
            'target' => 'field_topics',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'Additional notes',
            'target' => 'field_additional_notes',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Tags',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          7 => array(
            'source' => 'Macro',
            'target' => 'field_macro',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'Meso',
            'target' => 'field_meso',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          9 => array(
            'source' => 'Micro',
            'target' => 'field_micro',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          10 => array(
            'source' => 'Subtopic',
            'target' => 'field_subtopics',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          11 => array(
            'source' => 'Publication',
            'target' => 'field_temp_publications',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Other publication',
            'target' => 'field_temp_other_publications',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Link',
            'target' => 'field_temp_link',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Attachment',
            'target' => 'field_temp_attachments',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Created on',
            'target' => 'created',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Medium',
            'target' => 'field_temp_mediums',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
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
  $export['impact_importer'] = $feeds_importer;

  return $export;
}
