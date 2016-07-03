<?php
/**
 * @file
 * activities.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function activities_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'activity_log';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Activity Log';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Activity Log';
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
    'field_activity_type_tid' => array(
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'title' => 'title',
    'field_date' => 'field_date',
    'field_activity_type' => 'field_activity_type',
    'field_publications' => 'field_publications',
    'field_topics' => 'field_topics',
    'field_subtopics' => 'field_subtopics',
    'field_tags' => 'field_tags',
    'field_submitter' => 'field_submitter',
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
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_type' => array(
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
    'field_submitter' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
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
  /* Field: Content: Date of Activity */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date of Impact';
  $handler->display->display_options['fields']['field_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_activity_type']['id'] = 'field_activity_type';
  $handler->display->display_options['fields']['field_activity_type']['table'] = 'field_data_field_activity_type';
  $handler->display->display_options['fields']['field_activity_type']['field'] = 'field_activity_type';
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
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Content: Subtopic */
  $handler->display->display_options['fields']['field_subtopics']['id'] = 'field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['table'] = 'field_data_field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['field'] = 'field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_subtopics']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Submitter */
  $handler->display->display_options['fields']['field_submitter']['id'] = 'field_submitter';
  $handler->display->display_options['fields']['field_submitter']['table'] = 'field_data_field_submitter';
  $handler->display->display_options['fields']['field_submitter']['field'] = 'field_submitter';
  $handler->display->display_options['fields']['field_submitter']['type'] = 'taxonomy_term_reference_plain';
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
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
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
  /* Filter criterion: Content: Published */
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
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_activity_type) */
  $handler->display->display_options['filters']['field_activity_type_tid']['id'] = 'field_activity_type_tid';
  $handler->display->display_options['filters']['field_activity_type_tid']['table'] = 'field_data_field_activity_type';
  $handler->display->display_options['filters']['field_activity_type_tid']['field'] = 'field_activity_type_tid';
  $handler->display->display_options['filters']['field_activity_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_activity_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activity_type_tid']['expose']['operator_id'] = 'field_activity_type_tid_op';
  $handler->display->display_options['filters']['field_activity_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_activity_type_tid']['expose']['operator'] = 'field_activity_type_tid_op';
  $handler->display->display_options['filters']['field_activity_type_tid']['expose']['identifier'] = 'field_activity_type_tid';
  $handler->display->display_options['filters']['field_activity_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_activity_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_activity_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_activity_type_tid']['vocabulary'] = 'activity_types';
  /* Filter criterion: Content: Topic (field_topics) */
  $handler->display->display_options['filters']['field_topics_tid']['id'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_tid']['field'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_tid']['expose']['operator_id'] = 'field_topics_tid_op';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['operator'] = 'field_topics_tid_op';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['identifier'] = 'field_topics_tid';
  $handler->display->display_options['filters']['field_topics_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_topics_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
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
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_subtopics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_subtopics_tid']['vocabulary'] = 'subtopics';
  /* Filter criterion: Content: Date of Activity (field_date) */
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
    3 => 0,
    4 => 0,
    5 => 0,
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
  $handler->display->display_options['filters']['field_submitter_tid']['expose']['label'] = 'Person entering';
  $handler->display->display_options['filters']['field_submitter_tid']['expose']['operator'] = 'field_submitter_tid_op';
  $handler->display->display_options['filters']['field_submitter_tid']['expose']['identifier'] = 'field_submitter_tid';
  $handler->display->display_options['filters']['field_submitter_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_submitter_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_submitter_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_submitter_tid']['vocabulary'] = 'submitters';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'activity-log';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Activity Log';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Timeline Feed */
  $handler = $view->new_display('page', 'Timeline Feed', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'activities';
  $handler->display->display_options['style_options']['top_child_object'] = 'activity';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
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
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date of Activity */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'date';
  $handler->display->display_options['fields']['field_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_activity_type']['id'] = 'field_activity_type';
  $handler->display->display_options['fields']['field_activity_type']['table'] = 'field_data_field_activity_type';
  $handler->display->display_options['fields']['field_activity_type']['field'] = 'field_activity_type';
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
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Content: Subtopic */
  $handler->display->display_options['fields']['field_subtopics']['id'] = 'field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['table'] = 'field_data_field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['field'] = 'field_subtopics';
  $handler->display->display_options['fields']['field_subtopics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_subtopics']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Submitter */
  $handler->display->display_options['fields']['field_submitter']['id'] = 'field_submitter';
  $handler->display->display_options['fields']['field_submitter']['table'] = 'field_data_field_submitter';
  $handler->display->display_options['fields']['field_submitter']['field'] = 'field_submitter';
  $handler->display->display_options['fields']['field_submitter']['type'] = 'taxonomy_term_reference_plain';
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
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  $handler->display->display_options['path'] = 'activity-log/timeline.json';
  $export['activity_log'] = $view;

  return $export;
}
