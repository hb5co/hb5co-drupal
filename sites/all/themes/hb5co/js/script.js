(function($) {
  Drupal.behaviors.hb5coTheme = {
    attach: function (context, settings) {
      // Initialize slotmachine.
      if ($('.slot-machine').length) {
        $("#hb5-slot-machine").slotMachine({
          active: 1,
          delay: 450,
          auto: 6000,
          direction: 'up'
        });
      }

      // Equal heights on cowork features.
      if ($('.cowork-feature').length) {
        $('.cowork-feature').matchHeight();
      }
    }
  };
})(jQuery);
