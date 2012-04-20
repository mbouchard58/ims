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
