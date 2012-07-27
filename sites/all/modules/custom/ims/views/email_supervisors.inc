<?php
$view = new view;
$view->name = 'email_supervisors';
$view->description = 'Builds a list of supervisors for an email blast';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Email Supervisors';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Email Supervisors';
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
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_int_sup_name' => 'field_int_sup_name',
  'field_int_sup_email' => 'field_int_sup_email',
  'title_1' => 'title_1',
  'title' => 'title',
  'field_int_course' => 'field_int_course',
  'views_send' => 'views_send',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_int_sup_name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_int_sup_email' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title_1' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
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
  'views_send' => array(
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
$handler->display->display_options['empty']['area']['label'] = 'No Results';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = '<p>
<br />
<h3>There are no internships that match the selection criteria.</h3>
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
/* Relationship: Semester */
$handler->display->display_options['relationships']['field_int_semester_target_id']['id'] = 'field_int_semester_target_id';
$handler->display->display_options['relationships']['field_int_semester_target_id']['table'] = 'field_data_field_int_semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['field'] = 'field_int_semester_target_id';
$handler->display->display_options['relationships']['field_int_semester_target_id']['ui_name'] = 'Semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['label'] = 'Semester';
$handler->display->display_options['relationships']['field_int_semester_target_id']['required'] = 1;
/* Field: Content: Supervisor Name */
$handler->display->display_options['fields']['field_int_sup_name']['id'] = 'field_int_sup_name';
$handler->display->display_options['fields']['field_int_sup_name']['table'] = 'field_data_field_int_sup_name';
$handler->display->display_options['fields']['field_int_sup_name']['field'] = 'field_int_sup_name';
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
$handler->display->display_options['fields']['field_int_sup_email']['field_api_classes'] = 0;
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
/* Field: Global: Send E-mail */
$handler->display->display_options['fields']['views_send']['id'] = 'views_send';
$handler->display->display_options['fields']['views_send']['table'] = 'views';
$handler->display->display_options['fields']['views_send']['field'] = 'views_send';
$handler->display->display_options['fields']['views_send']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['views_send']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['views_send']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['views_send']['alter']['external'] = 0;
$handler->display->display_options['fields']['views_send']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['views_send']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['views_send']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['views_send']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['views_send']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['views_send']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['views_send']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['views_send']['alter']['trim'] = 0;
$handler->display->display_options['fields']['views_send']['alter']['html'] = 0;
$handler->display->display_options['fields']['views_send']['element_label_colon'] = 0;
$handler->display->display_options['fields']['views_send']['element_default_classes'] = 1;
$handler->display->display_options['fields']['views_send']['hide_empty'] = 0;
$handler->display->display_options['fields']['views_send']['empty_zero'] = 0;
$handler->display->display_options['fields']['views_send']['hide_alter_empty'] = 1;
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
/* Sort criterion: Content: Supervisor Name (field_eval_supervisor_name) */
$handler->display->display_options['sorts']['field_eval_supervisor_name_value']['id'] = 'field_eval_supervisor_name_value';
$handler->display->display_options['sorts']['field_eval_supervisor_name_value']['table'] = 'field_data_field_eval_supervisor_name';
$handler->display->display_options['sorts']['field_eval_supervisor_name_value']['field'] = 'field_eval_supervisor_name_value';
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
$handler->display->display_options['filters']['field_int_course_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator_id'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['label'] = 'Course';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['operator'] = 'field_int_course_target_id_op';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['identifier'] = 'field_int_course_target_id';
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['multiple'] = 1;
$handler->display->display_options['filters']['field_int_course_target_id']['expose']['reduce'] = 0;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'email-supervisors';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Email Supervisors';
$handler->display->display_options['menu']['description'] = 'Send email to the current supervisors';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$views[$view->name] = $view;
