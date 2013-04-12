<?php
/**
 * @file
 * gsb_feature_research_paper_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_research_paper_display_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gsb_feature_research_paper_display_views_api() {
  return array("api" => "3.0");
}
