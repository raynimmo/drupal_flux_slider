/**
 * @file.
 * Javascript functions for Flux Slider module.
 */

/**
 * USAGE: see https://github.com/joelambert/Flux-Slider.
 * transition options.
 *  2D options: bars, blinds, blocks, blocks2, concentric, dissolve, slide, warp, zip.
 *  3D options: bars3d, blinds3d, cube, tiles3d, turn.
 */

(function ($) {
   Drupal.behaviors.fluxSlider = {
     attach: function (context, settings) {

       // Get the settings.
       var flux_autoplay = Drupal.settings.flux_slider.flux_autoplay;
       var flux_autoplay_bool = (flux_autoplay == 'on' ? 'TRUE' : 'FALSE');

       var flux_transition = Drupal.settings.flux_slider.flux_transition;

       var flux_delay = Drupal.settings.flux_slider.flux_delay;

       var flux_pagination = Drupal.settings.flux_slider.flux_pagination;
       var flux_pagination_bool = (flux_pagination == 'show' ? 'TRUE' : 'FALSE');
       console.log('pagination:'+flux_pagination+' > '+flux_pagination_bool);

       var flux_controls = Drupal.settings.flux_slider.flux_controls;
       var flux_controls_bool = (flux_controls == 'show' ? 'TRUE' : 'FALSE');
       console.log('controls:'+flux_controls+' > '+flux_controls_bool);

       var flux_captions = Drupal.settings.flux_slider.flux_captions;
       var flux_captions_bool = (flux_captions == 'show' ? 'TRUE' : 'FALSE');
       console.log('captions:'+flux_captions+' > '+flux_captions_bool);

       var flux_width = Drupal.settings.flux_slider.flux_width;
       var flux_height = Drupal.settings.flux_slider.flux_height;

       // Initialise the slider.
        var myFlux = new flux.slider('#slider', {
          autoplay: flux_autoplay_bool,
          transitions: [flux_transition],
          delay: flux_delay,
          pagination: 'FALSE',
          controls: 'FALSE',
          captions: 'FALSE',
          width: flux_width,
          height: flux_height,
        });
       }
     }
 }(jQuery));
