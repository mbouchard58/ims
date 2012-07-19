<?php
$view = new view;
$view->name = 'students_in_a_course';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'profile';
$view->human_name = 'Students in a Course';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Students in a Course';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Student */
$handler->display->display_options['relationships']['field_stp_datatel_student_target_id']['id'] = 'field_stp_datatel_student_target_id';
$handler->display->display_options['relationships']['field_stp_datatel_student_target_id']['table'] = 'field_data_field_stp_datatel_student';
$handler->display->display_options['relationships']['field_stp_datatel_student_target_id']['field'] = 'field_stp_datatel_student_target_id';
$handler->display->display_options['relationships']['field_stp_datatel_student_target_id']['ui_name'] = 'Student';
$handler->display->display_options['relationships']['field_stp_datatel_student_target_id']['label'] = 'Student';
$handler->display->display_options['relationships']['field_stp_datatel_student_target_id']['required'] = 1;
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
/* Field: Profile: First Name */
$handler->display->display_options['fields']['field_stp_fname']['id'] = 'field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['table'] = 'field_data_field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['field'] = 'field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['label'] = '';
$handler->display->display_options['fields']['field_stp_fname']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_stp_fname']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_stp_fname']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_stp_fname']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_stp_fname']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_stp_fname']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_stp_fname']['field_api_classes'] = 0;
/* Field: Profile: Last Name */
$handler->display->display_options['fields']['field_stp_lname']['id'] = 'field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['table'] = 'field_data_field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['field'] = 'field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['label'] = '';
$handler->display->display_options['fields']['field_stp_lname']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_stp_lname']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_stp_lname']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_stp_lname']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_stp_lname']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_stp_lname']['field_api_classes'] = 0;
/* Field: Profile: Assignment */
$handler->display->display_options['fields']['field_stp_assignment']['id'] = 'field_stp_assignment';
$handler->display->display_options['fields']['field_stp_assignment']['table'] = 'field_data_field_stp_assignment';
$handler->display->display_options['fields']['field_stp_assignment']['field'] = 'field_stp_assignment';
$handler->display->display_options['fields']['field_stp_assignment']['label'] = '';
$handler->display->display_options['fields']['field_stp_assignment']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_stp_assignment']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_stp_assignment']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_stp_assignment']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_stp_assignment']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['fields']['field_stp_assignment']['field_api_classes'] = 0;
/* Contextual filter: Content: Course (field_st_course) */
$handler->display->display_options['arguments']['field_st_course_tid']['id'] = 'field_st_course_tid';
$handler->display->display_options['arguments']['field_st_course_tid']['table'] = 'field_data_field_st_course';
$handler->display->display_options['arguments']['field_st_course_tid']['field'] = 'field_st_course_tid';
$handler->display->display_options['arguments']['field_st_course_tid']['relationship'] = 'field_stp_datatel_student_target_id';
$handler->display->display_options['arguments']['field_st_course_tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['field_st_course_tid']['default_argument_options']['term_page'] = 0;
$handler->display->display_options['arguments']['field_st_course_tid']['default_argument_options']['node'] = 0;
$handler->display->display_options['arguments']['field_st_course_tid']['default_argument_options']['limit'] = 0;
$handler->display->display_options['arguments']['field_st_course_tid']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['field_st_course_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_st_course_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_st_course_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_st_course_tid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['field_st_course_tid']['not'] = 0;
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'student_profile' => 'student_profile',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$views[$view->name] = $view;
