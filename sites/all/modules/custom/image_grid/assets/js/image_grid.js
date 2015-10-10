(function($) {
  Drupal.behaviors.imageGrid = {
    attach: function (context, settings) {
      // Initialize grid rotator.
      $( '#ri-grid' ).gridrotator({
        rows    : 2,
        columns   : 10,
        interval  : 4000,
        step    : 1,
        w320    : {
          rows  : 3,
          columns : 4
        },
        w240    : {
          rows  : 3,
          columns : 4
        },
      });
    }
  };
})(jQuery);
