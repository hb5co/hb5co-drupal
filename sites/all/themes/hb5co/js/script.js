(function($) {
  Drupal.behaviors.hb5coTheme = {
    attach: function (context, settings) {
      // Initialize slotmachine.
      if ($('body').hasClass('front')) {
        $("#hb5-slot-machine").slotMachine({
          active: 1,
          delay: 450,
          auto: 6000,
          direction: 'up'
        });
      }
    }
  };
})(jQuery);
