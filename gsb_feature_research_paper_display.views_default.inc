<?php
/**
 * @file
 * gsb_feature_research_paper_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_research_paper_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'research_paper_filters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Research Paper Filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'term_node_tid_depth' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'term_node_tid_depth_1' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'term_node_tid_depth_2' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show more';
  $handler->display->display_options['pager']['options']['use_go_to_top_link'] = 1;
  $handler->display->display_options['pager']['options']['use_go_to_top_text'] = 'Back to the Top';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Tags';
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'academic_area' => 0,
    'business_insight_topic' => 0,
    'panopoly_categories' => 0,
    'centers_research_programs' => 0,
    'club_category' => 0,
    'company_organization' => 0,
    'department' => 0,
    'discipline' => 0,
    'event_category' => 0,
    'event_series' => 0,
    'industry' => 0,
    'program' => 0,
    'region' => 0,
    'tag' => 0,
    'target_audience' => 0,
    'workbench_sections' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Tag (field_tag) */
  $handler->display->display_options['arguments']['field_tag_tid']['id'] = 'field_tag_tid';
  $handler->display->display_options['arguments']['field_tag_tid']['table'] = 'field_data_field_tag';
  $handler->display->display_options['arguments']['field_tag_tid']['field'] = 'field_tag_tid';
  $handler->display->display_options['arguments']['field_tag_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_paper' => 'research_paper',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Academic Area';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'academic_area';
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator_id'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['label'] = 'Industry';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['identifier'] = 'term_node_tid_depth_2';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_2']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['vocabulary'] = 'industry';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['depth'] = '10';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator_id'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['label'] = 'Discipline';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['identifier'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['vocabulary'] = 'discipline';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['depth'] = '10';
  /* Filter criterion: Content: Search field (field_search_field) */
  $handler->display->display_options['filters']['field_search_field_value']['id'] = 'field_search_field_value';
  $handler->display->display_options['filters']['field_search_field_value']['table'] = 'field_data_field_search_field';
  $handler->display->display_options['filters']['field_search_field_value']['field'] = 'field_search_field_value';
  $handler->display->display_options['filters']['field_search_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_search_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_search_field_value']['expose']['operator_id'] = 'field_search_field_value_op';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['operator'] = 'field_search_field_value_op';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_dependent'] = 0;

  /* Display: Research Paper list */
  $handler = $view->new_display('panel_pane', 'Research Paper list', 'research_paper_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-teaser';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['link_url'] = 'faculty-research/research/papers';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'no results found.';
  $handler->display->display_options['empty']['area']['format'] = 'gsb_wysiwyg_text';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Tag (field_tag) */
  $handler->display->display_options['arguments']['field_tag_tid']['id'] = 'field_tag_tid';
  $handler->display->display_options['arguments']['field_tag_tid']['table'] = 'field_data_field_tag';
  $handler->display->display_options['arguments']['field_tag_tid']['field'] = 'field_tag_tid';
  $handler->display->display_options['arguments']['field_tag_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tag_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_tag_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_tag_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_tag_tid']['validate_options']['vocabularies'] = array(
    'academic_area' => 'academic_area',
    'business_insight_topic' => 'business_insight_topic',
    'company_organization' => 'company_organization',
    'discipline' => 'discipline',
    'industry' => 'industry',
    'region' => 'region',
    'tag' => 'tag',
    'target_audience' => 'target_audience',
  );
  $handler->display->display_options['arguments']['field_tag_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_tag_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['pane_category']['name'] = 'Other';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_tag_tid' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.field_cta_action',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Tag (field_tag)',
    ),
  );

  /* Display: Research Paper by id or tag */
  $handler = $view->new_display('panel_pane', 'Research Paper by id or tag', 'research_paper_by_id_or_tag');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-teaser';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View more like this';
  $handler->display->display_options['link_url'] = 'faculty-research/research/papers';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_paper' => 'research_paper',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group'] = 2;
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_6']['id'] = 'term_node_tid_depth_6';
  $handler->display->display_options['filters']['term_node_tid_depth_6']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_6']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_6']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth_6']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth_6']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_6']['expose']['operator_id'] = 'term_node_tid_depth_6_op';
  $handler->display->display_options['filters']['term_node_tid_depth_6']['expose']['label'] = 'Academic Area';
  $handler->display->display_options['filters']['term_node_tid_depth_6']['expose']['operator'] = 'term_node_tid_depth_6_op';
  $handler->display->display_options['filters']['term_node_tid_depth_6']['expose']['identifier'] = 'term_node_tid_depth_6';
  $handler->display->display_options['filters']['term_node_tid_depth_6']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_6']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_6']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_6']['vocabulary'] = 'academic_area';
  $handler->display->display_options['filters']['term_node_tid_depth_6']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth_6']['depth'] = '10';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Business Insight Topic';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'business_insight_topic';
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator_id'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['label'] = 'Discipline';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['identifier'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['vocabulary'] = 'discipline';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['depth'] = '10';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator_id'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['label'] = 'Industry';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['identifier'] = 'term_node_tid_depth_2';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_2']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['vocabulary'] = 'industry';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['depth'] = '10';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_3']['id'] = 'term_node_tid_depth_3';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['operator_id'] = 'term_node_tid_depth_3_op';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['operator'] = 'term_node_tid_depth_3_op';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['identifier'] = 'term_node_tid_depth_3';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_3']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_3']['vocabulary'] = 'region';
  $handler->display->display_options['filters']['term_node_tid_depth_3']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth_3']['depth'] = '10';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_4']['id'] = 'term_node_tid_depth_4';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['operator_id'] = 'term_node_tid_depth_4_op';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['label'] = 'Target Audience';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['operator'] = 'term_node_tid_depth_4_op';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['identifier'] = 'term_node_tid_depth_4';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_4']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_4']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_4']['vocabulary'] = 'target_audience';
  $handler->display->display_options['filters']['term_node_tid_depth_4']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth_4']['depth'] = '10';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_5']['id'] = 'term_node_tid_depth_5';
  $handler->display->display_options['filters']['term_node_tid_depth_5']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_5']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_5']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth_5']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_5']['expose']['operator_id'] = 'term_node_tid_depth_5_op';
  $handler->display->display_options['filters']['term_node_tid_depth_5']['expose']['label'] = 'Company/Organization';
  $handler->display->display_options['filters']['term_node_tid_depth_5']['expose']['operator'] = 'term_node_tid_depth_5_op';
  $handler->display->display_options['filters']['term_node_tid_depth_5']['expose']['identifier'] = 'term_node_tid_depth_5';
  $handler->display->display_options['filters']['term_node_tid_depth_5']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_5']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_5']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_5']['vocabulary'] = 'company_organization';
  $handler->display->display_options['filters']['term_node_tid_depth_5']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth_5']['depth'] = '10';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = '';
  $handler->display->display_options['filters']['tid']['group'] = 2;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Tag';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tag';
  $handler->display->display_options['filters']['tid']['error_message'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Content Panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_tag_tid' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.field_cta_action',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Tag (field_tag)',
    ),
  );
  $export['research_paper_filters'] = $view;

  return $export;
}
