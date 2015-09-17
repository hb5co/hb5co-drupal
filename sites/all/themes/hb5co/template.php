<?php
/**
 * @file
 * template.php
 */

/**
 * Implements template_preprocess_page() .
 */
function hb5co_preprocess_page(&$variables) {
  // dpm($variables);
}

/**
 * Bootstrap theme wrapper function for the primary menu links.
 */
function hb5co_menu_tree__primary(&$variables) {
  return '<ul class="menu nav navbar-nav secondary">' . $variables['tree'] . '</ul>';
}

/**
 * Bootstrap theme wrapper function for the secondary menu links.
 */
function hb5co_menu_tree__secondary(&$variables) {
  $menu = '<ul class="menu nav navbar-nav secondary">';
  $menu .= '<li role="presentation" class="dropdown">';
  $menu .= '<a class="dropdown-toggle" data-toggle="dropdown" href="#" role="button" aria-haspopup="true" aria-expanded="false">';
  $menu .= '<span class="glyphicon glyphicon-cog"></span>';
  $menu .= '</a>';
  $menu .= '<ul class="dropdown-menu">' . $variables['tree'] . '</ul>';
  $menu .= '</li></ul>';
  return $menu;
}