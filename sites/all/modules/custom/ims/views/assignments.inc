<?php
$view = new view;
$view->name = 'assignments';
$view->description = 'A List of Internships with Assignments';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Assignments';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Assignments';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'edit any internship content';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'table';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'No Results';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = '<p>
<br />
<h3>The are no internships that match the selection criteria.</h3>
</p>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
$handler->display->display_options['empty']['area']['tokenize'] = 0;
/* Relationship: Organization */
$handler->display->display_options['relationships']['field_int_org_id_target_id']['id'] = 'field_int_org_id_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['table'] = 'field_data_field_int_org_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['field'] = 'field_int_org_id_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['ui_name'] = 'Organization';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['label'] = 'Organization';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['required'] = 1;
/* Relationship: Assignment */
$handler->display->display_options['relationships']['field_int_assignment_target_id']['id'] = 'field_int_assignment_target_id';
$handler->display->display_options['relationships']['field_int_assignment_target_id']['table'] = 'field_data_field_int_assignment';
$handler->display->display_options['relationships']['field_int_assignment_target_id']['field'] = 'field_int_assignment_target_id';
$handler->display->display_options['relationships']['field_int_assignment_target_id']['ui_name'] = 'Assignment';
$handler->display->display_options['relationships']['field_int_assignment_target_id']['label'] = 'Assignment';
$handler->display->display_options['relationships']['field_int_assignment_target_id']['required'] = 1;
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'field_int_org_id_target_id';
$handler->display->display_options['fields']['title_1']['label'] = 'Organization';
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
/* Field: Content: Course */
$handler->display->display_options['fields']['field_int_course']['id'] = 'field_int_course';
$handler->display->display_options['fields']['field_int_course']['table'] = 'field_data_field_int_course';
$handler->display->display_options['fields']['field_int_course']['field'] = 'field_int_course';
$handler->display->display_options['fields']['field_int_course']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_int_course']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_int_course']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_int_course']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_int_course']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_int_course']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_int_course']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_int_course']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_int_course']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_int_course']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_int_course']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_int_course']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_int_course']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_int_course']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_int_course']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_int_course']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_int_course']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_int_course']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_int_course']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['fields']['field_int_course']['field_api_classes'] = 0;
/* Field: Content: Section */
$handler->display->display_options['fields']['field_st_section']['id'] = 'field_st_section';
$handler->display->display_options['fields']['field_st_section']['table'] = 'field_data_field_st_section';
$handler->display->display_options['fields']['field_st_section']['field'] = 'field_st_section';
$handler->display->display_options['fields']['field_st_section']['relationship'] = 'field_int_assignment_target_id';
$handler->display->display_options['fields']['field_st_section']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_st_section']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_st_section']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_st_section']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_st_section']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_st_section']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_st_section']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_st_section']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_st_section']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_st_section']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_st_section']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_st_section']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_st_section']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_st_section']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_st_section']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_st_section']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_st_section']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_st_section']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_st_section']['field_api_classes'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title_2']['id'] = 'title_2';
$handler->display->display_options['fields']['title_2']['table'] = 'node';
$handler->display->display_options['fields']['title_2']['field'] = 'title';
$handler->display->display_options['fields']['title_2']['relationship'] = 'field_int_assignment_target_id';
$handler->display->display_options['fields']['title_2']['label'] = 'Assigned';
$handler->display->display_options['fields']['title_2']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title_2']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title_2']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title_2']['alter']['external'] = 0;
$handler->display->display_options['fields']['title_2']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title_2']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title_2']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title_2']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['title_2']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title_2']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title_2']['alter']['html'] = 0;
$handler->display->display_options['fields']['title_2']['element_label_colon'] = 0;
$handler->display->display_options['fields']['title_2']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title_2']['hide_empty'] = 0;
$handler->display->display_options['fields']['title_2']['empty_zero'] = 0;
$handler->display->display_options['fields']['title_2']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['title_2']['link_to_node'] = 0;
/* Field: Content: E-Mail */
$handler->display->display_options['fields']['field_st_email']['id'] = 'field_st_email';
$handler->display->display_options['fields']['field_st_email']['table'] = 'field_data_field_st_email';
$handler->display->display_options['fields']['field_st_email']['field'] = 'field_st_email';
$handler->display->display_options['fields']['field_st_email']['relationship'] = 'field_int_assignment_target_id';
$handler->display->display_options['fields']['field_st_email']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_st_email']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_st_email']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_st_email']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_st_email']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_st_email']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_st_email']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_st_email']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_st_email']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_st_email']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_st_email']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_st_email']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_st_email']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_st_email']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_st_email']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_st_email']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_st_email']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_st_email']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_st_email']['field_api_classes'] = 0;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
  'internship' => 'internship',
);
/* Filter criterion: Content: Semester (field_int_semester) */
$handler->display->display_options['filters']['field_int_semester_target_id']['id'] = 'field_int_semester_target_id';
$handler->display->display_options['filters']['field_int_semester_target_id']['table'] = 'field_data_field_int_semester';
$handler->display->display_options['filters']['field_int_semester_target_id']['field'] = 'field_int_semester_target_id';
$handler->display->display_options['filters']['field_int_semester_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['operator_id'] = 'field_int_semester_target_id_op';
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['label'] = 'Semester';
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['operator'] = 'field_int_semester_target_id_op';
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['identifier'] = 'field_int_semester_target_id';
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['multiple'] = 1;
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['reduce'] = 0;
/* Filter criterion: Content: Course (field_int_course) */
$handler->display->display_options['filters']['field_int_course_target_id']['id'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['table'] = 'field_data_field_int_course';
$handler->display->display_options['filters']['field_int_course_target_id']['field'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator_id'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['label'] = 'Course';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['identifier'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['multiple'] = 1;
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['reduce'] = 0;
/* Filter criterion: Content: Section (field_st_section) */
$handler->display->display_options['filters']['field_st_section_value']['id'] = 'field_st_section_value';
$handler->display->display_options['filters']['field_st_section_value']['table'] = 'field_data_field_st_section';
$handler->display->display_options['filters']['field_st_section_value']['field'] = 'field_st_section_value';
$handler->display->display_options['filters']['field_st_section_value']['relationship'] = 'field_int_assignment_target_id';
$handler->display->display_options['filters']['field_st_section_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_st_section_value']['expose']['operator_id'] = 'field_st_section_value_op';
$handler->display->display_options['filters']['field_st_section_value']['expose']['label'] = 'Section';
$handler->display->display_options['filters']['field_st_section_value']['expose']['operator'] = 'field_st_section_value_op';
$handler->display->display_options['filters']['field_st_section_value']['expose']['identifier'] = 'field_st_section_value';
$handler->display->display_options['filters']['field_st_section_value']['expose']['required'] = 0;
$handler->display->display_options['filters']['field_st_section_value']['expose']['multiple'] = FALSE;
/* Filter criterion: Content: Location (field_org_location) */
$handler->display->display_options['filters']['field_org_location_tid']['id'] = 'field_org_location_tid';
$handler->display->display_options['filters']['field_org_location_tid']['table'] = 'field_data_field_org_location';
$handler->display->display_options['filters']['field_org_location_tid']['field'] = 'field_org_location_tid';
$handler->display->display_options['filters']['field_org_location_tid']['relationship'] = 'field_int_org_id_target_id';
$handler->display->display_options['filters']['field_org_location_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_org_location_tid']['expose']['operator_id'] = 'field_org_location_tid_op';
$handler->display->display_options['filters']['field_org_location_tid']['expose']['label'] = 'Location';
$handler->display->display_options['filters']['field_org_location_tid']['expose']['operator'] = 'field_org_location_tid_op';
$handler->display->display_options['filters']['field_org_location_tid']['expose']['identifier'] = 'field_org_location_tid';
$handler->display->display_options['filters']['field_org_location_tid']['expose']['multiple'] = 1;
$handler->display->display_options['filters']['field_org_location_tid']['expose']['reduce'] = 0;
$handler->display->display_options['filters']['field_org_location_tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['field_org_location_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_org_location_tid']['vocabulary'] = 'locations';
$handler->display->display_options['filters']['field_org_location_tid']['error_message'] = 0;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'assignments';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Assignments';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$views[$view->name] = $view;
