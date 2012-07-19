<?php
$view = new view;
$view->name = 'student_assignment';
$view->description = 'Show the internship to which this student has been assigned';
$view->tag = 'default';
$view->base_table = 'profile';
$view->human_name = 'Student Assignment';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Assignment';
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  6 => '6',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
/* No results behavior: Not Assigned */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['ui_name'] = 'Not Assigned';
$handler->display->display_options['empty']['area']['label'] = 'Not assigned';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = 'You have not yet been assigned to an internship.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['empty']['area']['tokenize'] = 0;
/* Relationship: Internship */
$handler->display->display_options['relationships']['field_stp_assignment_target_id']['id'] = 'field_stp_assignment_target_id';
$handler->display->display_options['relationships']['field_stp_assignment_target_id']['table'] = 'field_data_field_stp_assignment';
$handler->display->display_options['relationships']['field_stp_assignment_target_id']['field'] = 'field_stp_assignment_target_id';
$handler->display->display_options['relationships']['field_stp_assignment_target_id']['ui_name'] = 'Internship';
$handler->display->display_options['relationships']['field_stp_assignment_target_id']['label'] = 'Internship';
$handler->display->display_options['relationships']['field_stp_assignment_target_id']['required'] = 1;
/* Relationship: Organization */
$handler->display->display_options['relationships']['field_int_org_id_target_id']['id'] = 'field_int_org_id_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['table'] = 'field_data_field_int_org_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['field'] = 'field_int_org_id_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['relationship'] = 'field_stp_assignment_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['ui_name'] = 'Organization';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['label'] = 'Organization';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['required'] = 1;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'field_int_org_id_target_id';
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'field_stp_assignment_target_id';
$handler->display->display_options['fields']['title_1']['label'] = 'Position';
$handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['title_1']['element_label_colon'] = 0;
$handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
/* Field: Content: Description */
$handler->display->display_options['fields']['field_int_desc']['id'] = 'field_int_desc';
$handler->display->display_options['fields']['field_int_desc']['table'] = 'field_data_field_int_desc';
$handler->display->display_options['fields']['field_int_desc']['field'] = 'field_int_desc';
$handler->display->display_options['fields']['field_int_desc']['relationship'] = 'field_stp_assignment_target_id';
$handler->display->display_options['fields']['field_int_desc']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_int_desc']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_int_desc']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_int_desc']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_int_desc']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_int_desc']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_int_desc']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_int_desc']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_int_desc']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_int_desc']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_int_desc']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_int_desc']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_int_desc']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_int_desc']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_int_desc']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_int_desc']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_int_desc']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_int_desc']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_int_desc']['field_api_classes'] = 0;
/* Field: Content: Supervisor Name */
$handler->display->display_options['fields']['field_int_sup_name']['id'] = 'field_int_sup_name';
$handler->display->display_options['fields']['field_int_sup_name']['table'] = 'field_data_field_int_sup_name';
$handler->display->display_options['fields']['field_int_sup_name']['field'] = 'field_int_sup_name';
$handler->display->display_options['fields']['field_int_sup_name']['relationship'] = 'field_stp_assignment_target_id';
$handler->display->display_options['fields']['field_int_sup_name']['label'] = 'Name';
$handler->display->display_options['fields']['field_int_sup_name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_int_sup_name']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_int_sup_name']['field_api_classes'] = 0;
/* Field: Content: Supervisor E-Mail */
$handler->display->display_options['fields']['field_int_sup_email']['id'] = 'field_int_sup_email';
$handler->display->display_options['fields']['field_int_sup_email']['table'] = 'field_data_field_int_sup_email';
$handler->display->display_options['fields']['field_int_sup_email']['field'] = 'field_int_sup_email';
$handler->display->display_options['fields']['field_int_sup_email']['relationship'] = 'field_stp_assignment_target_id';
$handler->display->display_options['fields']['field_int_sup_email']['label'] = 'E-Mail';
$handler->display->display_options['fields']['field_int_sup_email']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_int_sup_email']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_int_sup_email']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_int_sup_email']['group_column'] = 'value';
$handler->display->display_options['fields']['field_int_sup_email']['field_api_classes'] = 0;
/* Field: Content: Supervisor Phone */
$handler->display->display_options['fields']['field_int_sup_phone']['id'] = 'field_int_sup_phone';
$handler->display->display_options['fields']['field_int_sup_phone']['table'] = 'field_data_field_int_sup_phone';
$handler->display->display_options['fields']['field_int_sup_phone']['field'] = 'field_int_sup_phone';
$handler->display->display_options['fields']['field_int_sup_phone']['relationship'] = 'field_stp_assignment_target_id';
$handler->display->display_options['fields']['field_int_sup_phone']['label'] = 'Phone';
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_int_sup_phone']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_int_sup_phone']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_int_sup_phone']['type'] = 'text_default';
$handler->display->display_options['fields']['field_int_sup_phone']['field_api_classes'] = 0;
/* Contextual filter: Logged in user */
$handler->display->display_options['arguments']['user']['id'] = 'user';
$handler->display->display_options['arguments']['user']['table'] = 'profile';
$handler->display->display_options['arguments']['user']['field'] = 'user';
$handler->display->display_options['arguments']['user']['ui_name'] = 'Logged in user';
$handler->display->display_options['arguments']['user']['default_action'] = 'default';
$handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['user']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['user']['break_phrase'] = 0;
$handler->display->display_options['arguments']['user']['not'] = 0;
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'student_profile' => 'student_profile',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'my-assignment';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'My Assignment';
$handler->display->display_options['menu']['description'] = 'The internship to which I have been assigned';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$views[$view->name] = $view;