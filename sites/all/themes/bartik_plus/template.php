<?php

function bartik_plus_links($variables) {
  if (array_key_exists('id', $variables['attributes']) && $variables['attributes']['id'] == 'main-menu-links') {
  	 // AW: changed to point to footer for anon
     global $user;
     $pid = $user->uid == 0 ? 'menu-footer' : variable_get('menu_main_links_source', 'main-menu');
	   $tree = menu_tree($pid);
	   return '<div id="main-menu-links">' . drupal_render($tree) . "</div>";
  }
  return theme_links($variables);
}
/**
 * Process a single grouping within a view.
 * Implements template_preprocess_views_view_grouping in modules/views/theme/theme
 
function bartik_plus_preprocess_views_view_grouping(&$vars) {
  dpm($vars);
}
*/
/*
function bartik_plus_panels_default_style_render_region($display, $region_id, $panes, $settings) {
  $output = '';

  $print_separator = FALSE;
  foreach ($panes as $pane_id => $pane_output) {
    // Add the separator if we've already displayed a pane.
    if ($print_separator) {
      $output .= '';
    }

    $output .= $pane_output;
    // If we displayed a pane, this will become true; if not, it will become
    // false.
    $print_separator = (bool) $pane_output;
  }

  return $output;
}
*/