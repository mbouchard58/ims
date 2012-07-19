<?php
$view = new view;
$view->name = 'bulk_semester';
$view->description = 'View to list active semester; needed in Rules';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Bulk Semester';
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
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
/* Field: Bulk operations: Taxonomy term */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
  'rules_component::rules_deactivate_semesters' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::system_message_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'url' => '',
    ),
  ),
  'action::system_goto_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::system_send_email_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::pathauto_taxonomy_term_update_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'semesters' => 'semesters',
);
/* Filter criterion: Taxonomy term: Active (field_tax_sem_active) */
$handler->display->display_options['filters']['field_tax_sem_active_value']['id'] = 'field_tax_sem_active_value';
$handler->display->display_options['filters']['field_tax_sem_active_value']['table'] = 'field_data_field_tax_sem_active';
$handler->display->display_options['filters']['field_tax_sem_active_value']['field'] = 'field_tax_sem_active_value';
$handler->display->display_options['filters']['field_tax_sem_active_value']['value'] = array(
  1 => '1',
);
$views[$view->name] = $view;
