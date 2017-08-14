<?php
/**
 * @file
 * ding_eresource.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ding_eresource_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ding_eresource';
  $view->description = 'List of E-resources';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ding E-resource';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'E-resources';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'e-resurser';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'eresource-list-item';
  $handler->display->display_options['style_options']['class'] = 'list eresource-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Global: Matematisk udtryk */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '!1 - [nid]';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_eresource' => 'ding_eresource',
  );

  /* Display: E-resources list */
  $handler = $view->new_display('panel_pane', 'E-resources list', 'ding_eresource_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['link_url'] = 'e-resurser';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: E-resurser hvor titel begynder med “%2” */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['ui_name'] = 'E-resurser hvor titel begynder med “%2”';
  $handler->display->display_options['arguments']['title']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['argument_input'] = array(
    'field_ding_eresource_category_tid' => array(
      'type' => 'panel',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Category (field_ding_eresource_category)',
    ),
    'title' => array(
      'type' => 'panel',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Indhold: Titel',
    ),
  );

  /* Display: Category description */
  $handler = $view->new_display('panel_pane', 'Category description', 'ding_eresource_category');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Ufiltreret tekst */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Standardtekst for E-ressourcer';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h2>E-resurser</h2>
<p>E-resurser er elektroniske opslagsværker, aviser og tidsskrifter, e-bøger og andre netmedier, som biblioteket stiller gratis til rådighed for borgerne. Brug e-resurserne til at låne netmedier eller søge i databaser efter alverdens emner. De fleste e-resurser har fjernadgang. Det betyder, at du kan anvende dem hjemmefra fra en hvilken som helst internet-adgang. Det kræver blot, at du er bosat i kommunen og er indmeldt som låner på et af bibliotekerne. Alle kan benytte e-resurserne på biblioteket.</p>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Handler mangler eller er i stykker */
  $handler->display->display_options['relationships']['field_ding_eresource_category_tid']['id'] = 'field_ding_eresource_category_tid';
  $handler->display->display_options['relationships']['field_ding_eresource_category_tid']['table'] = 'field_data_field_ding_eresource_category';
  $handler->display->display_options['relationships']['field_ding_eresource_category_tid']['field'] = 'field_ding_eresource_category_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['field_ding_eresource_category']['id'] = 'field_ding_eresource_category';
  $handler->display->display_options['fields']['field_ding_eresource_category']['table'] = 'field_data_field_ding_eresource_category';
  $handler->display->display_options['fields']['field_ding_eresource_category']['field'] = 'field_ding_eresource_category';
  $handler->display->display_options['fields']['field_ding_eresource_category']['label'] = '';
  $handler->display->display_options['fields']['field_ding_eresource_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_ding_eresource_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_eresource_category']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_eresource_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_eresource_category']['empty'] = '<h2>E-resurser (no results text)<h/2>';
  /* Felt: Ord i ordforråd: Beskrivelse af term */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_ding_eresource_category_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_type'] = 'p';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['description']['empty'] = 'No results text.';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Handler mangler eller er i stykker */
  $handler->display->display_options['arguments']['field_ding_eresource_category_tid']['id'] = 'field_ding_eresource_category_tid';
  $handler->display->display_options['arguments']['field_ding_eresource_category_tid']['table'] = 'field_data_field_ding_eresource_category';
  $handler->display->display_options['arguments']['field_ding_eresource_category_tid']['field'] = 'field_ding_eresource_category_tid';
  $handler->display->display_options['arguments']['field_ding_eresource_category_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_ding_eresource_category_tid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_ding_eresource_category_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_ding_eresource_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ding_eresource_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ding_eresource_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ding_eresource_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ding_eresource_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_eresource' => 'ding_eresource',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_ding_eresource_category_tid' => array(
      'type' => 'panel',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Category (field_ding_eresource_category)',
    ),
  );

  /* Display: E-resources alphabetic list */
  $handler = $view->new_display('panel_pane', 'E-resources alphabetic list', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'alphabetical-eresource-list';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'eresource-list-item leaf';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list eresource-list sub-menu';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Linked title';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/temaer/pa-nettet">Online</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Global: Matematisk udtryk */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '!1-[nid]';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'active[expression]';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['null']['validate']['fail'] = 'ignore';
  $handler->display->display_options['pane_title'] = 'E-resources alphabetic list';
  $translatables['ding_eresource'] = array(
    t('Master'),
    t('E-resources'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('.'),
    t(','),
    t('Alle'),
    t('E-resources list'),
    t('View panes'),
    t('Category description'),
    t('Standardtekst for E-ressourcer'),
    t('<h2>E-resurser</h2>
<p>E-resurser er elektroniske opslagsværker, aviser og tidsskrifter, e-bøger og andre netmedier, som biblioteket stiller gratis til rådighed for borgerne. Brug e-resurserne til at låne netmedier eller søge i databaser efter alverdens emner. De fleste e-resurser har fjernadgang. Det betyder, at du kan anvende dem hjemmefra fra en hvilken som helst internet-adgang. Det kræver blot, at du er bosat i kommunen og er indmeldt som låner på et af bibliotekerne. Alle kan benytte e-resurserne på biblioteket.</p>'),
    t('field_ding_eresource_category_tid'),
    t('<h2>E-resurser (no results text)<h/2>'),
    t('No results text.'),
    t('E-resources alphabetic list'),
    t('Linked title'),
    t('<h3><a href="/temaer/pa-nettet">Online</a></h3>'),
  );
  $export['ding_eresource'] = $view;

  return $export;
}
