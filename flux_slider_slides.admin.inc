<?php
/**
 * @file.
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
    'js' => array(
      'type' => 'file',
      'data' => $path . '/js/form_theme.js',
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
    '#default_value' => variable_get('first_img', $path . '/images/'),
    '#title' => t('First image path'),
    '#size' => 60,
    '#weight' => 3,
  );
  // First caption field.
  $form['slider_imgs']['slider_imgs_first']['first_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('first_capt', 'first'),
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
    '#default_value' => variable_get('second_img', $path . '/images/'),
    '#title' => t('Second image path'),
    '#size' => 60,
    '#weight' => 6,
  );
  // Second caption field.
  $form['slider_imgs']['slider_imgs_second']['second_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('second_capt', 'second'),
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
    '#default_value' => variable_get('third_img', $path . '/images/'),
    '#title' => t('Third image path'),
    '#size' => 60,
    '#weight' => 9,
  );
  // Third caption field.
  $form['slider_imgs']['slider_imgs_third']['third_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('third_capt', 'third'),
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
    '#default_value' => variable_get('fourth_img', $path . '/images/'),
    '#title' => t('Fourth image path'),
    '#size' => 60,
    '#weight' => 12,
  );
  // Fourth caption field.
  $form['slider_imgs']['slider_imgs_fourth']['fourth_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('fourth_capt', 'fourth'),
    '#title' => t('Fourth caption'),
    '#size' => 40,
    '#weight' => 13,
  );

  // Upload images.
  $form['upload'] = array(
    '#type' => 'file',
    '#title' => t('Upload a new image for use in the slider'),
    '#weight' => 14,
  );
  return system_settings_form($form);
}
