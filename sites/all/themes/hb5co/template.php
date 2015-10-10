<?php
/**
 * @file
 * template.php
 */

/**
 * Implements template_preprocess_html().
 */
function hb5co_preprocess_html(&$vars) {
  // Add Modernizr script earlier
  $modernizr = path_to_theme() . '/js/modernizr.js';
  drupal_add_js($modernizr, array('group'=> JS_LIBRARY, 'weight' => -1));

  // Add font-awesome icon font to theme.
  drupal_add_css("http://netdna.bootstrapcdn.com/font-awesome/4.4.0/css/font-awesome.css", 'external');
}

/**
 * Implements template_preprocess_page() .
 */
function hb5co_preprocess_page(&$variables) {
  // Add slotmachine script to front page.
  if ($variables['is_front']) {
    drupal_add_js(path_to_theme() . '/js/jquery.slotmachine.js');
  }
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

/**
 * Implements hook_form_alter().
 *
 * Alter mailchimp form to appear on one line.
 */
function hb5co_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'mailchimp_signup_subscribe_block_stay_updated_form') {
    // Adding a placeholder to the form field.
    $form['mergevars']['EMAIL']['#attributes']['placeholder'] = 'Email Address';
    $form['mergevars']['EMAIL']['#description'] = 'This info stays between you and me, k?';

    // Adjusting form element widths.
    $str = $form['mergevars']['#prefix'];
    $str = str_replace('class="mailchimp-newsletter-mergefields', 'class="mailchimp-newsletter-mergefields col-xs-8', $str);
    $form['mergevars']['#prefix'] = $str;

    $form['actions']['submit']['#attributes']['class'][] = 'col-xs-4';
    $form['actions']['submit']['#attributes']['class'][] = 'btn-warning';
  }
}
