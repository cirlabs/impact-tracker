<?php
/**
 * @file
 * base_configuration.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function base_configuration_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 0,
  'title' => 'Home',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a4d3fd24-0ad6-4443-8f81-4f208dae4ee0',
  'type' => 'page',
  'language' => 'und',
  'created' => 1432841754,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2b1c9950-4ba0-4942-b434-111ab950fa62',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<a href="/node/add/outcome" class="home-add-outcome">
  <span class="icon-macro"></span> <span class="icon-meso"></span> <span class="icon-micro"></span> <span class="icon-media"></span>
  <h1>Submit Outcome</h1>
</a>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<a href="/node/add/outcome" class="home-add-outcome">
  <span class="icon-macro"></span> <span class="icon-meso"></span> <span class="icon-micro"></span> <span class="icon-media"></span>
  <h1>Submit Outcome</h1>
</a>',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-28 12:35:54 -0700',
);
  return $nodes;
}
