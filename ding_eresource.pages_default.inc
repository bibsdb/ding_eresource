<?php
/**
 * @file
 * ding_eresource.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ding_eresource_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ding_eresources';
  $page->task = 'page';
  $page->admin_title = 'Ding E-resources';
  $page->admin_description = '';
  $page->path = 'e-resurser/!tid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'tid' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          7 => '7',
          1 => 0,
          6 => 0,
          8 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          2 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_eresources_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ding_eresources';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'E-resurser';
  $display->uuid = '9e4be690-c153-476c-8b61-c419842cd189';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-058235d2-a6d9-482c-b527-6c02b8eca745';
    $pane->panel = 'left_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_eresource-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'alphabetical-eresource-list',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '058235d2-a6d9-482c-b527-6c02b8eca745';
    $display->content['new-058235d2-a6d9-482c-b527-6c02b8eca745'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-058235d2-a6d9-482c-b527-6c02b8eca745';
    $pane = new stdClass();
    $pane->pid = 'new-5509701c-cc3c-4120-a204-c5eb0852daf5';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_eresource-ding_eresource_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5509701c-cc3c-4120-a204-c5eb0852daf5';
    $display->content['new-5509701c-cc3c-4120-a204-c5eb0852daf5'] = $pane;
    $display->panels['main_content'][0] = 'new-5509701c-cc3c-4120-a204-c5eb0852daf5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ding_eresources'] = $page;

  return $pages;

}
