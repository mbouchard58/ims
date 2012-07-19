<?php
$view = new view;
$view->name = 'supervisor_profiles';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'profile';
$view->human_name = 'Supervisor Profiles';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Supervisor Profiles';
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
$handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Organization */
$handler->display->display_options['relationships']['field_sup_org_target_id']['id'] = 'field_sup_org_target_id';
$handler->display->display_options['relationships']['field_sup_org_target_id']['table'] = 'field_data_field_sup_org';
$handler->display->display_options['relationships']['field_sup_org_target_id']['field'] = 'field_sup_org_target_id';
$handler->display->display_options['relationships']['field_sup_org_target_id']['ui_name'] = 'Organization';
$handler->display->display_options['relationships']['field_sup_org_target_id']['label'] = 'Organization';
$handler->display->display_options['relationships']['field_sup_org_target_id']['required'] = 1;
/* Relationship: Supervisor */
$handler->display->display_options['relationships']['user']['id'] = 'user';
$handler->display->display_options['relationships']['user']['table'] = 'profile';
$handler->display->display_options['relationships']['user']['field'] = 'user';
$handler->display->display_options['relationships']['user']['ui_name'] = 'Supervisor';
$handler->display->display_options['relationships']['user']['label'] = 'Supervisor';
$handler->display->display_options['relationships']['user']['required'] = 1;
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
$handler->display->display_options['fields']['pid']['exclude'] = TRUE;
$handler->display->display_options['fields']['pid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['pid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['pid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['pid']['alter']['external'] = 0;
$handler->display->display_options['fields']['pid']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['pid']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['pid']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['pid']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['pid']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['pid']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['pid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['pid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['pid']['alter']['html'] = 0;
$handler->display->display_options['fields']['pid']['element_label_colon'] = 0;
$handler->display->display_options['fields']['pid']['element_default_classes'] = 1;
$handler->display->display_options['fields']['pid']['hide_empty'] = 0;
$handler->display->display_options['fields']['pid']['empty_zero'] = 0;
$handler->display->display_options['fields']['pid']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['pid']['format_plural'] = 0;
/* Field: Profile: User uid */
$handler->display->display_options['fields']['user']['id'] = 'user';
$handler->display->display_options['fields']['user']['table'] = 'profile';
$handler->display->display_options['fields']['user']['field'] = 'user';
$handler->display->display_options['fields']['user']['label'] = '';
$handler->display->display_options['fields']['user']['exclude'] = TRUE;
$handler->display->display_options['fields']['user']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['user']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['user']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['user']['alter']['external'] = 0;
$handler->display->display_options['fields']['user']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['user']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['user']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['user']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['user']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['user']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['user']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['user']['alter']['trim'] = 0;
$handler->display->display_options['fields']['user']['alter']['html'] = 0;
$handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['user']['element_default_classes'] = 1;
$handler->display->display_options['fields']['user']['hide_empty'] = 0;
$handler->display->display_options['fields']['user']['empty_zero'] = 0;
$handler->display->display_options['fields']['user']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['user']['format_plural'] = 0;
/* Field: Profile: Name */
$handler->display->display_options['fields']['field_sup_name']['id'] = 'field_sup_name';
$handler->display->display_options['fields']['field_sup_name']['table'] = 'field_data_field_sup_name';
$handler->display->display_options['fields']['field_sup_name']['field'] = 'field_sup_name';
$handler->display->display_options['fields']['field_sup_name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_sup_name']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['field_sup_name']['alter']['path'] = 'profile-supervisor/[user]';
$handler->display->display_options['fields']['field_sup_name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_sup_name']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_sup_name']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_sup_name']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_sup_name']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_sup_name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_sup_name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_sup_name']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_sup_name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_sup_name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_sup_name']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_sup_name']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_sup_name']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_sup_name']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_sup_name']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_sup_name']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_sup_name']['field_api_classes'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'field_sup_org_target_id';
$handler->display->display_options['fields']['title']['label'] = 'Organization';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['external'] = 0;
$handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['element_label_colon'] = 0;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Content: Repository */
$handler->display->display_options['fields']['field_org_repository']['id'] = 'field_org_repository';
$handler->display->display_options['fields']['field_org_repository']['table'] = 'field_data_field_org_repository';
$handler->display->display_options['fields']['field_org_repository']['field'] = 'field_org_repository';
$handler->display->display_options['fields']['field_org_repository']['relationship'] = 'field_sup_org_target_id';
$handler->display->display_options['fields']['field_org_repository']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_org_repository']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_org_repository']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_org_repository']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_org_repository']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_org_repository']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_org_repository']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_org_repository']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_org_repository']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_org_repository']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_org_repository']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_org_repository']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_org_repository']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_org_repository']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_org_repository']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_org_repository']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_org_repository']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_org_repository']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_org_repository']['field_api_classes'] = 0;
/* Field: Profile: E-Mail */
$handler->display->display_options['fields']['field_sup_email']['id'] = 'field_sup_email';
$handler->display->display_options['fields']['field_sup_email']['table'] = 'field_data_field_sup_email';
$handler->display->display_options['fields']['field_sup_email']['field'] = 'field_sup_email';
$handler->display->display_options['fields']['field_sup_email']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_sup_email']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_sup_email']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_sup_email']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_sup_email']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_sup_email']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_sup_email']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_sup_email']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_sup_email']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_sup_email']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_sup_email']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_sup_email']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_sup_email']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_sup_email']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_sup_email']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_sup_email']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_sup_email']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_sup_email']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_sup_email']['field_api_classes'] = 0;
/* Field: Profile: Telephone */
$handler->display->display_options['fields']['field_sup_phone']['id'] = 'field_sup_phone';
$handler->display->display_options['fields']['field_sup_phone']['table'] = 'field_data_field_sup_phone';
$handler->display->display_options['fields']['field_sup_phone']['field'] = 'field_sup_phone';
$handler->display->display_options['fields']['field_sup_phone']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_sup_phone']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_sup_phone']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_sup_phone']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_sup_phone']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_sup_phone']['field_api_classes'] = 0;
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'supervisor' => 'supervisor',
);
/* Filter criterion: Profile: Name (field_sup_name) */
$handler->display->display_options['filters']['field_sup_name_value']['id'] = 'field_sup_name_value';
$handler->display->display_options['filters']['field_sup_name_value']['table'] = 'field_data_field_sup_name';
$handler->display->display_options['filters']['field_sup_name_value']['field'] = 'field_sup_name_value';
$handler->display->display_options['filters']['field_sup_name_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_sup_name_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_sup_name_value']['expose']['operator_id'] = 'field_sup_name_value_op';
$handler->display->display_options['filters']['field_sup_name_value']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['field_sup_name_value']['expose']['use_operator'] = 1;
$handler->display->display_options['filters']['field_sup_name_value']['expose']['operator'] = 'field_sup_name_value_op';
$handler->display->display_options['filters']['field_sup_name_value']['expose']['identifier'] = 'field_sup_name_value';
$handler->display->display_options['filters']['field_sup_name_value']['expose']['required'] = 0;
$handler->display->display_options['filters']['field_sup_name_value']['expose']['multiple'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['relationship'] = 'field_sup_org_target_id';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Organization';
$handler->display->display_options['filters']['title']['expose']['use_operator'] = 1;
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['required'] = 0;
$handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'supervisor-profiles';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Supervisor Profiles';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$views[$view->name] = $view;