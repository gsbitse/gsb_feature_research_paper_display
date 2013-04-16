<?php
/**
 * @file
 * gsb_feature_research_paper_display.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_research_paper_display_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_gsb_format_year';
  $strongarm->value = 'Y';
  $export['date_format_gsb_format_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_years';
  $strongarm->value = 'Y';
  $export['date_format_years'] = $strongarm;

  return $export;
}
