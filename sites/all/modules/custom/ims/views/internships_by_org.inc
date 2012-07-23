<?php
$view = new view;
$view->name = 'internships_by_org';
$view->description = 'A view content pane showing internships for a given organization';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Internships by Org';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_int_desc' => 'field_int_desc',
  'field_int_course' => 'field_int_course',
  'field_int_chosen' => 'field_int_chosen',
  'field_stp_lname' => 'field_stp_lname',
);
$handler->display->display_options['style_options']['default'] = 'field_int_course';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_int_desc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_int_course' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_int_chosen' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_stp_lname' => array(
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
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'No Current Internships';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = 'There are no internships for this organization for the current semester.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['empty']['area']['tokenize'] = 0;
/* Relationship: Semester */
$handler->display->display_options['relationships']['field_int_semester_target_id']['id'] = 'field_int_semester_target_id';
$handler->display->display_options['relationships']['field_int_semester_target_id']['table'] = 'field_data_field_int_semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['field'] = 'field_int_semester_target_id';
$handler->display->display_options['relationships']['field_int_semester_target_id']['ui_name'] = 'Semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['label'] = 'Semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['required'] = 1;
/* Relationship: Student Profile */
$handler->display->display_options['relationships']['field_int_assignment_target_id']['id'] = 'field_int_assignment_target_id';
$handler->display->display_options['relationships']['field_int_assignment_target_id']['table'] = 'field_data_field_int_assignment';
$handler->display->display_options['relationships']['field_int_assignment_target_id']['field'] = 'field_int_assignment_target_id';
$handler->display->display_options['relationships']['field_int_assignment_target_id']['ui_name'] = 'Student Profile';
$handler->display->display_options['relationships']['field_int_assignment_target_id']['label'] = 'Student Profile';
$handler->display->display_options['relationships']['field_int_assignment_target_id']['required'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Internship';
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
/* Field: Content: Description */
$handler->display->display_options['fields']['field_int_desc']['id'] = 'field_int_desc';
$handler->display->display_options['fields']['field_int_desc']['table'] = 'field_data_field_int_desc';
$handler->display->display_options['fields']['field_int_desc']['field'] = 'field_int_desc';
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
$handler->display->display_options['fields']['field_int_desc']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['field_int_desc']['settings'] = array(
  'trim_length' => '120',
);
$handler->display->display_options['fields']['field_int_desc']['field_api_classes'] = 0;
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
/* Field: Content: Chosen */
$handler->display->display_options['fields']['field_int_chosen']['id'] = 'field_int_chosen';
$handler->display->display_options['fields']['field_int_chosen']['table'] = 'field_data_field_int_chosen';
$handler->display->display_options['fields']['field_int_chosen']['field'] = 'field_int_chosen';
$handler->display->display_options['fields']['field_int_chosen']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_int_chosen']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_int_chosen']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_int_chosen']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_int_chosen']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_int_chosen']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_int_chosen']['field_api_classes'] = 0;
/* Field: Profile: Last Name */
$handler->display->display_options['fields']['field_stp_lname']['id'] = 'field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['table'] = 'field_data_field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['field'] = 'field_stp_lname';
$handler->display->display_options['fields']['field_stp_lname']['relationship'] = 'field_int_assignment_target_id';
$handler->display->display_options['fields']['field_stp_lname']['label'] = 'Assignment';
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
$handler->display->display_options['fields']['field_stp_lname']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_stp_lname']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_stp_lname']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_stp_lname']['field_api_classes'] = 0;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Organization */
$handler->display->display_options['arguments']['field_int_org_id_target_id']['id'] = 'field_int_org_id_target_id';
$handler->display->display_options['arguments']['field_int_org_id_target_id']['table'] = 'field_data_field_int_org_id';
$handler->display->display_options['arguments']['field_int_org_id_target_id']['field'] = 'field_int_org_id_target_id';
$handler->display->display_options['arguments']['field_int_org_id_target_id']['ui_name'] = 'Organization';
$handler->display->display_options['arguments']['field_int_org_id_target_id']['default_action'] = 'not found';
$handler->display->display_options['arguments']['field_int_org_id_target_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_int_org_id_target_id']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['field_int_org_id_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_int_org_id_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_int_org_id_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_int_org_id_target_id']['break_phrase'] = 0;
$handler->display->display_options['arguments']['field_int_org_id_target_id']['not'] = 0;
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

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['argument_input'] = array(
  'field_int_org_id_target_id' => array(
    'type' => 'context',
    'context' => 'entity:node.nid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Organization',
  ),
);
$views[$view->name] = $view;
