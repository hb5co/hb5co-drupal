<?php

$module_path = drupal_get_path('module', 'location_map');
drupal_add_css($module_path . '/assets/css/location_map.css');

// Add required js files for gmap.
drupal_add_js('https://maps.googleapis.com/maps/api/js?sensor=true', 'external');
drupal_add_js($module_path . '/assets/js/location_map.js');

// Pass vars to js.
drupal_add_js(array('location_map' => array('module_path' => $module_path)), array('type' => 'setting'));
?>

<div id="hb5-location-map"></div>
<div id="location-text" class="container">
  <div class="location-text-content col-md-5 col-md-offset-7">
    <div class="text-center location-icon-large">
      <span class="glyphicon glyphicon-flag"></span>
    </div>
    <h2>Stop by and see us!</h2>
    <address>
      <strong>hb5 cowork</strong><br>
      42 Union Street S.<br>
      Concord, NC 28025<br>

      <p>Shoot us an <a href="mailto:cowork@hb5.co">email</a></p>
    </address>

    </div>
  </div>
</div>
