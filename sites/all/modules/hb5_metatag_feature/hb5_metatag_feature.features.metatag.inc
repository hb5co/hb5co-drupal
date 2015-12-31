<?php
/**
 * @file
 * hb5_metatag_feature.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function hb5_metatag_feature_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'hb5 is a company committed to starting products and services based around our obsessions with creativity, productivity, and fanatical customer service. Key tenets for all of our endeavors include improving physical, emotional, spiritual, and financial well being of all involved. We are proudly based in beautiful Historic Downtown Concord, NC.',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rating' => array(
        'value' => 'safe for kids',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'generator' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '35.409528;-80.580646',
      ),
      'geo.placename' => array(
        'value' => 'hb5 cowork',
      ),
      'geo.region' => array(
        'value' => 'US',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'shortcut icon' => array(
        'value' => '/sites/all/themes/hb5co/favicon.ico',
      ),
      'icon_any' => array(
        'value' => '',
      ),
      'icon_16x16' => array(
        'value' => '',
      ),
      'icon_32x32' => array(
        'value' => '',
      ),
      'icon_96x96' => array(
        'value' => '',
      ),
      'icon_192x192' => array(
        'value' => '',
      ),
      'apple-touch-icon' => array(
        'value' => '',
      ),
      'apple-touch-icon_72x72' => array(
        'value' => '',
      ),
      'apple-touch-icon_76x76' => array(
        'value' => '',
      ),
      'apple-touch-icon_114x114' => array(
        'value' => '',
      ),
      'apple-touch-icon_120x120' => array(
        'value' => '',
      ),
      'apple-touch-icon_144x144' => array(
        'value' => '',
      ),
      'apple-touch-icon_152x152' => array(
        'value' => '',
      ),
      'apple-touch-icon_180x180' => array(
        'value' => '',
      ),
      'apple-touch-icon-precomposed' => array(
        'value' => '',
      ),
      'apple-touch-icon-precomposed_72x72' => array(
        'value' => '',
      ),
      'apple-touch-icon-precomposed_76x76' => array(
        'value' => '',
      ),
      'apple-touch-icon-precomposed_114x114' => array(
        'value' => '',
      ),
      'apple-touch-icon-precomposed_120x120' => array(
        'value' => '',
      ),
      'apple-touch-icon-precomposed_144x144' => array(
        'value' => '',
      ),
      'apple-touch-icon-precomposed_152x152' => array(
        'value' => '',
      ),
      'apple-touch-icon-precomposed_180x180' => array(
        'value' => '',
      ),
      'itemtype' => array(
        'value' => 'LocalBusiness',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'itemprop:description' => array(
        'value' => '',
      ),
      'itemprop:image' => array(
        'value' => '',
      ),
      'theme-color' => array(
        'value' => '',
      ),
      'MobileOptimized' => array(
        'value' => '',
      ),
      'HandheldFriendly' => array(
        'value' => 'true',
      ),
      'viewport' => array(
        'value' => '',
      ),
      'cleartype' => array(
        'value' => '',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:determiner' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => '',
      ),
      'og:updated_time' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '',
      ),
      'og:image:url' => array(
        'value' => '/sites/default/files/cover.jpg',
      ),
      'og:image:secure_url' => array(
        'value' => '',
      ),
      'og:image:type' => array(
        'value' => '',
      ),
      'og:image:width' => array(
        'value' => '',
      ),
      'og:image:height' => array(
        'value' => '',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street_address' => array(
        'value' => '42 Union Street South',
      ),
      'og:locality' => array(
        'value' => 'Concord',
      ),
      'og:region' => array(
        'value' => 'NC',
      ),
      'og:postal_code' => array(
        'value' => 28025,
      ),
      'og:country_name' => array(
        'value' => 'United States',
      ),
      'og:email' => array(
        'value' => 'cowork@hb5.co',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:locale' => array(
        'value' => 'en_US',
      ),
      'og:locale:alternate' => array(
        'value' => '',
      ),
      'article:author' => array(
        'value' => 'https://www.facebook.com/hb5cowork',
      ),
      'article:publisher' => array(
        'value' => '',
      ),
      'article:section' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'article:published_time' => array(
        'value' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
      ),
      'profile:username' => array(
        'value' => '',
      ),
      'profile:gender' => array(
        'value' => '',
      ),
      'og:audio' => array(
        'value' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
      ),
      'book:author' => array(
        'value' => '',
      ),
      'book:isbn' => array(
        'value' => '',
      ),
      'book:release_date' => array(
        'value' => '',
      ),
      'book:tag' => array(
        'value' => '',
      ),
      'og:video' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'video:actor' => array(
        'value' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
      ),
      'video:director' => array(
        'value' => '',
      ),
      'video:writer' => array(
        'value' => '',
      ),
      'video:duration' => array(
        'value' => '',
      ),
      'video:release_date' => array(
        'value' => '',
      ),
      'video:tag' => array(
        'value' => '',
      ),
      'video:series' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:site' => array(
        'value' => '@hb5cowork',
      ),
      'twitter:site:id' => array(
        'value' => '',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
      ),
      'twitter:description' => array(
        'value' => '',
      ),
      'twitter:image:src' => array(
        'value' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
      'google-site-verification' => array(
        'value' => '',
      ),
      'p:domain_verify' => array(
        'value' => '',
      ),
      'msvalidate.01' => array(
        'value' => '',
      ),
      'yandex-verification' => array(
        'value' => '',
      ),
    ),
  );

  return $config;
}
