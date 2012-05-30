<?php
$view = new view;
$view->name = 'organizations';
$view->description = 'Show a list of all organizations';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Organizations';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Organizations';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
$handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '15';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_org_email' => 'field_org_email',
  'field_org_phone' => 'field_org_phone',
  'field_www' => 'field_www',
  'field_org_type' => 'field_org_type',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_org_email' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_org_phone' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_www' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_org_type' => array(
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
/* Header: Adding organization link code */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Adding organization link code';
$handler->display->display_options['header']['area']['label'] = 'Add Organizations';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<?php
if (user_access(\'create organization content\')) {
  $display_text = "+ Add Organization";
  $path = "node/add/org-profile";
  print l($display_text, $path);
}
?>';
$handler->display->display_options['header']['area']['format'] = 'php_code';
$handler->display->display_options['header']['area']['tokenize'] = 0;
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Name';
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
/* Field: Content: E-Mail Domain */
$handler->display->display_options['fields']['field_org_email']['id'] = 'field_org_email';
$handler->display->display_options['fields']['field_org_email']['table'] = 'field_data_field_org_email';
$handler->display->display_options['fields']['field_org_email']['field'] = 'field_org_email';
$handler->display->display_options['fields']['field_org_email']['label'] = 'EMail';
$handler->display->display_options['fields']['field_org_email']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_org_email']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_org_email']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_org_email']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_org_email']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_org_email']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_org_email']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_org_email']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_org_email']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_org_email']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_org_email']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_org_email']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_org_email']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_org_email']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_org_email']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_org_email']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_org_email']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_org_email']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_org_email']['field_api_classes'] = 0;
/* Field: Content: Telephone */
$handler->display->display_options['fields']['field_org_phone']['id'] = 'field_org_phone';
$handler->display->display_options['fields']['field_org_phone']['table'] = 'field_data_field_org_phone';
$handler->display->display_options['fields']['field_org_phone']['field'] = 'field_org_phone';
$handler->display->display_options['fields']['field_org_phone']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_org_phone']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_org_phone']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_org_phone']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_org_phone']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_org_phone']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_org_phone']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_org_phone']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_org_phone']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_org_phone']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_org_phone']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_org_phone']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_org_phone']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_org_phone']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_org_phone']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_org_phone']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_org_phone']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_org_phone']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_org_phone']['field_api_classes'] = 0;
/* Field: Content: Type */
$handler->display->display_options['fields']['field_org_type']['id'] = 'field_org_type';
$handler->display->display_options['fields']['field_org_type']['table'] = 'field_data_field_org_type';
$handler->display->display_options['fields']['field_org_type']['field'] = 'field_org_type';
$handler->display->display_options['fields']['field_org_type']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_org_type']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_org_type']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_org_type']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_org_type']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_org_type']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_org_type']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_org_type']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_org_type']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_org_type']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_org_type']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_org_type']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_org_type']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_org_type']['element_label_colon'] = 0;
$handler->display->display_options['fields']['field_org_type']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_org_type']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_org_type']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_org_type']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_org_type']['field_api_classes'] = 0;
/* Field: Edit link */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'Edit link';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'edit';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit';
$handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
$handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
$handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
$handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
/* Field: Delete link */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete link';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete';
$handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/delete';
$handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
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
  'organization' => 'organization',
);
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['required'] = 0;
$handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
/* Filter criterion: Content: Type (field_org_type) */
$handler->display->display_options['filters']['field_org_type_tid']['id'] = 'field_org_type_tid';
$handler->display->display_options['filters']['field_org_type_tid']['table'] = 'field_data_field_org_type';
$handler->display->display_options['filters']['field_org_type_tid']['field'] = 'field_org_type_tid';
$handler->display->display_options['filters']['field_org_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_org_type_tid']['expose']['operator_id'] = 'field_org_type_tid_op';
$handler->display->display_options['filters']['field_org_type_tid']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['field_org_type_tid']['expose']['operator'] = 'field_org_type_tid_op';
$handler->display->display_options['filters']['field_org_type_tid']['expose']['identifier'] = 'field_org_type_tid';
$handler->display->display_options['filters']['field_org_type_tid']['expose']['multiple'] = 1;
$handler->display->display_options['filters']['field_org_type_tid']['expose']['reduce'] = 0;
$handler->display->display_options['filters']['field_org_type_tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['field_org_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_org_type_tid']['vocabulary'] = 'org_types';
$handler->display->display_options['filters']['field_org_type_tid']['hierarchy'] = 1;
$handler->display->display_options['filters']['field_org_type_tid']['error_message'] = 1;
/* Filter criterion: Content: Location (field_org_location) */
$handler->display->display_options['filters']['field_org_location_tid']['id'] = 'field_org_location_tid';
$handler->display->display_options['filters']['field_org_location_tid']['table'] = 'field_data_field_org_location';
$handler->display->display_options['filters']['field_org_location_tid']['field'] = 'field_org_location_tid';
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
$handler->display->display_options['filters']['field_org_location_tid']['error_message'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Adding organization link code */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Adding organization link code';
$handler->display->display_options['header']['area']['label'] = 'Add Organizations';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<?php
if (user_access(\'create organization content\')) {
  $display_text = "+ Add Organization";
  $path = "node/add/organization";
  print l($display_text, $path);
}
?>';
$handler->display->display_options['header']['area']['format'] = 'php_code';
$handler->display->display_options['header']['area']['tokenize'] = 0;
$handler->display->display_options['path'] = 'organizations';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Organizations';
$handler->display->display_options['menu']['name'] = 'main-menu';
$views[$view->name] = $view;
