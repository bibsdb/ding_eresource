<?php
/**
 * @file
 * ding_eresource.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ding_eresource_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ding_eresource content'.
  $permissions['create ding_eresource content'] = array(
    'name' => 'create ding_eresource content',
    'roles' => array(
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ding_eresource content'.
  $permissions['delete any ding_eresource content'] = array(
    'name' => 'delete any ding_eresource content',
    'roles' => array(
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ding_eresource content'.
  $permissions['delete own ding_eresource content'] = array(
    'name' => 'delete own ding_eresource content',
    'roles' => array(
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ding_eresource content'.
  $permissions['edit any ding_eresource content'] = array(
    'name' => 'edit any ding_eresource content',
    'roles' => array(
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ding_eresource content'.
  $permissions['edit own ding_eresource content'] = array(
    'name' => 'edit own ding_eresource content',
    'roles' => array(
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'set ding_eresource published on date'.
  $permissions['set ding_eresource published on date'] = array(
    'name' => 'set ding_eresource published on date',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'publication_date',
  );

  return $permissions;
}
