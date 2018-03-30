<?php
/**
 * @file
 * base_configuration.features.translations_es.inc
 */

/**
 * Implements hook_translations_es_defaults().
 */
function base_configuration_translations_es_defaults() {
  $translations = array();
  $translatables = array();
  $translations['es:default']['7e2708aeb65763c54052f57ed1a1ec1d'] = array(
    'source' => 'Attachments',
    'context' => '',
    'location' => '/es',
    'translation' => 'Adjunto',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Attachments', array(), array('context' => ''));
  $translations['es:field']['44617e55adc39eded37d2c96eb4aa992'] = array(
    'source' => 'Attachments',
    'context' => 'field_attachments:outcome:label',
    'location' => 'field:field_attachments:outcome:label',
    'translation' => 'Adjunto',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Attachments', array(), array('context' => 'field_attachments:outcome:label'));
  $translations['es:field']['56c7972e9994b3b4fa0fb30d173a7fa8'] = array(
    'source' => 'Publication',
    'context' => 'field_publication:field_publications:label',
    'location' => 'field:field_publication:field_publications:label',
    'translation' => 'Publicación',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Publication', array(), array('context' => 'field_publication:field_publications:label'));
  $translations['es:field']['961551bc1026eb2d42e24a39d03508e5'] = array(
    'source' => 'Date of Impact',
    'context' => 'field_date:outcome:label',
    'location' => 'field:field_date:outcome:label',
    'translation' => 'Fecha',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Date of Impact', array(), array('context' => 'field_date:outcome:label'));
  $translations['es:field']['992644d01d41f09d5c4ad04f23105ba5'] = array(
    'source' => 'Media',
    'context' => 'field_media:outcome:label',
    'location' => 'field:field_media:outcome:label',
    'translation' => 'Citas en medios',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Media', array(), array('context' => 'field_media:outcome:label'));
  $translations['es:field']['d18312603deeb947df6b27c3dbc8df17'] = array(
    'source' => 'Topic',
    'context' => 'field_topics:outcome:label',
    'location' => 'field:field_topics:outcome:label',
    'translation' => 'Temas',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Topic', array(), array('context' => 'field_topics:outcome:label'));
  $translations['es:field']['ddb567987e2408249d97d68114c38729'] = array(
    'source' => 'Publications',
    'context' => 'field_publications:outcome:label',
    'location' => 'field:field_publications:outcome:label',
    'translation' => 'Publicaciones',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Publications', array(), array('context' => 'field_publications:outcome:label'));
  $translations['es:menu']['0963f09636daeb24316262d93f42e2a6'] = array(
    'source' => 'Logout',
    'context' => 'item:210:title',
    'location' => 'menu:item:210:title',
    'translation' => 'Cerrar Sesión',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Logout', array(), array('context' => 'item:210:title'));
  $translations['es:menu']['bbc68c36911460bac0634014fadff5e8'] = array(
    'source' => 'Log out',
    'context' => 'item:14:title',
    'location' => 'menu:item:14:title',
    'translation' => 'Cerrar sesión',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Log out', array(), array('context' => 'item:14:title'));
  $translations['es:menu']['cc81b750da0bb0d68e4196e15e22e9eb'] = array(
    'source' => 'Account',
    'context' => 'item:211:title',
    'location' => 'menu:item:211:title',
    'translation' => 'Cuenta',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Account', array(), array('context' => 'item:211:title'));
  $translations['es:menu']['f8c324d20ae87a47500c488e0b157abc'] = array(
    'source' => 'Login',
    'context' => 'item:209:title',
    'location' => 'menu:item:209:title',
    'translation' => 'Iniciar sesión',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Login', array(), array('context' => 'item:209:title'));
  $translations['es:node']['249ec7a4d3ccd812193f5436dafaf610'] = array(
    'source' => 'Description',
    'context' => 'type:outcome:title_label',
    'location' => 'node:type:outcome:title_label',
    'translation' => 'Descripción',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Description', array(), array('context' => 'type:outcome:title_label'));
  $translations['es:taxonomy']['3d04974defb549c1b5b5ad025b7b8ee5'] = array(
    'source' => 'Media',
    'context' => 'vocabulary:2:name',
    'location' => 'taxonomy:vocabulary:2:name',
    'translation' => 'Citas en medios',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Media', array(), array('context' => 'vocabulary:2:name'));
  $translations['es:views']['103e6b28ea5b365729ae89dc4d393e4e'] = array(
    'source' => 'Attachments',
    'context' => 'impact_log:default:field:field_data_field_attachments:field_attachments:label',
    'location' => 'views:impact_log:default:field:field_data_field_attachments:field_attachments:label',
    'translation' => 'Adjunto',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Attachments', array(), array('context' => 'impact_log:default:field:field_data_field_attachments:field_attachments:label'));
  $translations['es:views']['201335231cdc42e72bd4004ce455c0bf'] = array(
    'source' => 'Media',
    'context' => 'impact_log:page_2:field:field_data_field_media:field_media:label',
    'location' => 'views:impact_log:page_2:field:field_data_field_media:field_media:label',
    'translation' => 'Citas en medios',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Media', array(), array('context' => 'impact_log:page_2:field:field_data_field_media:field_media:label'));
  $translations['es:views']['2aa9be00dbec60e7b0a6a44c13daf2dd'] = array(
    'source' => 'Date Range',
    'context' => 'impact_log:default:filter:field_data_field_date:field_date_value:expose:label',
    'location' => 'views:impact_log:default:filter:field_data_field_date:field_date_value:expose:label',
    'translation' => 'Rango de fechas',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Date Range', array(), array('context' => 'impact_log:default:filter:field_data_field_date:field_date_value:expose:label'));
  $translations['es:views']['45286bd79ec4421c1daaf802b9eb61e5'] = array(
    'source' => 'Media',
    'context' => 'impact_log:default:filter:field_data_field_media:field_media_tid:expose:label',
    'location' => 'views:impact_log:default:filter:field_data_field_media:field_media_tid:expose:label',
    'translation' => 'Citas en medios',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Media', array(), array('context' => 'impact_log:default:filter:field_data_field_media:field_media_tid:expose:label'));
  $translations['es:views']['5e8391bd059d308674981c5759ec1def'] = array(
    'source' => 'Description',
    'context' => 'impact_log:page_2:field:node:title:label',
    'location' => 'views:impact_log:page_2:field:node:title:label',
    'translation' => 'Descripción',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Description', array(), array('context' => 'impact_log:page_2:field:node:title:label'));
  $translations['es:views']['706bcdd47b898bb6c462735755772eaa'] = array(
    'source' => 'Media',
    'context' => 'impact_log:default:field:field_data_field_media:field_media:label',
    'location' => 'views:impact_log:default:field:field_data_field_media:field_media:label',
    'translation' => 'Citas en medios',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Media', array(), array('context' => 'impact_log:default:field:field_data_field_media:field_media:label'));
  $translations['es:views']['91b6527b44c65c12db409b1291ccae9e'] = array(
    'source' => 'Search Descriptions:',
    'context' => 'impact_log:default:filter:node:title:expose:label',
    'location' => 'views:impact_log:default:filter:node:title:expose:label',
    'translation' => 'Descripción',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Search Descriptions:', array(), array('context' => 'impact_log:default:filter:node:title:expose:label'));
  $translations['es:views']['9d6a33e57e13d9d26c10cd3c6d0f060f'] = array(
    'source' => 'Description',
    'context' => 'impact_log:default:field:node:title:label',
    'location' => 'views:impact_log:default:field:node:title:label',
    'translation' => 'Descripción',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Description', array(), array('context' => 'impact_log:default:field:node:title:label'));
  $translations['es:views']['d662172b9e3b1a0d96f5ac9337eb9d79'] = array(
    'source' => 'Attachments',
    'context' => 'impact_log:page_2:field:field_data_field_attachments:field_attachments:label',
    'location' => 'views:impact_log:page_2:field:field_data_field_attachments:field_attachments:label',
    'translation' => 'Adjunto',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Attachments', array(), array('context' => 'impact_log:page_2:field:field_data_field_attachments:field_attachments:label'));
  return $translations;
}
