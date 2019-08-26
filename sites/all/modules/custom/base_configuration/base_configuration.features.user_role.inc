<?php

/**
 * @file
 * base_configuration.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function base_configuration_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 11,
  );

  return $roles;
}
