<?php

/**
 * @file
 * base_configuration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function base_configuration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_impact-log:log.
  $menu_links['main-menu_impact-log:log'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'log',
    'router_path' => 'log',
    'link_title' => 'Impact Log',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_impact-log:log',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_review-submissions:review.
  $menu_links['main-menu_review-submissions:review'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'review',
    'router_path' => 'review',
    'link_title' => 'Review Submissions',
    'options' => array(
      'alter' => TRUE,
      'link_badge' => array(
        'callback' => 'menu_badges_execute_view',
        'arguments' => array(
          'view_name' => 'review_submissions_menu_bage',
          'view_display_id' => 'menu_badge_1',
        ),
        'key' => 'views_review_submissions_menu_bage_menu_badge_1',
      ),
      'identifier' => 'main-menu_review-submissions:review',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_sitename:menutoken/55f601fa6d9f0.
  $menu_links['main-menu_sitename:menutoken/55f601fa6d9f0'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menutoken/55f601fa6d9f0',
    'router_path' => 'menutoken/%',
    'link_title' => '[site:name]',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '<front>',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_sitename:menutoken/55f601fa6d9f0',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_account:user.
  $menu_links['user-menu_account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'icon-user',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'user-menu_account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_login:user/login.
  $menu_links['user-menu_login:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'icon-enter',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'user-menu_login:user/login',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_logout:user/logout.
  $menu_links['user-menu_logout:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'icon-exit',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'user-menu_logout:user/logout',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Account');
  t('Impact Log');
  t('Log out');
  t('Login');
  t('Logout');
  t('Review Submissions');
  t('User account');
  t('[site:name]');

  return $menu_links;
}
