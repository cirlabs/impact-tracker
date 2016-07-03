<?php
/**
 * @file
 * activities.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function activities_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in activity_types'.
  $permissions['add terms in activity_types'] = array(
    'name' => 'add terms in activity_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create activity content'.
  $permissions['create activity content'] = array(
    'name' => 'create activity content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any activity content'.
  $permissions['delete any activity content'] = array(
    'name' => 'delete any activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own activity content'.
  $permissions['delete own activity content'] = array(
    'name' => 'delete own activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in activity_types'.
  $permissions['delete terms in activity_types'] = array(
    'name' => 'delete terms in activity_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any activity content'.
  $permissions['edit any activity content'] = array(
    'name' => 'edit any activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own activity content'.
  $permissions['edit own activity content'] = array(
    'name' => 'edit own activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in activity_types'.
  $permissions['edit terms in activity_types'] = array(
    'name' => 'edit terms in activity_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
