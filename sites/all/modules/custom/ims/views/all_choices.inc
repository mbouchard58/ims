<?php
$view = new view;
$view->name = 'all_choices';
$view->description = 'List all choices for the active semester';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'All Choices';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'All LIS 438 Student Choices for the Current Semester';
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
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'field_stp_lname',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
  1 => array(
    'field' => 'field_stp_fname',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
  2 => array(
    'field' => 'field_stp_transit_req',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['row_class'] = 'all-choices-rows';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_stp_lname' => 'field_stp_lname',
  'field_stp_fname' => 'field_stp_fname',
  'field_stp_transit_req' => 'field_stp_transit_req',
  'field_ch_rank' => 'field_ch_rank',
  'title_1' => 'title_1',
  'field_ch_notes' => 'field_ch_notes',
);
$handler->display->display_options['row_options']['separator'] = ' ';
$handler->display->display_options['row_options']['hide_empty'] = 0;
$handler->display->display_options['row_options']['default_field_elements'] = 1;
/* Relationship: Student Profile */
$handler->display->display_options['relationships']['field_ch_student_target_id']['id'] = 'field_ch_student_target_id';
$handler->display->display_options['relationships']['field_ch_student_target_id']['table'] = 'field_data_field_ch_student';
$handler->display->display_options['relationships']['field_ch_student_target_id']['field'] = 'field_ch_student_target_id';
$handler->display->display_options['relationships']['field_ch_student_target_id']['ui_name'] = 'Student Profile';
$handler->display->display_options['relationships']['field_ch_student_target_id']['label'] = 'Student Profile';
$handler->display->display_options['relationships']['field_ch_student_target_id']['required'] = 1;
/* Relationship: Internship */
$handler->display->display_options['relationships']['field_ch_internship_target_id']['id'] = 'field_ch_internship_target_id';
$handler->display->display_options['relationships']['field_ch_internship_target_id']['table'] = 'field_data_field_ch_internship';
$handler->display->display_options['relationships']['field_ch_internship_target_id']['field'] = 'field_ch_internship_target_id';
$handler->display->display_options['relationships']['field_ch_internship_target_id']['ui_name'] = 'Internship';
$handler->display->display_options['relationships']['field_ch_internship_target_id']['label'] = 'Internship';
$handler->display->display_options['relationships']['field_ch_internship_target_id']['required'] = 1;
/* Relationship: Organization */
$handler->display->display_options['relationships']['field_int_org_id_target_id']['id'] = 'field_int_org_id_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['table'] = 'field_data_field_int_org_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['field'] = 'field_int_org_id_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['relationship'] = 'field_ch_internship_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['ui_name'] = 'Organization';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['label'] = 'Organization';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['required'] = 1;
/* Relationship: Semester */
$handler->display->display_options['relationships']['field_int_semester_target_id']['id'] = 'field_int_semester_target_id';
$handler->display->display_options['relationships']['field_int_semester_target_id']['table'] = 'field_data_field_int_semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['field'] = 'field_int_semester_target_id';
$handler->display->display_options['relationships']['field_int_semester_target_id']['relationship'] = 'field_ch_internship_target_id';
$handler->display->display_options['relationships']['field_int_semester_target_id']['ui_name'] = 'Semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['label'] = 'Semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['required'] = 1;
/* Field: Profile: Last Name */
$handler->display->display_options['fields']['field_stp_lname']['id'] = 'field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['table'] = 'field_data_field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['field'] = 'field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['relationship'] = 'field_ch_student_target_id';
$handler->display->display_options['fields']['field_stp_lname']['label'] = '';
$handler->display->display_options['fields']['field_stp_lname']['exclude'] = TRUE;
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
/* Field: Profile: First Name */
$handler->display->display_options['fields']['field_stp_fname']['id'] = 'field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['table'] = 'field_data_field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['field'] = 'field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['relationship'] = 'field_ch_student_target_id';
$handler->display->display_options['fields']['field_stp_fname']['label'] = '';
$handler->display->display_options['fields']['field_stp_fname']['exclude'] = TRUE;
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
/* Field: Profile: Transportation */
$handler->display->display_options['fields']['field_stp_transit_req']['id'] = 'field_stp_transit_req';
$handler->display->display_options['fields']['field_stp_transit_req']['table'] = 'field_data_field_stp_transit_req';
$handler->display->display_options['fields']['field_stp_transit_req']['field'] = 'field_stp_transit_req';
$handler->display->display_options['fields']['field_stp_transit_req']['relationship'] = 'field_ch_student_target_id';
$handler->display->display_options['fields']['field_stp_transit_req']['label'] = '';
$handler->display->display_options['fields']['field_stp_transit_req']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['element_type'] = 'div';
$handler->display->display_options['fields']['field_stp_transit_req']['element_class'] = 'all-choices-transit';
$handler->display->display_options['fields']['field_stp_transit_req']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_stp_transit_req']['element_default_classes'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_stp_transit_req']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_stp_transit_req']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['field_stp_transit_req']['settings'] = array(
  'trim_length' => '600',
);
$handler->display->display_options['fields']['field_stp_transit_req']['field_api_classes'] = 0;
/* Field: Content: Rank */
$handler->display->display_options['fields']['field_ch_rank']['id'] = 'field_ch_rank';
$handler->display->display_options['fields']['field_ch_rank']['table'] = 'field_data_field_ch_rank';
$handler->display->display_options['fields']['field_ch_rank']['field'] = 'field_ch_rank';
$handler->display->display_options['fields']['field_ch_rank']['label'] = '';
$handler->display->display_options['fields']['field_ch_rank']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_ch_rank']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_ch_rank']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ch_rank']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_ch_rank']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_ch_rank']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_ch_rank']['field_api_classes'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'field_int_org_id_target_id';
$handler->display->display_options['fields']['title_1']['label'] = '';
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
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
/* Field: Content: Notes */
$handler->display->display_options['fields']['field_ch_notes']['id'] = 'field_ch_notes';
$handler->display->display_options['fields']['field_ch_notes']['table'] = 'field_data_field_ch_notes';
$handler->display->display_options['fields']['field_ch_notes']['field'] = 'field_ch_notes';
$handler->display->display_options['fields']['field_ch_notes']['label'] = '';
$handler->display->display_options['fields']['field_ch_notes']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_ch_notes']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_ch_notes']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ch_notes']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_ch_notes']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_ch_notes']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_ch_notes']['field_api_classes'] = 0;
/* Sort criterion: Profile: Last Name (field_stp_lname) */
$handler->display->display_options['sorts']['field_stp_lname_value']['id'] = 'field_stp_lname_value';
$handler->display->display_options['sorts']['field_stp_lname_value']['table'] = 'field_data_field_stp_lname';
$handler->display->display_options['sorts']['field_stp_lname_value']['field'] = 'field_stp_lname_value';
$handler->display->display_options['sorts']['field_stp_lname_value']['relationship'] = 'field_ch_student_target_id';
/* Sort criterion: Profile: First Name (field_stp_fname) */
$handler->display->display_options['sorts']['field_stp_fname_value']['id'] = 'field_stp_fname_value';
$handler->display->display_options['sorts']['field_stp_fname_value']['table'] = 'field_data_field_stp_fname';
$handler->display->display_options['sorts']['field_stp_fname_value']['field'] = 'field_stp_fname_value';
$handler->display->display_options['sorts']['field_stp_fname_value']['relationship'] = 'field_ch_student_target_id';
/* Sort criterion: Content: Rank (field_ch_rank) */
$handler->display->display_options['sorts']['field_ch_rank_value']['id'] = 'field_ch_rank_value';
$handler->display->display_options['sorts']['field_ch_rank_value']['table'] = 'field_data_field_ch_rank';
$handler->display->display_options['sorts']['field_ch_rank_value']['field'] = 'field_ch_rank_value';
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
  'internship_choice' => 'internship_choice',
);
/* Filter criterion: Taxonomy term: Active (field_tax_sem_active) */
$handler->display->display_options['filters']['field_tax_sem_active_value']['id'] = 'field_tax_sem_active_value';
$handler->display->display_options['filters']['field_tax_sem_active_value']['table'] = 'field_data_field_tax_sem_active';
$handler->display->display_options['filters']['field_tax_sem_active_value']['field'] = 'field_tax_sem_active_value';
$handler->display->display_options['filters']['field_tax_sem_active_value']['relationship'] = 'field_int_semester_target_id';
$handler->display->display_options['filters']['field_tax_sem_active_value']['value'] = array(
  1 => '1',
);
/* Filter criterion: Content: Course (field_int_course) */
$handler->display->display_options['filters']['field_int_course_target_id']['id'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['table'] = 'field_data_field_int_course';
$handler->display->display_options['filters']['field_int_course_target_id']['field'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['relationship'] = 'field_ch_internship_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['value'] = array(
  83 => '83',
);
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator_id'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['label'] = 'Course ';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['identifier'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['multiple'] = 1;
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['reduce'] = 0;

/* Display: LIS 438 page */
$handler = $view->new_display('page', 'LIS 438 page', 'page');
$handler->display->display_options['path'] = 'all-choices-438';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'All LIS 438 Student Choices';
$handler->display->display_options['menu']['description'] = 'Lists all  LIS 438 student requests for the current semester.';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;

/* Display: LIS 502 page */
$handler = $view->new_display('page', 'LIS 502 page', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'All LIS 502 Student Choices for the Current Semester';
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'internship_choice' => 'internship_choice',
);
/* Filter criterion: Taxonomy term: Active (field_tax_sem_active) */
$handler->display->display_options['filters']['field_tax_sem_active_value']['id'] = 'field_tax_sem_active_value';
$handler->display->display_options['filters']['field_tax_sem_active_value']['table'] = 'field_data_field_tax_sem_active';
$handler->display->display_options['filters']['field_tax_sem_active_value']['field'] = 'field_tax_sem_active_value';
$handler->display->display_options['filters']['field_tax_sem_active_value']['relationship'] = 'field_int_semester_target_id';
$handler->display->display_options['filters']['field_tax_sem_active_value']['value'] = array(
  1 => '1',
);
/* Filter criterion: Content: Course (field_int_course) */
$handler->display->display_options['filters']['field_int_course_target_id']['id'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['table'] = 'field_data_field_int_course';
$handler->display->display_options['filters']['field_int_course_target_id']['field'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['relationship'] = 'field_ch_internship_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['value'] = array(
  85 => '85',
);
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator_id'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['label'] = 'Course ';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['identifier'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['multiple'] = 1;
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['reduce'] = 0;
$handler->display->display_options['path'] = 'all-choices-502';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'All LIS 502 Student Choices';
$handler->display->display_options['menu']['description'] = 'Lists all  LIS 502 student requests for the current semester.';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$views[$view->name] = $view;
