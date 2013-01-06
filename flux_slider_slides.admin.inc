<?php
/**
 * @file
 * Generate configuration form and save settings.
 */

/**
 * Configuration form for slider settings.
 */
function flux_slider_slide_configuration_form($form, &$form_state) {
  // Get the path to the module.
  $path = drupal_get_path('module', 'flux_slider');
  // Attach the JS and CSS to the form.
  $form['#attached'] = array(
    'css' => array(
      'type' => 'file',
      'data' => $path . '/css/form_theme.css',
    ),
  );

  $form['slider_imgs'] = array(
    '#type' => 'fieldset',
    '#title' => t('Images in use for slider'),
    '#description' => t('Currently this module only has support for 4 images to be contained within the slider element.'),
    '#weight' => 1,
    '#collapsible' => TRUE,
  );

  $form['slider_imgs']['slider_imgs_first'] = array(
    '#type' => 'fieldset',
    '#title' => t('First Image'),
    '#weight' => 2,
    '#collapsible' => TRUE,
  );

  // First image field.
  $form['slider_imgs']['slider_imgs_first']['first_img'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('first_img', $path . '/images/slider-img-1.jpg'),
    '#title' => t('First image path'),
    '#size' => 60,
    '#weight' => 3,
  );
  // First caption field.
  $form['slider_imgs']['slider_imgs_first']['first_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('first_capt', 'This is the first caption'),
    '#title' => t('First caption'),
    '#size' => 40,
    '#weight' => 4,
  );

  $form['slider_imgs']['slider_imgs_second'] = array(
    '#type' => 'fieldset',
    '#title' => t('second Image'),
    '#weight' => 5,
    '#collapsible' => TRUE,
  );
  // Second image field.
  $form['slider_imgs']['slider_imgs_second']['second_img'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('second_img', $path . '/images/slider-img-2.jpg'),
    '#title' => t('Second image path'),
    '#size' => 60,
    '#weight' => 6,
  );
  // Second caption field.
  $form['slider_imgs']['slider_imgs_second']['second_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('second_capt', 'This is the second caption'),
    '#title' => t('Second caption'),
    '#size' => 40,
    '#weight' => 7,
  );

  $form['slider_imgs']['slider_imgs_third'] = array(
    '#type' => 'fieldset',
    '#title' => t('Third Image'),
    '#weight' => 8,
    '#collapsible' => TRUE,
  );
  // Third image field.
  $form['slider_imgs']['slider_imgs_third']['third_img'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('third_img', $path . '/images/slider-img-3.jpg'),
    '#title' => t('Third image path'),
    '#size' => 60,
    '#weight' => 9,
  );
  // Third caption field.
  $form['slider_imgs']['slider_imgs_third']['third_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('third_capt', 'This is the third caption'),
    '#title' => t('Third caption'),
    '#size' => 40,
    '#weight' => 10,
  );

  $form['slider_imgs']['slider_imgs_fourth'] = array(
    '#type' => 'fieldset',
    '#title' => t('Fourth Image'),
    '#weight' => 11,
    '#collapsible' => TRUE,
  );
  // Fourth image field.
  $form['slider_imgs']['slider_imgs_fourth']['fourth_img'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('fourth_img', $path . '/images/slider-img-4.jpg'),
    '#title' => t('Fourth image path'),
    '#size' => 60,
    '#weight' => 12,
  );
  // Fourth caption field.
  $form['slider_imgs']['slider_imgs_fourth']['fourth_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('fourth_capt', 'This is the fourth caption'),
    '#title' => t('Fourth caption'),
    '#size' => 40,
    '#weight' => 13,
  );
  return system_settings_form($form);
}