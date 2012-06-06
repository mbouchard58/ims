<?php
$view = new view;
$view->name = 'datatel_students';
$view->description = 'A simple view to show the results of the datatel feed; admins only';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Datatel Students';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Datatel Students';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_st_guid' => 'field_st_guid',
  'field_st_id' => 'field_st_id',
  'field_st_fname' => 'field_st_fname',
  'field_st_lname' => 'field_st_lname',
  'field_st_email' => 'field_st_email',
  'field_st_course' => 'field_st_course',
  'field_st_section' => 'field_st_section',
);
$handler->display->display_options['style_options']['default'] = 'field_st_course';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_st_guid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_st_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_st_fname' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_st_lname' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_st_email' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_st_course' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_st_section' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['override'] = 1;
$handler->display->display_options['style_options']['sticky'] = 0;
$handler->display->display_options['style_options']['empty_table'] = 0;
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
/* Field: Content: GUID */
$handler->display->display_options['fields']['field_st_guid']['id'] = 'field_st_guid';
$handler->display->display_options['fields']['field_st_guid']['table'] = 'field_data_field_st_guid';
$handler->display->display_options['fields']['field_st_guid']['field'] = 'field_st_guid';
$handler->display->display_options['fields']['field_st_guid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_st_guid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_st_guid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_st_guid']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_st_guid']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_st_guid']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_st_guid']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_st_guid']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_st_guid']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_st_guid']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_st_guid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_st_guid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_st_guid']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_st_guid']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_st_guid']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_st_guid']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_st_guid']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_st_guid']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_st_guid']['field_api_classes'] = 0;
/* Field: Content: ID */
$handler->display->display_options['fields']['field_st_id']['id'] = 'field_st_id';
$handler->display->display_options['fields']['field_st_id']['table'] = 'field_data_field_st_id';
$handler->display->display_options['fields']['field_st_id']['field'] = 'field_st_id';
$handler->display->display_options['fields']['field_st_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_st_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_st_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_st_id']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_st_id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_st_id']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_st_id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_st_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_st_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_st_id']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_st_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_st_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_st_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_st_id']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_st_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_st_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_st_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_st_id']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_st_id']['field_api_classes'] = 0;
/* Field: Content: First Name */
$handler->display->display_options['fields']['field_st_fname']['id'] = 'field_st_fname';
$handler->display->display_options['fields']['field_st_fname']['table'] = 'field_data_field_st_fname';
$handler->display->display_options['fields']['field_st_fname']['field'] = 'field_st_fname';
$handler->display->display_options['fields']['field_st_fname']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_st_fname']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_st_fname']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_st_fname']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_st_fname']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_st_fname']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_st_fname']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_st_fname']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_st_fname']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_st_fname']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_st_fname']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_st_fname']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_st_fname']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_st_fname']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_st_fname']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_st_fname']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_st_fname']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_st_fname']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_st_fname']['field_api_classes'] = 0;
/* Field: Content: Last Name */
$handler->display->display_options['fields']['field_st_lname']['id'] = 'field_st_lname';
$handler->display->display_options['fields']['field_st_lname']['table'] = 'field_data_field_st_lname';
$handler->display->display_options['fields']['field_st_lname']['field'] = 'field_st_lname';
$handler->display->display_options['fields']['field_st_lname']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_st_lname']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_st_lname']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_st_lname']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_st_lname']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_st_lname']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_st_lname']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_st_lname']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_st_lname']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_st_lname']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_st_lname']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_st_lname']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_st_lname']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_st_lname']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_st_lname']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_st_lname']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_st_lname']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_st_lname']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_st_lname']['field_api_classes'] = 0;
/* Field: Content: E-Mail */
$handler->display->display_options['fields']['field_st_email']['id'] = 'field_st_email';
$handler->display->display_options['fields']['field_st_email']['table'] = 'field_data_field_st_email';
$handler->display->display_options['fields']['field_st_email']['field'] = 'field_st_email';
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
/* Field: Content: Course Name */
$handler->display->display_options['fields']['field_st_course']['id'] = 'field_st_course';
$handler->display->display_options['fields']['field_st_course']['table'] = 'field_data_field_st_course';
$handler->display->display_options['fields']['field_st_course']['field'] = 'field_st_course';
$handler->display->display_options['fields']['field_st_course']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_st_course']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_st_course']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_st_course']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_st_course']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_st_course']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_st_course']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_st_course']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_st_course']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_st_course']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_st_course']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_st_course']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_st_course']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_st_course']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_st_course']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_st_course']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_st_course']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_st_course']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_st_course']['field_api_classes'] = 0;
/* Field: Content: Section */
$handler->display->display_options['fields']['field_st_section']['id'] = 'field_st_section';
$handler->display->display_options['fields']['field_st_section']['table'] = 'field_data_field_st_section';
$handler->display->display_options['fields']['field_st_section']['field'] = 'field_st_section';
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
  'student' => 'student',
);
/* Filter criterion: Content: ID (field_st_id) */
$handler->display->display_options['filters']['field_st_id_value']['id'] = 'field_st_id_value';
$handler->display->display_options['filters']['field_st_id_value']['table'] = 'field_data_field_st_id';
$handler->display->display_options['filters']['field_st_id_value']['field'] = 'field_st_id_value';
$handler->display->display_options['filters']['field_st_id_value']['operator'] = 'not empty';
/* Filter criterion: Content: Course Name (field_st_course) */
$handler->display->display_options['filters']['field_st_course_value']['id'] = 'field_st_course_value';
$handler->display->display_options['filters']['field_st_course_value']['table'] = 'field_data_field_st_course';
$handler->display->display_options['filters']['field_st_course_value']['field'] = 'field_st_course_value';
$handler->display->display_options['filters']['field_st_course_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_st_course_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_st_course_value']['expose']['operator_id'] = 'field_st_course_value_op';
$handler->display->display_options['filters']['field_st_course_value']['expose']['label'] = 'Course Name';
$handler->display->display_options['filters']['field_st_course_value']['expose']['use_operator'] = 1;
$handler->display->display_options['filters']['field_st_course_value']['expose']['operator'] = 'field_st_course_value_op';
$handler->display->display_options['filters']['field_st_course_value']['expose']['identifier'] = 'field_st_course_value';
$handler->display->display_options['filters']['field_st_course_value']['expose']['required'] = 0;
$handler->display->display_options['filters']['field_st_course_value']['expose']['multiple'] = FALSE;
/* Filter criterion: Content: Section (field_st_section) */
$handler->display->display_options['filters']['field_st_section_value']['id'] = 'field_st_section_value';
$handler->display->display_options['filters']['field_st_section_value']['table'] = 'field_data_field_st_section';
$handler->display->display_options['filters']['field_st_section_value']['field'] = 'field_st_section_value';
$handler->display->display_options['filters']['field_st_section_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_st_section_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_st_section_value']['expose']['operator_id'] = 'field_st_section_value_op';
$handler->display->display_options['filters']['field_st_section_value']['expose']['label'] = 'Section';
$handler->display->display_options['filters']['field_st_section_value']['expose']['use_operator'] = 1;
$handler->display->display_options['filters']['field_st_section_value']['expose']['operator'] = 'field_st_section_value_op';
$handler->display->display_options['filters']['field_st_section_value']['expose']['identifier'] = 'field_st_section_value';
$handler->display->display_options['filters']['field_st_section_value']['expose']['required'] = 0;
$handler->display->display_options['filters']['field_st_section_value']['expose']['multiple'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'datatel-students';
$views[$view->name] = $view;