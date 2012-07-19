<?php
$view = new view;
$view->name = 'choices_by_org';
$view->description = 'Students choices listed by organization';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Choices by Organization';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'LIS 438 Student Choices by Organization';
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
    'field' => 'title_1',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
  1 => array(
    'field' => 'title',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
  2 => array(
    'field' => 'field_int_sup_name',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
  3 => array(
    'field' => 'field_int_positions',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['row_class'] = 'choices-by-org-rows';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = 0;
$handler->display->display_options['row_options']['default_field_elements'] = 1;
/* Relationship: Organization */
$handler->display->display_options['relationships']['field_int_org_id_target_id']['id'] = 'field_int_org_id_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['table'] = 'field_data_field_int_org_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['field'] = 'field_int_org_id_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['ui_name'] = 'Organization';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['label'] = 'Organization';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['required'] = 1;
/* Relationship: Choices */
$handler->display->display_options['relationships']['reverse_field_ch_internship_node']['id'] = 'reverse_field_ch_internship_node';
$handler->display->display_options['relationships']['reverse_field_ch_internship_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_ch_internship_node']['field'] = 'reverse_field_ch_internship_node';
$handler->display->display_options['relationships']['reverse_field_ch_internship_node']['ui_name'] = 'Choices';
$handler->display->display_options['relationships']['reverse_field_ch_internship_node']['label'] = 'Choices';
$handler->display->display_options['relationships']['reverse_field_ch_internship_node']['required'] = 1;
/* Relationship: Semester */
$handler->display->display_options['relationships']['field_int_semester_target_id']['id'] = 'field_int_semester_target_id';
$handler->display->display_options['relationships']['field_int_semester_target_id']['table'] = 'field_data_field_int_semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['field'] = 'field_int_semester_target_id';
$handler->display->display_options['relationships']['field_int_semester_target_id']['ui_name'] = 'Semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['label'] = 'Semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['required'] = 1;
/* Relationship: Student Profile */
$handler->display->display_options['relationships']['field_ch_student_target_id']['id'] = 'field_ch_student_target_id';
$handler->display->display_options['relationships']['field_ch_student_target_id']['table'] = 'field_data_field_ch_student';
$handler->display->display_options['relationships']['field_ch_student_target_id']['field'] = 'field_ch_student_target_id';
$handler->display->display_options['relationships']['field_ch_student_target_id']['relationship'] = 'reverse_field_ch_internship_node';
$handler->display->display_options['relationships']['field_ch_student_target_id']['ui_name'] = 'Student Profile';
$handler->display->display_options['relationships']['field_ch_student_target_id']['label'] = 'Student Profile';
$handler->display->display_options['relationships']['field_ch_student_target_id']['required'] = 1;
/* Field: Organization */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'field_int_org_id_target_id';
$handler->display->display_options['fields']['title_1']['ui_name'] = 'Organization';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
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
/* Field: Internship */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['ui_name'] = 'Internship';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['external'] = 0;
$handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Content: Supervisor Name */
$handler->display->display_options['fields']['field_int_sup_name']['id'] = 'field_int_sup_name';
$handler->display->display_options['fields']['field_int_sup_name']['table'] = 'field_data_field_int_sup_name';
$handler->display->display_options['fields']['field_int_sup_name']['field'] = 'field_int_sup_name';
$handler->display->display_options['fields']['field_int_sup_name']['label'] = '';
$handler->display->display_options['fields']['field_int_sup_name']['exclude'] = TRUE;
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
$handler->display->display_options['fields']['field_int_sup_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_int_sup_name']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_int_sup_name']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_int_sup_name']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_int_sup_name']['field_api_classes'] = 0;
/* Field: Content: Positions */
$handler->display->display_options['fields']['field_int_positions']['id'] = 'field_int_positions';
$handler->display->display_options['fields']['field_int_positions']['table'] = 'field_data_field_int_positions';
$handler->display->display_options['fields']['field_int_positions']['field'] = 'field_int_positions';
$handler->display->display_options['fields']['field_int_positions']['label'] = '';
$handler->display->display_options['fields']['field_int_positions']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_int_positions']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_int_positions']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_int_positions']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_int_positions']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_int_positions']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_int_positions']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_int_positions']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_int_positions']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_int_positions']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_int_positions']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_int_positions']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_int_positions']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_int_positions']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_int_positions']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_int_positions']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_int_positions']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_int_positions']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_int_positions']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_int_positions']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_int_positions']['field_api_classes'] = 0;
/* Field: Profile: Last Name */
$handler->display->display_options['fields']['field_stp_lname']['id'] = 'field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['table'] = 'field_data_field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['field'] = 'field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['relationship'] = 'field_ch_student_target_id';
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
/* Field: Profile: First Name */
$handler->display->display_options['fields']['field_stp_fname']['id'] = 'field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['table'] = 'field_data_field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['field'] = 'field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['relationship'] = 'field_ch_student_target_id';
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
/* Field: Content: Rank */
$handler->display->display_options['fields']['field_ch_rank']['id'] = 'field_ch_rank';
$handler->display->display_options['fields']['field_ch_rank']['table'] = 'field_data_field_ch_rank';
$handler->display->display_options['fields']['field_ch_rank']['field'] = 'field_ch_rank';
$handler->display->display_options['fields']['field_ch_rank']['relationship'] = 'reverse_field_ch_internship_node';
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
/* Field: Content: Notes */
$handler->display->display_options['fields']['field_ch_notes']['id'] = 'field_ch_notes';
$handler->display->display_options['fields']['field_ch_notes']['table'] = 'field_data_field_ch_notes';
$handler->display->display_options['fields']['field_ch_notes']['field'] = 'field_ch_notes';
$handler->display->display_options['fields']['field_ch_notes']['relationship'] = 'reverse_field_ch_internship_node';
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
$handler->display->display_options['fields']['field_ch_notes']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['field_ch_notes']['settings'] = array(
  'trim_length' => '150',
);
$handler->display->display_options['fields']['field_ch_notes']['field_api_classes'] = 0;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['relationship'] = 'field_int_org_id_target_id';
/* Sort criterion: Internship */
$handler->display->display_options['sorts']['title_1']['id'] = 'title_1';
$handler->display->display_options['sorts']['title_1']['table'] = 'node';
$handler->display->display_options['sorts']['title_1']['field'] = 'title';
$handler->display->display_options['sorts']['title_1']['ui_name'] = 'Internship';
/* Sort criterion: Profile: Last Name (field_stp_lname) */
$handler->display->display_options['sorts']['field_stp_lname_value']['id'] = 'field_stp_lname_value';
$handler->display->display_options['sorts']['field_stp_lname_value']['table'] = 'field_data_field_stp_lname';
$handler->display->display_options['sorts']['field_stp_lname_value']['field'] = 'field_stp_lname_value';
$handler->display->display_options['sorts']['field_stp_lname_value']['relationship'] = 'field_ch_student_target_id';
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
$handler->display->display_options['filters']['field_int_course_target_id']['value'] = array(
  83 => '83',
);
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator_id'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['label'] = 'Course';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['identifier'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['multiple'] = 1;
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['reduce'] = 0;

/* Display: LIS 438 page */
$handler = $view->new_display('page', 'LIS 438 page', 'page');
$handler->display->display_options['path'] = 'choices-by-org-438';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'LIS 438 Choices By Org';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;

/* Display: LIS 502 page */
$handler = $view->new_display('page', 'LIS 502 page', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'LIS 502 Student Choices by Organization';
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
  'internship' => 'internship',
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
$handler->display->display_options['filters']['field_int_course_target_id']['value'] = array(
  85 => '85',
);
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator_id'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['label'] = 'Course';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['identifier'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['multiple'] = 1;
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['reduce'] = 0;
$handler->display->display_options['path'] = 'choices-by-org-502';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'LIS 502 Choices By Org';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$views[$view->name] = $view;
