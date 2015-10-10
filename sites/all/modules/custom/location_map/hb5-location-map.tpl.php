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
<div id="location-text-wrapper">
  <div class="container">
    <div class="location-text-content col-md-5 col-md-offset-7">
      <h2>Stop by and see us!</h2>
      <address>
        <strong>hb5 cowork</strong><br>
        42 Union Street S.<br>
        Concord, NC 28025<br>

        <p>Shoot us an <a href="mailto:cowork@hb5.co">email</a></p>
        <hr />
        <ul class="list-inline social-links">
          <li class="facebook">
            <a rel="nofollow" href="http://facebook.com/hb5cowork">
              <i class="fa fa-facebook-square"></i>
              <span class="social-text">Facebook</span>
            </a>
          </li>
          <li class="instagram">
            <a rel="nofollow" href="http://instagram.com/hb5cowork">
              <i class="fa fa-instagram"></i>
              <span class="social-text">Instagram</span>
            </a>
          </li>
          <li class="twitter">
            <a rel="nofollow" href="http://twitter.com/hb5cowork">
              <i class="fa fa-twitter"></i>
              <span class="social-text">Twitter</span>
            </a>
          </li>
        </ul>
      </address>

      </div>
    </div>
  </div>
</div>
