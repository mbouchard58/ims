<?php
$view = new view;
$view->name = 'semesters_view';
$view->description = 'A list of all Semesters showing the Activation status';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Semesters';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Semesters';
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
/* Field: Taxonomy term: Active */
$handler->display->display_options['fields']['field_tax_sem_active']['id'] = 'field_tax_sem_active';
$handler->display->display_options['fields']['field_tax_sem_active']['table'] = 'field_data_field_tax_sem_active';
$handler->display->display_options['fields']['field_tax_sem_active']['field'] = 'field_tax_sem_active';
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_tax_sem_active']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_tax_sem_active']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_tax_sem_active']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_tax_sem_active']['field_api_classes'] = 0;
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'semesters' => 'semesters',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'semesters';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Semesters';
$handler->display->display_options['menu']['description'] = 'List of Semesters';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$views[$view->name] = $view;
