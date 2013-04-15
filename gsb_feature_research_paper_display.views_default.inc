<?php
/**
 * @file
 * gsb_feature_research_paper_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_research_paper_display_views_default_views()
{
  $export = array();

  $view = new view();
  $view->name = 'research_papers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__acquia_search_server_1';
  $view->human_name = 'Research Papers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'keyword' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show More';
  $handler->display->display_options['pager']['options']['use_go_to_top_link'] = 1;
  $handler->display->display_options['pager']['options']['use_go_to_top_text'] = 'Back to the Top';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Apache Solr: path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: im_field_date_published_format_year */
  $handler->display->display_options['fields']['im_field_date_published_format_year']['id'] = 'im_field_date_published_format_year';
  $handler->display->display_options['fields']['im_field_date_published_format_year']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['im_field_date_published_format_year']['field'] = 'im_field_date_published_format_year';
  $handler->display->display_options['fields']['im_field_date_published_format_year']['label'] = 'Date posted';
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_field_number_apachesolr */
  $handler->display->display_options['fields']['sm_field_number_apachesolr']['id'] = 'sm_field_number_apachesolr';
  $handler->display->display_options['fields']['sm_field_number_apachesolr']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_field_number_apachesolr']['field'] = 'sm_field_number_apachesolr';
  $handler->display->display_options['fields']['sm_field_number_apachesolr']['label'] = '';
  $handler->display->display_options['fields']['sm_field_number_apachesolr']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_field_authors_custom_id_apachesolr */
  $handler->display->display_options['fields']['sm_field_authors_custom_id_apachesolr']['id'] = 'sm_field_authors_custom_id_apachesolr';
  $handler->display->display_options['fields']['sm_field_authors_custom_id_apachesolr']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_field_authors_custom_id_apachesolr']['field'] = 'sm_field_authors_custom_id_apachesolr';
  $handler->display->display_options['fields']['sm_field_authors_custom_id_apachesolr']['label'] = '';
  $handler->display->display_options['fields']['sm_field_authors_custom_id_apachesolr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sm_field_authors_custom_id_apachesolr']['hide_alter_empty'] = FALSE;
  /* Field: Apache Solr: sm_field_authors_apachesolr */
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['id'] = 'sm_field_authors_apachesolr';
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['field'] = 'sm_field_authors_apachesolr';
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['label'] = 'Authors';
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['alter']['text'] = '[sm_field_authors_custom_id_apachesolr]';
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['alter']['max_length'] = '50000';
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['hide_empty'] = TRUE;
  /* Field: Apache Solr: sm_field_body_apachesolr */
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['id'] = 'sm_field_body_apachesolr';
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['field'] = 'sm_field_body_apachesolr';
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['label'] = '';
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_field_tags_apachesolr */
  $handler->display->display_options['fields']['sm_field_tags_apachesolr']['id'] = 'sm_field_tags_apachesolr';
  $handler->display->display_options['fields']['sm_field_tags_apachesolr']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_field_tags_apachesolr']['field'] = 'sm_field_tags_apachesolr';
  $handler->display->display_options['fields']['sm_field_tags_apachesolr']['label'] = 'Tags';
  /* Filter criterion: Apache Solr: bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = 'research_paper';
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keyword']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['keyword']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keyword']['expose']['operator'] = 'keyword_op';
  $handler->display->display_options['filters']['keyword']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;

  $export['research_papers'] = $view;

  $view = new view();
  $view->name = 'research_papers_filters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Research Papers Filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_academic_area_unlimited_tid' => array(
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
      ),
    ),
    'field_industry_tid' => array(
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
      ),
    ),
    'field_discipline_tid' => array(
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
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Date Published */
  $handler->display->display_options['fields']['field_date_published']['id'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['fields']['field_date_published']['field'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['label'] = 'Date posted';
  $handler->display->display_options['fields']['field_date_published']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_published']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_date_published']['settings'] = array(
    'format_type' => 'gsb_format_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_person_fac_student_other']['id'] = 'field_person_fac_student_other';
  $handler->display->display_options['fields']['field_person_fac_student_other']['table'] = 'field_data_field_person_fac_student_other';
  $handler->display->display_options['fields']['field_person_fac_student_other']['field'] = 'field_person_fac_student_other';
  $handler->display->display_options['fields']['field_person_fac_student_other']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_person_fac_student_other']['settings'] = array(
    'view_mode' => 'research_pager',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_person_fac_student_other']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_person_fac_student_other']['separator'] = '; ';
  /* Field: Field: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
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
  /* Filter criterion: Content: Academic Area (field_academic_area_unlimited) */
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['id'] = 'field_academic_area_unlimited_tid';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['table'] = 'field_data_field_academic_area_unlimited';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['field'] = 'field_academic_area_unlimited_tid';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['operator_id'] = 'field_academic_area_unlimited_tid_op';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['label'] = 'Academic Area';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['operator'] = 'field_academic_area_unlimited_tid_op';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['identifier'] = 'field_academic_area_unlimited_tid';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['vocabulary'] = 'academic_area';
  /* Filter criterion: Content: Industry (field_industry) */
  $handler->display->display_options['filters']['field_industry_tid']['id'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['table'] = 'field_data_field_industry';
  $handler->display->display_options['filters']['field_industry_tid']['field'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_industry_tid']['expose']['operator_id'] = 'field_industry_tid_op';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['label'] = 'Industries';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['operator'] = 'field_industry_tid_op';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['identifier'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_industry_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_industry_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_industry_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_industry_tid']['vocabulary'] = 'industry';
  /* Filter criterion: Content: Discipline (field_discipline) */
  $handler->display->display_options['filters']['field_discipline_tid']['id'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['filters']['field_discipline_tid']['field'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['operator_id'] = 'field_discipline_tid_op';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['label'] = 'Disciplines';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['operator'] = 'field_discipline_tid_op';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['identifier'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_discipline_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_discipline_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_discipline_tid']['vocabulary'] = 'discipline';

  /* Display: Research list */
  $handler = $view->new_display('panel_pane', 'Research list', 'research_list');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;

  $export['research_papers_filters'] = $view;

  return $export;
}