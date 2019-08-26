<?php

/**
 * @file
 * outcomes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function outcomes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'impact_log';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Impact Log';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Review Outcomes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_macro_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_meso_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_micro_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_media_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_story_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_topics_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_subtopics_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_grant_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_tags_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_submitter_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_author_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_date_value' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_platform_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'title' => 'title',
    'field_platform' => 'field_platform',
    'field_date' => 'field_date',
    'field_macro' => 'field_macro',
    'field_meso' => 'field_meso',
    'field_micro' => 'field_micro',
    'field_media' => 'field_media',
    'field_story' => 'field_story',
    'field_story_link' => 'field_story_link',
    'field_publications' => 'field_publications',
    'field_story_partner' => 'field_story_partner',
    'field_topics' => 'field_topics',
    'field_subtopics' => 'field_subtopics',
    'field_grant' => 'field_grant',
    'field_tags' => 'field_tags',
    'field_submitter' => 'field_submitter',
    'field_author' => 'field_author',
    'field_attachments' => 'field_attachments',
    'field_additional_notes' => 'field_additional_notes',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_platform' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_macro' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_meso' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_micro' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_media' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_story' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_story_link' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_story_partner' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topics' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_subtopics' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_grant' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_submitter' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_author' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_attachments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_additional_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Header: Applied Filters */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Applied Filters';
  $handler->display->display_options['header']['area']['content'] = '<?php
