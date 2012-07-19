<?php
$view = new view;
$view->name = 'final_evaluations';
$view->description = 'A view of final evaluations';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Final Evaluations';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Final Evaluations';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'create organization content';
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
/* Relationship: Internship */
$handler->display->display_options['relationships']['field_fin_internship_target_id']['id'] = 'field_fin_internship_target_id';
$handler->display->display_options['relationships']['field_fin_internship_target_id']['table'] = 'field_data_field_fin_internship';
$handler->display->display_options['relationships']['field_fin_internship_target_id']['field'] = 'field_fin_internship_target_id';
$handler->display->display_options['relationships']['field_fin_internship_target_id']['ui_name'] = 'Internship';
$handler->display->display_options['relationships']['field_fin_internship_target_id']['label'] = 'Internship';
$handler->display->display_options['relationships']['field_fin_internship_target_id']['required'] = 1;
/* Relationship: Organization */
$handler->display->display_options['relationships']['field_int_org_id_target_id']['id'] = 'field_int_org_id_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['table'] = 'field_data_field_int_org_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['field'] = 'field_int_org_id_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['relationship'] = 'field_fin_internship_target_id';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['ui_name'] = 'Organization';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['label'] = 'Organization';
$handler->display->display_options['relationships']['field_int_org_id_target_id']['required'] = 1;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Evaluation';
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title_2']['id'] = 'title_2';
$handler->display->display_options['fields']['title_2']['table'] = 'node';
$handler->display->display_options['fields']['title_2']['field'] = 'title';
$handler->display->display_options['fields']['title_2']['relationship'] = 'field_fin_internship_target_id';
$handler->display->display_options['fields']['title_2']['label'] = 'Internship';
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
$handler->display->display_options['fields']['title_2']['link_to_node'] = 1;
/* Field: Content: Semester */
$handler->display->display_options['fields']['field_int_semester']['id'] = 'field_int_semester';
$handler->display->display_options['fields']['field_int_semester']['table'] = 'field_data_field_int_semester';
$handler->display->display_options['fields']['field_int_semester']['field'] = 'field_int_semester';
$handler->display->display_options['fields']['field_int_semester']['relationship'] = 'field_fin_internship_target_id';
$handler->display->display_options['fields']['field_int_semester']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_int_semester']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_int_semester']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_int_semester']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_int_semester']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_int_semester']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_int_semester']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_int_semester']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_int_semester']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_int_semester']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_int_semester']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_int_semester']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_int_semester']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_int_semester']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_int_semester']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_int_semester']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_int_semester']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_int_semester']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_int_semester']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['fields']['field_int_semester']['field_api_classes'] = 0;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'final_evaluation' => 'final_evaluation',
);
/* Filter criterion: Final Evaluation */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['ui_name'] = 'Final Evaluation';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['use_operator'] = 1;
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['required'] = 0;
$handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
/* Filter criterion: Organization */
$handler->display->display_options['filters']['title_1']['id'] = 'title_1';
$handler->display->display_options['filters']['title_1']['table'] = 'node';
$handler->display->display_options['filters']['title_1']['field'] = 'title';
$handler->display->display_options['filters']['title_1']['relationship'] = 'field_int_org_id_target_id';
$handler->display->display_options['filters']['title_1']['ui_name'] = 'Organization';
$handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'org_title_op';
$handler->display->display_options['filters']['title_1']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title_1']['expose']['use_operator'] = 1;
$handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
$handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'org_title';
$handler->display->display_options['filters']['title_1']['expose']['required'] = 0;
$handler->display->display_options['filters']['title_1']['expose']['multiple'] = FALSE;
/* Filter criterion: Content: Semester (field_int_semester) */
$handler->display->display_options['filters']['field_int_semester_target_id']['id'] = 'field_int_semester_target_id';
$handler->display->display_options['filters']['field_int_semester_target_id']['table'] = 'field_data_field_int_semester';
$handler->display->display_options['filters']['field_int_semester_target_id']['field'] = 'field_int_semester_target_id';
$handler->display->display_options['filters']['field_int_semester_target_id']['relationship'] = 'field_fin_internship_target_id';
$handler->display->display_options['filters']['field_int_semester_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['operator_id'] = 'field_int_semester_target_id_op';
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['label'] = 'Semester';
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['operator'] = 'field_int_semester_target_id_op';
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['identifier'] = 'field_int_semester_target_id';
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['multiple'] = 1;
$handler->display->display_options['filters']['field_int_semester_target_id']['expose']['reduce'] = 0;

/* Display: Admin Page */
$handler = $view->new_display('page', 'Admin Page', 'page');
$handler->display->display_options['path'] = 'final-evaluations';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Final Evaluations';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Supervisor Page */
$handler = $view->new_display('page', 'Supervisor Page', 'page_1');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  5 => '5',
);
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['uid']['not'] = 0;
$handler->display->display_options['path'] = 'my-final-evals';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'My Final Evaluations';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$views[$view->name] = $view;
