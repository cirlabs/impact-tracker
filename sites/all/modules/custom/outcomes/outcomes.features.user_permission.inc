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

  // Exported permission: 'add terms in authors'.
  $permissions['add terms in authors'] = array(
    'name' => 'add terms in authors',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in grants'.
  $permissions['add terms in grants'] = array(
    'name' => 'add terms in grants',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

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

  // Exported permission: 'add terms in platforms'.
  $permissions['add terms in platforms'] = array(
    'name' => 'add terms in platforms',
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
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in stories'.
  $permissions['add terms in stories'] = array(
    'name' => 'add terms in stories',
    'roles' => array(
      'administrator' => 'administrator',
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
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
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
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create outcome content'.
  $permissions['create outcome content'] = array(
    'name' => 'create outcome content',
    'roles' => array(
      'administrator' => 'administrator',
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

  // Exported permission: 'delete terms in authors'.
  $permissions['delete terms in authors'] = array(
    'name' => 'delete terms in authors',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in grants'.
  $permissions['delete terms in grants'] = array(
    'name' => 'delete terms in grants',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
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

  // Exported permission: 'delete terms in platforms'.
  $permissions['delete terms in platforms'] = array(
    'name' => 'delete terms in platforms',
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

  // Exported permission: 'delete terms in stories'.
  $permissions['delete terms in stories'] = array(
    'name' => 'delete terms in stories',
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
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_reviewed'.
  $permissions['edit own field_reviewed'] = array(
    'name' => 'edit own field_reviewed',
    'roles' => array(
      'administrator' => 'administrator',
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

  // Exported permission: 'edit terms in authors'.
  $permissions['edit terms in authors'] = array(
    'name' => 'edit terms in authors',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in grants'.
  $permissions['edit terms in grants'] = array(
    'name' => 'edit terms in grants',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
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

  // Exported permission: 'edit terms in platforms'.
  $permissions['edit terms in platforms'] = array(
    'name' => 'edit terms in platforms',
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

  // Exported permission: 'edit terms in stories'.
  $permissions['edit terms in stories'] = array(
    'name' => 'edit terms in stories',
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

  // Exported permission: 'merge authors terms'.
  $permissions['merge authors terms'] = array(
    'name' => 'merge authors terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge grants terms'.
  $permissions['merge grants terms'] = array(
    'name' => 'merge grants terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge macro terms'.
  $permissions['merge macro terms'] = array(
    'name' => 'merge macro terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge media terms'.
  $permissions['merge media terms'] = array(
    'name' => 'merge media terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge mediums terms'.
  $permissions['merge mediums terms'] = array(
    'name' => 'merge mediums terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge meso terms'.
  $permissions['merge meso terms'] = array(
    'name' => 'merge meso terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge micro terms'.
  $permissions['merge micro terms'] = array(
    'name' => 'merge micro terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge platforms terms'.
  $permissions['merge platforms terms'] = array(
    'name' => 'merge platforms terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge publications terms'.
  $permissions['merge publications terms'] = array(
    'name' => 'merge publications terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge stories terms'.
  $permissions['merge stories terms'] = array(
    'name' => 'merge stories terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge submitters terms'.
  $permissions['merge submitters terms'] = array(
    'name' => 'merge submitters terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge subtopics terms'.
  $permissions['merge subtopics terms'] = array(
    'name' => 'merge subtopics terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge tags terms'.
  $permissions['merge tags terms'] = array(
    'name' => 'merge tags terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge topics terms'.
  $permissions['merge topics terms'] = array(
    'name' => 'merge topics terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'publish any outcome content'.
  $permissions['publish any outcome content'] = array(
    'name' => 'publish any outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable outcome content'.
  $permissions['publish editable outcome content'] = array(
    'name' => 'publish editable outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own outcome content'.
  $permissions['publish own outcome content'] = array(
    'name' => 'publish own outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any outcome content'.
  $permissions['unpublish any outcome content'] = array(
    'name' => 'unpublish any outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable outcome content'.
  $permissions['unpublish editable outcome content'] = array(
    'name' => 'unpublish editable outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own outcome content'.
  $permissions['unpublish own outcome content'] = array(
    'name' => 'unpublish own outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'use Rules component rules_mark_as_reviewed'.
  $permissions['use Rules component rules_mark_as_reviewed'] = array(
    'name' => 'use Rules component rules_mark_as_reviewed',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'view any outcome content'.
  $permissions['view any outcome content'] = array(
    'name' => 'view any outcome content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view field_reviewed'.
  $permissions['view field_reviewed'] = array(
    'name' => 'view field_reviewed',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_reviewed'.
  $permissions['view own field_reviewed'] = array(
    'name' => 'view own field_reviewed',
    'roles' => array(
      'administrator' => 'administrator',
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
    ),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}