print get_exposed_filter_output();
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Showing <strong>@start-@end</strong> of <strong>@total</strong> results';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Platform */
  $handler->display->display_options['fields']['field_platform']['id'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['table'] = 'field_data_field_platform';
  $handler->display->display_options['fields']['field_platform']['field'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['delta_offset'] = '0';
  /* Field: Content: Date of Impact */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Macro */
  $handler->display->display_options['fields']['field_macro']['id'] = 'field_macro';
  $handler->display->display_options['fields']['field_macro']['table'] = 'field_data_field_macro';
  $handler->display->display_options['fields']['field_macro']['field'] = 'field_macro';
  $handler->display->display_options['fields']['field_macro']['hide_empty'] = TRUE;
  /* Field: Content: Meso */
  $handler->display->display_options['fields']['field_meso']['id'] = 'field_meso';
  $handler->display->display_options['fields']['field_meso']['table'] = 'field_data_field_meso';
  $handler->display->display_options['fields']['field_meso']['field'] = 'field_meso';
  $handler->display->display_options['fields']['field_meso']['hide_empty'] = TRUE;
  /* Field: Content: Micro */
  $handler->display->display_options['fields']['field_micro']['id'] = 'field_micro';
  $handler->display->display_options['fields']['field_micro']['table'] = 'field_data_field_micro';
  $handler->display->display_options['fields']['field_micro']['field'] = 'field_micro';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media']['id'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['table'] = 'field_data_field_media';
  $handler->display->display_options['fields']['field_media']['field'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['hide_empty'] = TRUE;
  /* Field: Content: Story */
  $handler->display->display_options['fields']['field_story']['id'] = 'field_story';
  $handler->display->display_options['fields']['field_story']['table'] = 'field_data_field_story';
  $handler->display->display_options['fields']['field_story']['field'] = 'field_story';
  /* Field: Content: Story Link */
  $handler->display->display_options['fields']['field_story_link']['id'] = 'field_story_link';
  $handler->display->display_options['fields']['field_story_link']['table'] = 'field_data_field_story_link';
  $handler->display->display_options['fields']['field_story_link']['field'] = 'field_story_link';
  $handler->display->display_options['fields']['field_story_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_story_link']['type'] = 'link_url';
  /* Field: Content: Publications */
  $handler->display->display_options['fields']['field_publications']['id'] = 'field_publications';
  $handler->display->display_options['fields']['field_publications']['table'] = 'field_data_field_publications';
  $handler->display->display_options['fields']['field_publications']['field'] = 'field_publications';
  $handler->display->display_options['fields']['field_publications']['alter']['text'] = '[field_publications:field_publication]';
  $handler->display->display_options['fields']['field_publications']['element_type'] = '0';
  $handler->display->display_options['fields']['field_publications']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publications']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_publications']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_publications']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_publications']['delta_offset'] = '0';
  /* Field: Content: Story Partner */
  $handler->display->display_options['fields']['field_story_partner']['id'] = 'field_story_partner';
  $handler->display->display_options['fields']['field_story_partner']['table'] = 'field_data_field_story_partner';
  $handler->display->display_options['fields']['field_story_partner']['field'] = 'field_story_partner';
  $handler->display->display_options['fields']['field_story_partner']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_story_partner']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_story_partner']['delta_offset'] = '0';
  /* Field: Content: Beat */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Content: Subtopic */
  $handler->display->display_options['fields']['field_subtopics']['id'] = 'field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['table'] = 'field_data_field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['field'] = 'field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['delta_offset'] = '0';
  /* Field: Content: Grant */
  $handler->display->display_options['fields']['field_grant']['id'] = 'field_grant';
  $handler->display->display_options['fields']['field_grant']['table'] = 'field_data_field_grant';
  $handler->display->display_options['fields']['field_grant']['field'] = 'field_grant';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Submitter */
  $handler->display->display_options['fields']['field_submitter']['id'] = 'field_submitter';
  $handler->display->display_options['fields']['field_submitter']['table'] = 'field_data_field_submitter';
  $handler->display->display_options['fields']['field_submitter']['field'] = 'field_submitter';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  /* Field: Content: Attachments */
  $handler->display->display_options['fields']['field_attachments']['id'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['table'] = 'field_data_field_attachments';
  $handler->display->display_options['fields']['field_attachments']['field'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachments']['delta_offset'] = '0';
  /* Field: Content: Additional notes */
  $handler->display->display_options['fields']['field_additional_notes']['id'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['table'] = 'field_data_field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['field'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_additional_notes']['alter']['text'] = '<a href="[path]" title="[field_additional_notes]">[field_additional_notes]</a>';
  $handler->display->display_options['fields']['field_additional_notes']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_additional_notes']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_additional_notes']['alter']['alt'] = '[field_additional_notes]';
  $handler->display->display_options['fields']['field_additional_notes']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_additional_notes']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_additional_notes']['hide_empty'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Descriptions:';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outcome' => 'outcome',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Macro (field_macro) */
  $handler->display->display_options['filters']['field_macro_tid']['id'] = 'field_macro_tid';
  $handler->display->display_options['filters']['field_macro_tid']['table'] = 'field_data_field_macro';
  $handler->display->display_options['filters']['field_macro_tid']['field'] = 'field_macro_tid';
  $handler->display->display_options['filters']['field_macro_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_macro_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_macro_tid']['expose']['operator_id'] = 'field_macro_tid_op';
  $handler->display->display_options['filters']['field_macro_tid']['expose']['label'] = 'Macro';
  $handler->display->display_options['filters']['field_macro_tid']['expose']['operator'] = 'field_macro_tid_op';
  $handler->display->display_options['filters']['field_macro_tid']['expose']['identifier'] = 'field_macro_tid';
  $handler->display->display_options['filters']['field_macro_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_macro_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_macro_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_macro_tid']['vocabulary'] = 'macro';
  /* Filter criterion: Content: Meso (field_meso) */
  $handler->display->display_options['filters']['field_meso_tid']['id'] = 'field_meso_tid';
  $handler->display->display_options['filters']['field_meso_tid']['table'] = 'field_data_field_meso';
  $handler->display->display_options['filters']['field_meso_tid']['field'] = 'field_meso_tid';
  $handler->display->display_options['filters']['field_meso_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_meso_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meso_tid']['expose']['operator_id'] = 'field_meso_tid_op';
  $handler->display->display_options['filters']['field_meso_tid']['expose']['label'] = 'Meso';
  $handler->display->display_options['filters']['field_meso_tid']['expose']['operator'] = 'field_meso_tid_op';
  $handler->display->display_options['filters']['field_meso_tid']['expose']['identifier'] = 'field_meso_tid';
  $handler->display->display_options['filters']['field_meso_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_meso_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_meso_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meso_tid']['vocabulary'] = 'meso';
  /* Filter criterion: Content: Micro (field_micro) */
  $handler->display->display_options['filters']['field_micro_tid']['id'] = 'field_micro_tid';
  $handler->display->display_options['filters']['field_micro_tid']['table'] = 'field_data_field_micro';
  $handler->display->display_options['filters']['field_micro_tid']['field'] = 'field_micro_tid';
  $handler->display->display_options['filters']['field_micro_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_micro_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_micro_tid']['expose']['operator_id'] = 'field_micro_tid_op';
  $handler->display->display_options['filters']['field_micro_tid']['expose']['label'] = 'Micro';
  $handler->display->display_options['filters']['field_micro_tid']['expose']['operator'] = 'field_micro_tid_op';
  $handler->display->display_options['filters']['field_micro_tid']['expose']['identifier'] = 'field_micro_tid';
  $handler->display->display_options['filters']['field_micro_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_micro_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_micro_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_micro_tid']['vocabulary'] = 'micro';
  /* Filter criterion: Content: Media (field_media) */
  $handler->display->display_options['filters']['field_media_tid']['id'] = 'field_media_tid';
  $handler->display->display_options['filters']['field_media_tid']['table'] = 'field_data_field_media';
  $handler->display->display_options['filters']['field_media_tid']['field'] = 'field_media_tid';
  $handler->display->display_options['filters']['field_media_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_media_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_tid']['expose']['operator_id'] = 'field_media_tid_op';
  $handler->display->display_options['filters']['field_media_tid']['expose']['label'] = 'Media';
  $handler->display->display_options['filters']['field_media_tid']['expose']['operator'] = 'field_media_tid_op';
  $handler->display->display_options['filters']['field_media_tid']['expose']['identifier'] = 'field_media_tid';
  $handler->display->display_options['filters']['field_media_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_media_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_media_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_media_tid']['vocabulary'] = 'media';
  /* Filter criterion: Content: Story (field_story) */
  $handler->display->display_options['filters']['field_story_tid']['id'] = 'field_story_tid';
  $handler->display->display_options['filters']['field_story_tid']['table'] = 'field_data_field_story';
  $handler->display->display_options['filters']['field_story_tid']['field'] = 'field_story_tid';
  $handler->display->display_options['filters']['field_story_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_story_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_story_tid']['expose']['operator_id'] = 'field_story_tid_op';
  $handler->display->display_options['filters']['field_story_tid']['expose']['label'] = 'Story';
  $handler->display->display_options['filters']['field_story_tid']['expose']['operator'] = 'field_story_tid_op';
  $handler->display->display_options['filters']['field_story_tid']['expose']['identifier'] = 'field_story_tid';
  $handler->display->display_options['filters']['field_story_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_story_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_story_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_story_tid']['vocabulary'] = 'stories';
  /* Filter criterion: Content: Beat (field_topics) */
  $handler->display->display_options['filters']['field_topics_tid']['id'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_tid']['field'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_tid']['expose']['operator_id'] = 'field_topics_tid_op';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['label'] = 'Beat';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['operator'] = 'field_topics_tid_op';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['identifier'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_topics_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topics_tid']['vocabulary'] = 'topics';
  /* Filter criterion: Content: Subtopic (field_subtopics) */
  $handler->display->display_options['filters']['field_subtopics_tid']['id'] = 'field_subtopics_tid';
  $handler->display->display_options['filters']['field_subtopics_tid']['table'] = 'field_data_field_subtopics';
  $handler->display->display_options['filters']['field_subtopics_tid']['field'] = 'field_subtopics_tid';
  $handler->display->display_options['filters']['field_subtopics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_subtopics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subtopics_tid']['expose']['operator_id'] = 'field_subtopics_tid_op';
  $handler->display->display_options['filters']['field_subtopics_tid']['expose']['label'] = 'Subtopic';
  $handler->display->display_options['filters']['field_subtopics_tid']['expose']['operator'] = 'field_subtopics_tid_op';
  $handler->display->display_options['filters']['field_subtopics_tid']['expose']['identifier'] = 'field_subtopics_tid';
  $handler->display->display_options['filters']['field_subtopics_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_subtopics_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_subtopics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_subtopics_tid']['vocabulary'] = 'subtopics';
  /* Filter criterion: Content: Grant (field_grant) */
  $handler->display->display_options['filters']['field_grant_tid']['id'] = 'field_grant_tid';
  $handler->display->display_options['filters']['field_grant_tid']['table'] = 'field_data_field_grant';
  $handler->display->display_options['filters']['field_grant_tid']['field'] = 'field_grant_tid';
  $handler->display->display_options['filters']['field_grant_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_grant_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_grant_tid']['expose']['operator_id'] = 'field_grant_tid_op';
  $handler->display->display_options['filters']['field_grant_tid']['expose']['label'] = 'Grant';
  $handler->display->display_options['filters']['field_grant_tid']['expose']['operator'] = 'field_grant_tid_op';
  $handler->display->display_options['filters']['field_grant_tid']['expose']['identifier'] = 'field_grant_tid';
  $handler->display->display_options['filters']['field_grant_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_grant_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_grant_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_grant_tid']['vocabulary'] = 'grants';
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Submitter (field_submitter) */
  $handler->display->display_options['filters']['field_submitter_tid']['id'] = 'field_submitter_tid';
  $handler->display->display_options['filters']['field_submitter_tid']['table'] = 'field_data_field_submitter';
  $handler->display->display_options['filters']['field_submitter_tid']['field'] = 'field_submitter_tid';
  $handler->display->display_options['filters']['field_submitter_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_submitter_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_submitter_tid']['expose']['operator_id'] = 'field_submitter_tid_op';
  $handler->display->display_options['filters']['field_submitter_tid']['expose']['label'] = 'Submitter';
  $handler->display->display_options['filters']['field_submitter_tid']['expose']['operator'] = 'field_submitter_tid_op';
  $handler->display->display_options['filters']['field_submitter_tid']['expose']['identifier'] = 'field_submitter_tid';
  $handler->display->display_options['filters']['field_submitter_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_submitter_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_submitter_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_submitter_tid']['vocabulary'] = 'submitters';
  /* Filter criterion: Content: Author (field_author) */
  $handler->display->display_options['filters']['field_author_tid']['id'] = 'field_author_tid';
  $handler->display->display_options['filters']['field_author_tid']['table'] = 'field_data_field_author';
  $handler->display->display_options['filters']['field_author_tid']['field'] = 'field_author_tid';
  $handler->display->display_options['filters']['field_author_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_author_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_tid']['expose']['operator_id'] = 'field_author_tid_op';
  $handler->display->display_options['filters']['field_author_tid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['field_author_tid']['expose']['operator'] = 'field_author_tid_op';
  $handler->display->display_options['filters']['field_author_tid']['expose']['identifier'] = 'field_author_tid';
  $handler->display->display_options['filters']['field_author_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_author_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_author_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_author_tid']['vocabulary'] = 'authors';
  /* Filter criterion: Content: Date of Impact (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Range';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+0';
  /* Filter criterion: Content: Platform (field_platform) */
  $handler->display->display_options['filters']['field_platform_tid']['id'] = 'field_platform_tid';
  $handler->display->display_options['filters']['field_platform_tid']['table'] = 'field_data_field_platform';
  $handler->display->display_options['filters']['field_platform_tid']['field'] = 'field_platform_tid';
  $handler->display->display_options['filters']['field_platform_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_platform_tid']['expose']['operator_id'] = 'field_platform_tid_op';
  $handler->display->display_options['filters']['field_platform_tid']['expose']['label'] = 'Platform';
  $handler->display->display_options['filters']['field_platform_tid']['expose']['operator'] = 'field_platform_tid_op';
  $handler->display->display_options['filters']['field_platform_tid']['expose']['identifier'] = 'field_platform_tid';
  $handler->display->display_options['filters']['field_platform_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_platform_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_platform_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_platform_tid']['vocabulary'] = 'platforms';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Review */
  $handler = $view->new_display('page', 'Review', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'path' => 'path',
    'title' => 'title',
    'field_date' => 'field_date',
    'field_media' => 'field_media',
    'field_macro' => 'field_macro',
    'field_meso' => 'field_meso',
    'field_micro' => 'field_micro',
    'field_publications' => 'field_publications',
    'field_topics' => 'field_topics',
    'field_subtopics' => 'field_subtopics',
    'field_tags' => 'field_tags',
    'field_attachments' => 'field_attachments',
    'field_additional_notes' => 'field_additional_notes',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_media' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_macro' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meso' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_micro' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topics' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subtopics' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_attachments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_additional_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Showing <strong>@start-@end</strong> of <strong>@total</strong> results';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Delete selected items',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'rules_component::rules_mark_as_reviewed' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Mark selected items as reviewed',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Add terms to selected items',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'outcome::field_macro' => 'outcome::field_macro',
          'outcome::field_media' => 'outcome::field_media',
          'outcome::field_meso' => 'outcome::field_meso',
          'outcome::field_micro' => 'outcome::field_micro',
          'outcome::field_subtopics' => 'outcome::field_subtopics',
          'outcome::field_tags' => 'outcome::field_tags',
          'outcome::field_topics' => 'outcome::field_topics',
        ),
      ),
    ),
  );
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Link to delete content */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date of Impact */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media']['id'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['table'] = 'field_data_field_media';
  $handler->display->display_options['fields']['field_media']['field'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['hide_empty'] = TRUE;
  /* Field: Content: Macro */
  $handler->display->display_options['fields']['field_macro']['id'] = 'field_macro';
  $handler->display->display_options['fields']['field_macro']['table'] = 'field_data_field_macro';
  $handler->display->display_options['fields']['field_macro']['field'] = 'field_macro';
  $handler->display->display_options['fields']['field_macro']['hide_empty'] = TRUE;
  /* Field: Content: Meso */
  $handler->display->display_options['fields']['field_meso']['id'] = 'field_meso';
  $handler->display->display_options['fields']['field_meso']['table'] = 'field_data_field_meso';
  $handler->display->display_options['fields']['field_meso']['field'] = 'field_meso';
  $handler->display->display_options['fields']['field_meso']['hide_empty'] = TRUE;
  /* Field: Content: Micro */
  $handler->display->display_options['fields']['field_micro']['id'] = 'field_micro';
  $handler->display->display_options['fields']['field_micro']['table'] = 'field_data_field_micro';
  $handler->display->display_options['fields']['field_micro']['field'] = 'field_micro';
  /* Field: Content: Publications */
  $handler->display->display_options['fields']['field_publications']['id'] = 'field_publications';
  $handler->display->display_options['fields']['field_publications']['table'] = 'field_data_field_publications';
  $handler->display->display_options['fields']['field_publications']['field'] = 'field_publications';
  $handler->display->display_options['fields']['field_publications']['alter']['text'] = '[field_publications:field_publication]';
  $handler->display->display_options['fields']['field_publications']['element_type'] = '0';
  $handler->display->display_options['fields']['field_publications']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publications']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_publications']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_publications']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_publications']['delta_offset'] = '0';
  /* Field: Content: Beat */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = 'Topics';
  $handler->display->display_options['fields']['field_topics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Content: Subtopic */
  $handler->display->display_options['fields']['field_subtopics']['id'] = 'field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['table'] = 'field_data_field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['field'] = 'field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['label'] = 'Subtopics';
  $handler->display->display_options['fields']['field_subtopics']['hide_empty'] = TRUE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Attachments */
  $handler->display->display_options['fields']['field_attachments']['id'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['table'] = 'field_data_field_attachments';
  $handler->display->display_options['fields']['field_attachments']['field'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachments']['delta_offset'] = '0';
  /* Field: Content: Additional notes */
  $handler->display->display_options['fields']['field_additional_notes']['id'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['table'] = 'field_data_field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['field'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_additional_notes']['alter']['text'] = '<a href="[path]" title="[field_additional_notes]">[field_additional_notes]</a>';
  $handler->display->display_options['fields']['field_additional_notes']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_additional_notes']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_additional_notes']['alter']['alt'] = '[field_additional_notes]';
  $handler->display->display_options['fields']['field_additional_notes']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_additional_notes']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_additional_notes']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Reviewed (field_reviewed) */
  $handler->display->display_options['filters']['field_reviewed_value']['id'] = 'field_reviewed_value';
  $handler->display->display_options['filters']['field_reviewed_value']['table'] = 'field_data_field_reviewed';
  $handler->display->display_options['filters']['field_reviewed_value']['field'] = 'field_reviewed_value';
  $handler->display->display_options['filters']['field_reviewed_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_reviewed_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outcome' => 'outcome',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'review';

  /* Display: Excel Export */
  $handler = $view->new_display('views_data_export', 'Excel Export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'log/export/excel';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
    'page_2' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '500';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'log/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '500';

  /* Display: Timeline Feed */
  $handler = $view->new_display('page', 'Timeline Feed', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'outcomes';
  $handler->display->display_options['style_options']['top_child_object'] = 'outcome';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'path';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'desc';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date of Impact */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Macro */
  $handler->display->display_options['fields']['field_macro']['id'] = 'field_macro';
  $handler->display->display_options['fields']['field_macro']['table'] = 'field_data_field_macro';
  $handler->display->display_options['fields']['field_macro']['field'] = 'field_macro';
  $handler->display->display_options['fields']['field_macro']['label'] = 'macro';
  $handler->display->display_options['fields']['field_macro']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_macro']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Meso */
  $handler->display->display_options['fields']['field_meso']['id'] = 'field_meso';
  $handler->display->display_options['fields']['field_meso']['table'] = 'field_data_field_meso';
  $handler->display->display_options['fields']['field_meso']['field'] = 'field_meso';
  $handler->display->display_options['fields']['field_meso']['label'] = 'meso';
  $handler->display->display_options['fields']['field_meso']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_meso']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Micro */
  $handler->display->display_options['fields']['field_micro']['id'] = 'field_micro';
  $handler->display->display_options['fields']['field_micro']['table'] = 'field_data_field_micro';
  $handler->display->display_options['fields']['field_micro']['field'] = 'field_micro';
  $handler->display->display_options['fields']['field_micro']['label'] = 'micro';
  $handler->display->display_options['fields']['field_micro']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_micro']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Beat */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = 'topic';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media']['id'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['table'] = 'field_data_field_media';
  $handler->display->display_options['fields']['field_media']['field'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['label'] = 'media';
  $handler->display->display_options['fields']['field_media']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_media']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date of Impact (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'log/timeline.json';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impact Log';
  $handler->display->display_options['path'] = 'log';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Impact Log';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Visualizer Feed */
  $handler = $view->new_display('page', 'Visualizer Feed', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'outcomes';
  $handler->display->display_options['style_options']['top_child_object'] = 'outcome';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'path';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'description';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date of Impact */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'date';
  $handler->display->display_options['fields']['field_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Macro */
  $handler->display->display_options['fields']['field_macro']['id'] = 'field_macro';
  $handler->display->display_options['fields']['field_macro']['table'] = 'field_data_field_macro';
  $handler->display->display_options['fields']['field_macro']['field'] = 'field_macro';
  $handler->display->display_options['fields']['field_macro']['label'] = 'macro';
  /* Field: Content: Macro */
  $handler->display->display_options['fields']['field_macro_1']['id'] = 'field_macro_1';
  $handler->display->display_options['fields']['field_macro_1']['table'] = 'field_data_field_macro';
  $handler->display->display_options['fields']['field_macro_1']['field'] = 'field_macro';
  $handler->display->display_options['fields']['field_macro_1']['label'] = 'macro_id';
  $handler->display->display_options['fields']['field_macro_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_macro_1']['alter']['text'] = '[field_macro_1-tid]';
  /* Field: Content: Meso */
  $handler->display->display_options['fields']['field_meso']['id'] = 'field_meso';
  $handler->display->display_options['fields']['field_meso']['table'] = 'field_data_field_meso';
  $handler->display->display_options['fields']['field_meso']['field'] = 'field_meso';
  $handler->display->display_options['fields']['field_meso']['label'] = 'meso';
  /* Field: Content: Meso */
  $handler->display->display_options['fields']['field_meso_1']['id'] = 'field_meso_1';
  $handler->display->display_options['fields']['field_meso_1']['table'] = 'field_data_field_meso';
  $handler->display->display_options['fields']['field_meso_1']['field'] = 'field_meso';
  $handler->display->display_options['fields']['field_meso_1']['label'] = 'meso_id';
  $handler->display->display_options['fields']['field_meso_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_meso_1']['alter']['text'] = '[field_meso_1-tid]';
  /* Field: Content: Micro */
  $handler->display->display_options['fields']['field_micro']['id'] = 'field_micro';
  $handler->display->display_options['fields']['field_micro']['table'] = 'field_data_field_micro';
  $handler->display->display_options['fields']['field_micro']['field'] = 'field_micro';
  $handler->display->display_options['fields']['field_micro']['label'] = 'micro';
  /* Field: Content: Micro */
  $handler->display->display_options['fields']['field_micro_1']['id'] = 'field_micro_1';
  $handler->display->display_options['fields']['field_micro_1']['table'] = 'field_data_field_micro';
  $handler->display->display_options['fields']['field_micro_1']['field'] = 'field_micro';
  $handler->display->display_options['fields']['field_micro_1']['label'] = 'micro_id';
  $handler->display->display_options['fields']['field_micro_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_micro_1']['alter']['text'] = '[field_micro_1-tid]';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media']['id'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['table'] = 'field_data_field_media';
  $handler->display->display_options['fields']['field_media']['field'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['label'] = 'media';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_1']['id'] = 'field_media_1';
  $handler->display->display_options['fields']['field_media_1']['table'] = 'field_data_field_media';
  $handler->display->display_options['fields']['field_media_1']['field'] = 'field_media';
  $handler->display->display_options['fields']['field_media_1']['label'] = 'media_id';
  $handler->display->display_options['fields']['field_media_1']['alter']['text'] = '[field_media_1-tid]';
  /* Field: Topic */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['ui_name'] = 'Topic';
  $handler->display->display_options['fields']['field_topics']['label'] = 'topic';
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Topic */
  $handler->display->display_options['fields']['field_topics_1']['id'] = 'field_topics_1';
  $handler->display->display_options['fields']['field_topics_1']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics_1']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics_1']['ui_name'] = 'Topic';
  $handler->display->display_options['fields']['field_topics_1']['label'] = 'topic_id';
  $handler->display->display_options['fields']['field_topics_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_topics_1']['alter']['text'] = '[field_topics_1-tid]';
  $handler->display->display_options['fields']['field_topics_1']['delta_offset'] = '0';
  /* Field: Content: Subtopic */
  $handler->display->display_options['fields']['field_subtopics']['id'] = 'field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['table'] = 'field_data_field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['field'] = 'field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['label'] = 'subtopic';
  $handler->display->display_options['fields']['field_subtopics']['delta_offset'] = '0';
  /* Field: Content: Subtopic */
  $handler->display->display_options['fields']['field_subtopics_1']['id'] = 'field_subtopics_1';
  $handler->display->display_options['fields']['field_subtopics_1']['table'] = 'field_data_field_subtopics';
  $handler->display->display_options['fields']['field_subtopics_1']['field'] = 'field_subtopics';
  $handler->display->display_options['fields']['field_subtopics_1']['label'] = 'subtopics_id';
  $handler->display->display_options['fields']['field_subtopics_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtopics_1']['alter']['text'] = '[field_subtopics_1-tid]';
  $handler->display->display_options['fields']['field_subtopics_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags_1']['id'] = 'field_tags_1';
  $handler->display->display_options['fields']['field_tags_1']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags_1']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags_1']['label'] = 'tags_id';
  $handler->display->display_options['fields']['field_tags_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tags_1']['alter']['text'] = '[field_tags_1-tid]';
  $handler->display->display_options['fields']['field_tags_1']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date of Impact (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'log/visualizer.json';
  $export['impact_log'] = $view;

  $view = new view();
  $view->name = 'review_submissions_menu_bage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Review submissions menu bage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outcome' => 'outcome',
  );

  /* Display: Review count menu badge */
  $handler = $view->new_display('menu_badge', 'Review count menu badge', 'menu_badge_1');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Reviewed (field_reviewed) */
  $handler->display->display_options['filters']['field_reviewed_value']['id'] = 'field_reviewed_value';
  $handler->display->display_options['filters']['field_reviewed_value']['table'] = 'field_data_field_reviewed';
  $handler->display->display_options['filters']['field_reviewed_value']['field'] = 'field_reviewed_value';
  $handler->display->display_options['filters']['field_reviewed_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_reviewed_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outcome' => 'outcome',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $export['review_submissions_menu_bage'] = $view;

  return $export;
}
