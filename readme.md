# Impact Tracker

The Impact Tracker is built with Drupal. This repository is not a complete Drupal setup, but it does contain everything you will need to install Drupal and all necessary dependencies.

## Installation Tutorial
[https://www.youtube.com/watch?v=RO_1g8S4zNs](https://www.youtube.com/watch?v=RO_1g8S4zNs)

## Step-by-Step Installation Instructions:
1. Clone or download this repository.
2. Use [Drush](http://docs.drush.org/en/master/install/) to install Drupal and other dependencies by running the command `drush make impact_tracker.make`.
3. Visit the site in a browser and finish [setting up and installing Drupal as normal](https://www.drupal.org/documentation/install/beginners).
4. Use the Impact Tracker installation profile, which will automatically enable required modules and handle most of the site configuration.
5. We use the [Features](https://www.drupal.org/project/features) module to manage most Impact Tracker functionality. The custom features do not always enable properly when the site is installed. Once you have setup the site and logged in, go to Admin > Structure > Features. If either the *Base Configuration* or *Outcomes* features are marked as *Overridden*, you'll need to re-enable them. Click on the *Overridden* link for the feature, check off any components marked as *Overridden*, and click the *Revert Components* button at the bottom of the page.
