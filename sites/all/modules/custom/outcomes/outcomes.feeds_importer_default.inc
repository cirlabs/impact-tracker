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
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
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
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Additional notes',
            'target' => 'field_additional_notes',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Attachments',
            'target' => 'field_attachments:uri',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Date',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Macro',
            'target' => 'field_macro',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'Media',
            'target' => 'field_media',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'Meso',
            'target' => 'field_meso',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'Micro',
            'target' => 'field_micro',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'Node UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          9 => array(
            'source' => 'Reviewed',
            'target' => 'field_reviewed',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Subtopic',
            'target' => 'field_subtopics',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          11 => array(
            'source' => 'Tags',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          12 => array(
            'source' => 'Topic',
            'target' => 'field_topics',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          13 => array(
            'source' => 'Publication Link',
            'target' => 'field_publications:field_link:url',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Publication Medium',
            'target' => 'field_publications:field_mediums',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          15 => array(
            'source' => 'Publication',
            'target' => 'field_publications:field_publication',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          16 => array(
            'source' => 'Story Link',
            'target' => 'field_story_link:url',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Story',
            'target' => 'field_story',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          18 => array(
            'source' => 'Story Partner Link',
            'target' => 'field_story_partner:field_link:url',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Story Partner Publication',
            'target' => 'field_story_partner:field_publication',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          20 => array(
            'source' => 'Grant',
            'target' => 'field_grant',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          21 => array(
            'source' => 'Submitter',
            'target' => 'field_submitter',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          22 => array(
            'source' => 'Author',
            'target' => 'field_author',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          23 => array(
            'source' => 'Platform',
            'target' => 'field_platform',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'outcome',
        'update_non_existent' => 'skip',
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
