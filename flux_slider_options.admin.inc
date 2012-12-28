<?php
/**
 * @file.
 * Generate configuration form and save settings.
 *
 * Available transitions.
 * 2D: bars, blinds, blocks, blocks2, concentric, dissolve, slide, warp, zip.
 * 3D: bars3d, blinds3d, cube, tiles3d, turn.
 */

/**
 * Configuration form for slider options.
 */
function flux_slider_option_configuration_form($form, &$form_state) {

  // Get the path to the module.
  $path = drupal_get_path('module', 'flux_slider');
  // Attach the JS and CSS to the form.
  $form['#attached'] = array(
    'css' => array(
      'type' => 'file',
      'data' => $path . '/css/form_theme.css',
    ),
    'js' => array(
      'type' => 'file',
      'data' => $path . '/js/form_theme.js',
    ),
  );

  // Set up fieldset for radio buttons.
  $form['trans_radios'] = array(
    '#type' => 'fieldset',
    '#title' => t('Transitions'),
    '#weight' => 4,
    '#collapsible' => TRUE,
  );

  // Set up radio buttons for 2D transition effect.
  $form['trans_radios']['trans_type'] = array(
    '#type' => 'radios',
    '#default_value' => variable_get('trans_type', 'bars'),
    '#options' => drupal_map_assoc(array(
      t('bars'),
      t('blinds'),
      t('blocks'),
      t('concentric'),
      t('dissolve'),
      t('slide'),
      t('warp'),
      t('zip'),
      t('bars3d <span class="small">Limited browser support</span>'),
      t('blinds3d <span class="small">Limited browser support</span'),
      t('cube <span class="small">Limited browser support</span'),
      t('tiles3d <span class="small">Limited browser support</span'),
      t('turn <span class="small">Limited browser support</span'),
    )),
    '#title' => t('Select a transition to perform between slides.'),
  );

  // Set up fieldset for optional settings.
  $form['trans_opts'] = array(
    '#type' => 'fieldset',
    '#title' => t('Options'),
    '#weight' => 5,
    '#collapsible' => TRUE,
  );

  // Form element for autoplay selection.
  $form['trans_opts']['trans_autoplay'] = array(
    '#type' => 'radios',
    '#default_value' => variable_get('trans_autoplay', 'on'),
    '#options' => drupal_map_assoc(array(
      t('On'),
      t('Off'),
    )),
    '#title' => t('Autoplay Slider'),
  );

  // Form element for delay setting.
  $form['trans_opts']['trans_delay'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('trans_delay', 6000),
    '#title' => t('Delay between transitions'),
    '#size' => 6,
    '#field_suffix' => t('milliseconds'),
  );

  // Form element for pagination display.
  $form['trans_opts']['trans_pagination'] = array(
    '#type' => 'radios',
    '#default_value' => variable_get('trans_pagination', 'hide'),
    '#options' => drupal_map_assoc(array(
      t('show'),
      t('hide'),
    )
    ),
    '#title' => t('Pagination Controls'),
  );

  // Form element for display of controls.
  $form['trans_opts']['trans_controls'] = array(
    '#type' => 'radios',
    '#default_value' => variable_get('trans_controls', 'hide'),
    '#options' => drupal_map_assoc(
      array(
        t('show'),
        t('hide'),
      )
    ),
    '#title' => t('Slide Controls'),
  );

  // Form element for display of captions.
  $form['trans_opts']['trans_captions'] = array(
    '#type' => 'radios',
    '#default_value' => variable_get('trans_captions', 'hide'),
    '#options' => drupal_map_assoc(
      array(
        t('show'),
        t('hide'),
      )
    ),
    '#title' => t('Slide Captions'),
  );

  // Form element to set output width.
  $form['trans_opts']['trans_width'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('trans_width', 960),
    '#title' => t('Width of output container'),
    '#size' => 6,
    '#field_suffix' => t('pixels'),
  );

  // Form element to set output height.
  $form['trans_opts']['trans_height'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('trans_height', 300),
    '#title' => t('height of output container'),
    '#size' => 6,
    '#field_suffix' => t('pixels'),
  );
  return system_settings_form($form);
}
