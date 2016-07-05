<?php
/**
 * @file
 * outcomes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function outcomes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in macro'.
  $permissions['add terms in macro'] = array(
    'name' => 'add terms in macro',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in media'.
  $permissions['add terms in media'] = array(
    'name' => 'add terms in media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in mediums'.
  $permissions['add terms in mediums'] = array(
    'name' => 'add terms in mediums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in meso'.
  $permissions['add terms in meso'] = array(
    'name' => 'add terms in meso',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in micro'.
  $permissions['add terms in micro'] = array(
    'name' => 'add terms in micro',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in publications'.
  $permissions['add terms in publications'] = array(
    'name' => 'add terms in publications',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in submitters'.
  $permissions['add terms in submitters'] = array(
    'name' => 'add terms in submitters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in subtopics'.
  $permissions['add terms in subtopics'] = array(
    'name' => 'add terms in subtopics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in tags'.
  $permissions['add terms in tags'] = array(
    'name' => 'add terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in topics'.
  $permissions['add terms in topics'] = array(
    'name' => 'add terms in topics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create field_reviewed'.
  $permissions['create field_reviewed'] = array(
    'name' => 'create field_reviewed',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create outcome content'.
  $permissions['create outcome content'] = array(
    'name' => 'create outcome content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any outcome content'.
  $permissions['delete any outcome content'] = array(
    'name' => 'delete any outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own outcome content'.
  $permissions['delete own outcome content'] = array(
    'name' => 'delete own outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in macro'.
  $permissions['delete terms in macro'] = array(
    'name' => 'delete terms in macro',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media'.
  $permissions['delete terms in media'] = array(
    'name' => 'delete terms in media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in mediums'.
  $permissions['delete terms in mediums'] = array(
    'name' => 'delete terms in mediums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in meso'.
  $permissions['delete terms in meso'] = array(
    'name' => 'delete terms in meso',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in micro'.
  $permissions['delete terms in micro'] = array(
    'name' => 'delete terms in micro',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in publications'.
  $permissions['delete terms in publications'] = array(
    'name' => 'delete terms in publications',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in submitters'.
  $permissions['delete terms in submitters'] = array(
    'name' => 'delete terms in submitters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in subtopics'.
  $permissions['delete terms in subtopics'] = array(
    'name' => 'delete terms in subtopics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in topics'.
  $permissions['delete terms in topics'] = array(
    'name' => 'delete terms in topics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any outcome content'.
  $permissions['edit any outcome content'] = array(
    'name' => 'edit any outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_reviewed'.
  $permissions['edit field_reviewed'] = array(
    'name' => 'edit field_reviewed',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_reviewed'.
  $permissions['edit own field_reviewed'] = array(
    'name' => 'edit own field_reviewed',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own outcome content'.
  $permissions['edit own outcome content'] = array(
    'name' => 'edit own outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in macro'.
  $permissions['edit terms in macro'] = array(
    'name' => 'edit terms in macro',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media'.
  $permissions['edit terms in media'] = array(
    'name' => 'edit terms in media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in mediums'.
  $permissions['edit terms in mediums'] = array(
    'name' => 'edit terms in mediums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in meso'.
  $permissions['edit terms in meso'] = array(
    'name' => 'edit terms in meso',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in micro'.
  $permissions['edit terms in micro'] = array(
    'name' => 'edit terms in micro',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in publications'.
  $permissions['edit terms in publications'] = array(
    'name' => 'edit terms in publications',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in submitters'.
  $permissions['edit terms in submitters'] = array(
    'name' => 'edit terms in submitters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in subtopics'.
  $permissions['edit terms in subtopics'] = array(
    'name' => 'edit terms in subtopics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in topics'.
  $permissions['edit terms in topics'] = array(
    'name' => 'edit terms in topics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view any outcome content'.
  $permissions['view any outcome content'] = array(
    'name' => 'view any outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view field_reviewed'.
  $permissions['view field_reviewed'] = array(
    'name' => 'view field_reviewed',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_reviewed'.
  $permissions['view own field_reviewed'] = array(
    'name' => 'view own field_reviewed',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own outcome content'.
  $permissions['view own outcome content'] = array(
    'name' => 'view own outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}
