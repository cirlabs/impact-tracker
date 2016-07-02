<?php

# Change the default meta content-type tag to the shorter HTML5 version
function pluto_html_head_alter(&$head_elements) {
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );
}

# Changes the search form to use the HTML5 "search" input attribute
function pluto_preprocess_search_block_form(&$vars) {
  $vars['search_form'] = str_replace('type="text"', 'type="search"', $vars['search_form']);
}


function pluto_preprocess_html(&$vars) {

  # Force ie to use latest rendering engine, or Chrome Frame
  $meta_ie_render_engine = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' =>  'IE=edge,chrome=1',
      'http-equiv' => 'X-UA-Compatible',
    )
  );
  drupal_add_html_head($meta_ie_render_engine, 'meta_ie_render_engine');

  # mobile viewport
  $meta_viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' =>  'width=device-width',
      'name' => 'viewport',
    )
  );
  drupal_add_html_head($meta_viewport, 'meta_viewport');

}


# Wrap menus in nav elements
function pluto_menu_tree($variables) {
  return '<nav class="menu"><ul>' . $variables['tree'] . '</ul></nav>';
}


# change csv download icon
function pluto_views_data_export_feed_icon__csv($variables) {
  extract($variables, EXTR_SKIP);
  $url_options = array('html' => TRUE);
  if ($query) {
    $url_options['query'] = $query;
  }
  $url_options['attributes']['class'] = 'button';
  return l('Download CSV Export', $url, $url_options);
}

# change excel download icon
function pluto_views_data_export_feed_icon__xls($variables) {
  extract($variables, EXTR_SKIP);
  $url_options = array('html' => TRUE);
  if ($query) {
    $url_options['query'] = $query;
  }
  $url_options['attributes']['class'] = 'button';
  return l('Download Excel Export', $url, $url_options);
}

?>
