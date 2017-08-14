<?php
/**
 * @file
 * ding_eresource.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ding_eresource_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-alle-online-tilbud.
  $menus['menu-alle-online-tilbud'] = array(
    'menu_name' => 'menu-alle-online-tilbud',
    'title' => 'E-bøger og medier',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('E-bøger og medier');


  return $menus;
}
