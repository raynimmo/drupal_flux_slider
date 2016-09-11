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

  // Attach the CSS to the form.
  $form['#attached'] = array(
    'css' => array(
      'type' => 'file',
      'data' => $path . '/css/form_theme.css',
    ),
  );

  // get the captions
  $captions = array();
  $captions = variable_get('flux_slider_captions');

  // get the alt text values
  $alts = array();
  $alts = variable_get('flux_slider_alts');


  $form['slider_imgs'] = array(
    '#type' => 'fieldset',
    '#title' => t('Images in use for slider'),
    '#description' => t('Currently this module only has support for 4 images to be contained within the slider element.'),
    '#weight' => 1,
    '#collapsible' => TRUE,
  );


  $form['slider_imgs']['slider_imgs_first'] = array(
    '#type' => 'fieldset',
    '#title' => t('First image'),
    '#weight' => 2,
    '#collapsible' => TRUE,
  );

  // First image field.
  $form['slider_imgs']['slider_imgs_first']['first_img'] = array(
    '#type' => 'managed_file',
    '#title' => t('First image path'),
    '#description' => t('Set the first carousel image.'),
    '#upload_location' => 'public://flux_slider',
    '#default_value' => variable_get('flux_slider_first_img', '')
  );
  // First caption field.
  $form['slider_imgs']['slider_imgs_first']['first_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => $captions[0],
    '#title' => t('First caption'),
    '#size' => 40,
    '#weight' => 4,
  );
  // First alt text field.
  $form['slider_imgs']['slider_imgs_first']['first_alt'] = array(
    '#type' => 'textfield',
    '#default_value' => $alts[0],
    '#title' => t('Alternative text for the first image'),
    '#size' => 40,
    '#weight' => 5,
  );


  $form['slider_imgs']['slider_imgs_second'] = array(
    '#type' => 'fieldset',
    '#title' => t('second Image'),
    '#weight' => 6,
    '#collapsible' => TRUE,
  );
  // Second image field.
  $form['slider_imgs']['slider_imgs_second']['second_img'] = array(
    '#type' => 'managed_file',
    '#title' => t('Second image path'),
    '#description' => t('Set the second carousel image.'),
    '#upload_location' => 'public://flux_slider',
    '#default_value' => variable_get('flux_slider_second_img', '')
  );
  // Second caption field.
  $form['slider_imgs']['slider_imgs_second']['second_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => $captions[1],
    '#title' => t('Second caption'),
    '#size' => 40,
    '#weight' => 8,
  );
  // Second alt text field.
  $form['slider_imgs']['slider_imgs_second']['second_alt'] = array(
    '#type' => 'textfield',
    '#default_value' => $alts[1],
    '#title' => t('Alternative text for the second image'),
    '#size' => 40,
    '#weight' => 9,
  );





  $form['slider_imgs']['slider_imgs_third'] = array(
    '#type' => 'fieldset',
    '#title' => t('Third image'),
    '#weight' => 8,
    '#collapsible' => TRUE,
  );
  // Third image field.
  $form['slider_imgs']['slider_imgs_third']['third_img'] = array(
    '#type' => 'managed_file',
    '#title' => t('Third image path'),
    '#description' => t('Set the third carousel image.'),
    '#upload_location' => 'public://flux_slider',
    '#default_value' => variable_get('flux_slider_third_img', '')
  );
  // Third caption field.
  $form['slider_imgs']['slider_imgs_third']['third_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => $captions[2],
    '#title' => t('Third caption'),
    '#size' => 40,
    '#weight' => 11,
  );
  // Third alt text field.
  $form['slider_imgs']['slider_imgs_third']['third_alt'] = array(
    '#type' => 'textfield',
    '#default_value' => $alts[2],
    '#title' => t('Alternative text for the third image'),
    '#size' => 40,
    '#weight' => 12,
  );






  $form['slider_imgs']['slider_imgs_fourth'] = array(
    '#type' => 'fieldset',
    '#title' => t('Fourth image'),
    '#weight' => 13,
    '#collapsible' => TRUE,
  );
  // Fourth image field.
  $form['slider_imgs']['slider_imgs_fourth']['fourth_img'] = array(
    '#type' => 'managed_file',
    '#title' => t('Fourth image path'),
    '#description' => t('Set the fourth carousel image.'),
    '#upload_location' => 'public://flux_slider',
    '#default_value' => variable_get('flux_slider_fourth_img', '')
  );

  // Fourth caption field.
  $form['slider_imgs']['slider_imgs_fourth']['fourth_capt'] = array(
    '#type' => 'textfield',
    '#default_value' => $captions[3],
    '#title' => t('Fourth caption'),
    '#size' => 40,
    '#weight' => 15,
  );
  // Fourth alt text field.
  $form['slider_imgs']['slider_imgs_fourth']['fourth_alt'] = array(
    '#type' => 'textfield',
    '#default_value' => $alts[3],
    '#title' => t('Alternative text for the fourth image'),
    '#size' => 40,
    '#weight' => 16,
  );

  // Add custom submit handler to set the file status to permanent
  $form['#submit'][] = 'flux_slider_slide_configuration_form_submit';

  return system_settings_form($form);
}


/*
 * Submit handler for making the file permanent
 */
function flux_slider_slide_configuration_form_submit($form, &$form_state) {

  $form['slider_imgs']['slider_imgs_first']['first_img']['#file']->status = FILE_STATUS_PERMANENT;
  file_save($form['slider_imgs']['slider_imgs_first']['first_img']['#file']);

  $form['slider_imgs']['slider_imgs_second']['second_img']['#file']->status = FILE_STATUS_PERMANENT;
  file_save($form['slider_imgs']['slider_imgs_second']['second_img']['#file']);

  $form['slider_imgs']['slider_imgs_third']['third_img']['#file']->status = FILE_STATUS_PERMANENT;
  file_save($form['slider_imgs']['slider_imgs_third']['third_img']['#file']);

  $form['slider_imgs']['slider_imgs_fourth']['fourth_img']['#file']->status = FILE_STATUS_PERMANENT;
  file_save($form['slider_imgs']['slider_imgs_fourth']['fourth_img']['#file']);
  
}


