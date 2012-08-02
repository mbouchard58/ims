<?php
$view = new view;
$view->name = 'students_by_course';
$view->description = 'A list of students for a particular course';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Students by Course';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Students by Course';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'edit any internship content';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Semester */
$handler->display->display_options['relationships']['field_st_semester_target_id']['id'] = 'field_st_semester_target_id';
$handler->display->display_options['relationships']['field_st_semester_target_id']['table'] = 'field_data_field_st_semester';
$handler->display->display_options['relationships']['field_st_semester_target_id']['field'] = 'field_st_semester_target_id';
$handler->display->display_options['relationships']['field_st_semester_target_id']['ui_name'] = 'Semester';
$handler->display->display_options['relationships']['field_st_semester_target_id']['label'] = 'Semester';
$handler->display->display_options['relationships']['field_st_semester_target_id']['required'] = 1;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['nid']['alter']['external'] = 0;
$handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nid']['alter']['html'] = 0;
$handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
$handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['nid']['link_to_node'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Content: Assignment */
$handler->display->display_options['fields']['field_st_assignment']['id'] = 'field_st_assignment';
$handler->display->display_options['fields']['field_st_assignment']['table'] = 'field_data_field_st_assignment';
$handler->display->display_options['fields']['field_st_assignment']['field'] = 'field_st_assignment';
$handler->display->display_options['fields']['field_st_assignment']['label'] = '';
$handler->display->display_options['fields']['field_st_assignment']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_st_assignment']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_st_assignment']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_st_assignment']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_st_assignment']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_st_assignment']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_st_assignment']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['fields']['field_st_assignment']['field_api_classes'] = 0;
/* Sort criterion: Content: Last Name (field_st_lname) */
$handler->display->display_options['sorts']['field_st_lname_value']['id'] = 'field_st_lname_value';
$handler->display->display_options['sorts']['field_st_lname_value']['table'] = 'field_data_field_st_lname';
$handler->display->display_options['sorts']['field_st_lname_value']['field'] = 'field_st_lname_value';
/* Contextual filter: Content: Course (field_st_course) */
$handler->display->display_options['arguments']['field_st_course_target_id']['id'] = 'field_st_course_target_id';
$handler->display->display_options['arguments']['field_st_course_target_id']['table'] = 'field_data_field_st_course';
$handler->display->display_options['arguments']['field_st_course_target_id']['field'] = 'field_st_course_target_id';
$handler->display->display_options['arguments']['field_st_course_target_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_st_course_target_id']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['field_st_course_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_st_course_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_st_course_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_st_course_target_id']['break_phrase'] = 0;
$handler->display->display_options['arguments']['field_st_course_target_id']['not'] = 0;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'student' => 'student',
);
/* Filter criterion: Feeds item: Item URL */
$handler->display->display_options['filters']['url']['id'] = 'url';
$handler->display->display_options['filters']['url']['table'] = 'feeds_item';
$handler->display->display_options['filters']['url']['field'] = 'url';
$handler->display->display_options['filters']['url']['operator'] = 'not empty';
/* Filter criterion: Taxonomy term: Active (field_tax_sem_active) */
$handler->display->display_options['filters']['field_tax_sem_active_value']['id'] = 'field_tax_sem_active_value';
$handler->display->display_options['filters']['field_tax_sem_active_value']['table'] = 'field_data_field_tax_sem_active';
$handler->display->display_options['filters']['field_tax_sem_active_value']['field'] = 'field_tax_sem_active_value';
$handler->display->display_options['filters']['field_tax_sem_active_value']['relationship'] = 'field_st_semester_target_id';
$handler->display->display_options['filters']['field_tax_sem_active_value']['value'] = array(
  1 => '1',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$views[$view->name] = $view;
