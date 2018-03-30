<?php
/**
 * @file
 * translations.features.translations_fr.inc
 */

/**
 * Implements hook_translations_fr_defaults().
 */
function translations_translations_fr_defaults() {
  $translations = array();
  $translatables = array();
  $translations['fr:menu']['cc81b750da0bb0d68e4196e15e22e9eb'] = array(
    'source' => 'Account',
    'context' => 'item:211:title',
    'location' => 'menu:item:211:title',
    'translation' => 'Utilisateur',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Account', array(), array('context' => 'item:211:title'));
  $translations['fr:menu']['f8c324d20ae87a47500c488e0b157abc'] = array(
    'source' => 'Login',
    'context' => 'item:209:title',
    'location' => 'menu:item:209:title',
    'translation' => 'Identifiant',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Login', array(), array('context' => 'item:209:title'));
  return $translations;
}
