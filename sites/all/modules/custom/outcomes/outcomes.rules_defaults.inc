<?php

/**
 * @file
 * outcomes.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function outcomes_default_rules_configuration() {
  $items = array();
  $items['rules_mark_as_reviewed'] = entity_import('rules_config', '{ "rules_mark_as_reviewed" : {
      "LABEL" : "Mark as reviewed",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "vbo_node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "vbo-node" ],
            "type" : { "value" : { "outcome" : "outcome" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "vbo-node:field-reviewed" ], "value" : "1" } }
      ]
    }
  }');
  return $items;
}
