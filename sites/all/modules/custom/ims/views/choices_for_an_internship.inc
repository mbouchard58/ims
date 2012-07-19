<?php
$view = new view;
$view->name = 'choices_for_an_internship';
$view->description = 'A list of students who have chosen a particular internship';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Choices for an internship';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Chosen by:';
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
  6 => '6',
  5 => '5',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'student-choices';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_stp_fname' => 'field_stp_fname',
  'field_stp_lname' => 'field_stp_lname',
  'field_ch_rank' => 'field_ch_rank',
);
$handler->display->display_options['row_options']['hide_empty'] = 0;
$handler->display->display_options['row_options']['default_field_elements'] = 1;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Not chosen';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = '<span style="padding:0;margin:7px 7px 7px 7px">Not currently chosen by any student.</span>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
$handler->display->display_options['empty']['area']['tokenize'] = 0;
/* Relationship: Student Profile */
$handler->display->display_options['relationships']['field_ch_student_target_id']['id'] = 'field_ch_student_target_id';
$handler->display->display_options['relationships']['field_ch_student_target_id']['table'] = 'field_data_field_ch_student';
$handler->display->display_options['relationships']['field_ch_student_target_id']['field'] = 'field_ch_student_target_id';
$handler->display->display_options['relationships']['field_ch_student_target_id']['ui_name'] = 'Student Profile';
$handler->display->display_options['relationships']['field_ch_student_target_id']['label'] = 'Student Profile';
$handler->display->display_options['relationships']['field_ch_student_target_id']['required'] = 1;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['nid']['link_to_node'] = 0;
/* Field: First Name (Hidden) */
$handler->display->display_options['fields']['field_stp_fname']['id'] = 'field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['table'] = 'field_data_field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['field'] = 'field_stp_fname';
$handler->display->display_options['fields']['field_stp_fname']['relationship'] = 'field_ch_student_target_id';
$handler->display->display_options['fields']['field_stp_fname']['ui_name'] = 'First Name (Hidden)';
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
/* Field: Profile: Last Name */
$handler->display->display_options['fields']['field_stp_lname']['id'] = 'field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['table'] = 'field_data_field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['field'] = 'field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['relationship'] = 'field_ch_student_target_id';
$handler->display->display_options['fields']['field_stp_lname']['label'] = '';
$handler->display->display_options['fields']['field_stp_lname']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['field_stp_lname']['alter']['text'] = '[field_stp_fname] [field_stp_lname]';
$handler->display->display_options['fields']['field_stp_lname']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['field_stp_lname']['alter']['path'] = 'node/[nid]';
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
$handler->display->display_options['fields']['field_ch_rank']['element_type'] = 'span';
$handler->display->display_options['fields']['field_ch_rank']['element_class'] = 'choice-rank-[field_ch_rank]';
$handler->display->display_options['fields']['field_ch_rank']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ch_rank']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_ch_rank']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_ch_rank']['type'] = 'number_unformatted';
$handler->display->display_options['fields']['field_ch_rank']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_ch_rank']['field_api_classes'] = 0;
/* Contextual filter: Internship */
$handler->display->display_options['arguments']['field_ch_internship_target_id']['id'] = 'field_ch_internship_target_id';
$handler->display->display_options['arguments']['field_ch_internship_target_id']['table'] = 'field_data_field_ch_internship';
$handler->display->display_options['arguments']['field_ch_internship_target_id']['field'] = 'field_ch_internship_target_id';
$handler->display->display_options['arguments']['field_ch_internship_target_id']['ui_name'] = 'Internship';
$handler->display->display_options['arguments']['field_ch_internship_target_id']['default_action'] = 'not found';
$handler->display->display_options['arguments']['field_ch_internship_target_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_ch_internship_target_id']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['field_ch_internship_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_ch_internship_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_ch_internship_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_ch_internship_target_id']['specify_validation'] = 1;
$handler->display->display_options['arguments']['field_ch_internship_target_id']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['field_ch_internship_target_id']['validate_options']['types'] = array(
  'internship' => 'internship',
);
$handler->display->display_options['arguments']['field_ch_internship_target_id']['validate_options']['access'] = 0;
$handler->display->display_options['arguments']['field_ch_internship_target_id']['break_phrase'] = 0;
$handler->display->display_options['arguments']['field_ch_internship_target_id']['not'] = 0;
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

/* Display: Choices by internship */
$handler = $view->new_display('panel_pane', 'Choices by internship', 'panel_pane_1');
$handler->display->display_options['argument_input'] = array(
  'field_ch_internship_target_id' => array(
    'type' => 'context',
    'context' => 'entity:node.nid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Internship',
  ),
);

/* Display: Choices by user */
$handler = $view->new_display('panel_pane', 'Choices by user', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'Choice authored by the same user';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'field_ch_rank' => 'field_ch_rank',
  'title' => 'title',
  'title_1' => 'title_1',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ch_rank' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['override'] = 1;
$handler->display->display_options['style_options']['sticky'] = 0;
$handler->display->display_options['style_options']['empty_table'] = 0;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Not chosen';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = '<span style="padding:0;margin:7px 7px 7px 7px">This student (!1) has no choices.</span>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
$handler->display->display_options['empty']['area']['tokenize'] = 1;
$handler->display->display_options['defaults']['relationships'] = FALSE;
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
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = 1;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['nid']['link_to_node'] = 0;
/* Field: Internship */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'field_ch_internship_target_id';
$handler->display->display_options['fields']['title']['ui_name'] = 'Internship';
$handler->display->display_options['fields']['title']['label'] = 'Internship';
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
/* Field: Organization */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'field_int_org_id_target_id';
$handler->display->display_options['fields']['title_1']['ui_name'] = 'Organization';
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
/* Field: Content: Rank */
$handler->display->display_options['fields']['field_ch_rank']['id'] = 'field_ch_rank';
$handler->display->display_options['fields']['field_ch_rank']['table'] = 'field_data_field_ch_rank';
$handler->display->display_options['fields']['field_ch_rank']['field'] = 'field_ch_rank';
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
$handler->display->display_options['fields']['field_ch_rank']['element_type'] = 'span';
$handler->display->display_options['fields']['field_ch_rank']['element_class'] = 'choice-rank-[field_ch_rank]';
$handler->display->display_options['fields']['field_ch_rank']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_ch_rank']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_ch_rank']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_ch_rank']['type'] = 'number_unformatted';
$handler->display->display_options['fields']['field_ch_rank']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_ch_rank']['field_api_classes'] = 0;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: User: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'users';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['relationship'] = 'uid';
$handler->display->display_options['arguments']['name']['default_action'] = 'empty';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['glossary'] = 0;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = 0;
$handler->display->display_options['arguments']['name']['break_phrase'] = 0;
$handler->display->display_options['argument_input'] = array(
  'name' => array(
    'type' => 'context',
    'context' => 'entity:node.author',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'User: Name',
  ),
);
$views[$view->name] = $view;
