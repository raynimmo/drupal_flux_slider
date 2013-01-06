********************************************************************
                     D R U P A L    M O D U L E
********************************************************************
Name: Flux Slider
Author: Ray Nimmo <ray at junglecreative dot com>
Drupal: 7
********************************************************************

DESCRIPTION:

Module for integrating the Flux Slider JavaScript library and
controlling its settings through an administration interface.

The Flux Library must be installed at
/sites/all/libraries/flux-slider

To download the Flux Library go to
https://github.com/joelambert/Flux-Slider

Or get it directly from:
http://www.joelambert.co.uk/flux/js/flux.js
or:
http://www.joelambert.co.uk/flux/js/flux.min.js

For further information see http://www.joelambert.co.uk/flux and
http://blog.joelambert.co.uk/2011/05/05/ ...
 ... flux-slider-css3-animation-based-image-transitions/

The module creates a block which can be positioned within the main
blocks configuration page.

Currently only supporting 4 images to be used within the slider
along with 4 captions to appear after/with the transition.

Available transitions:
2D: bars, blinds, blocks, blocks2, concentric, dissolve,
slide, warp, zip
3D: bars3D, blinds3D, cube, tiles3D, turn

Slider control features available through the admin panel are;

    transition type
    transition autoplay
    transition delay
    transition pagination controls display
    transition controls display
    transition captions
    transition width
    transition height

********************************************************************
INSTALLATION:


1. Place the entire Flux Slider directory into your Drupal modules
   directory (normally sites/default/modules).

2. Enable the module by navigating to:

     Admin > Modules

3. If you want anyone besides the administrative user to be able
   to configure the Flux Slider (usually a bad idea), they must be
   given the "administer flux slider" access permission:

     Admin > People > Permissions

   When the module is enabled and the user has the "administer
   flux slider" permission, an "Flux Slider" menu should appear under
   Admin > Structure in the menu system.

********************************************************************

Future plans;
Add user upload for adding/replacing images
Add support for more images to be contained within the slider


********************************************************************