<?php

/**
 * @file
 * outcomes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function outcomes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'narrow';
  $context->description = 'Narrow Pages';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'activity' => 'activity',
        'outcome' => 'outcome',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'user' => 'user',
        'user/*' => 'user/*',
        'users/*' => 'users/*',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'narrow-page',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Narrow Pages');
  $export['narrow'] = $context;

  return $export;
}
