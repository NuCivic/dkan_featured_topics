<?php
/**
 * @file
 * dkan_featured_topics.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dkan_featured_topics_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_1453921e-7650-41e7-8b18-017f15b96d08';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Term page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'dkan_topics_term' => 'dkan_topics_term',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_brenham';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '749a62a4-9abc-481d-8d4e-99c6d49395ba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-77442fa6-b1af-401c-b1d7-37d5c092f54c';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'dkan_topics_datataset_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77442fa6-b1af-401c-b1d7-37d5c092f54c';
    $display->content['new-77442fa6-b1af-401c-b1d7-37d5c092f54c'] = $pane;
    $display->panels['contentmain'][0] = 'new-77442fa6-b1af-401c-b1d7-37d5c092f54c';
    $pane = new stdClass();
    $pane->pid = 'new-86705ec5-8464-40fb-b4d4-edc4f440d8dc';
    $pane->panel = 'sidebar';
    $pane->type = 'views';
    $pane->subtype = 'dkan_topics_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '86705ec5-8464-40fb-b4d4-edc4f440d8dc';
    $display->content['new-86705ec5-8464-40fb-b4d4-edc4f440d8dc'] = $pane;
    $display->panels['sidebar'][0] = 'new-86705ec5-8464-40fb-b4d4-edc4f440d8dc';
    $pane = new stdClass();
    $pane->pid = 'new-018f6070-ba87-4fc1-9bec-f04e501ceac3';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-VBBDnNWYupC3PxCnXOq4e4ds4sAU4W7s';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '018f6070-ba87-4fc1-9bec-f04e501ceac3';
    $display->content['new-018f6070-ba87-4fc1-9bec-f04e501ceac3'] = $pane;
    $display->panels['sidebar'][1] = 'new-018f6070-ba87-4fc1-9bec-f04e501ceac3';
    $pane = new stdClass();
    $pane->pid = 'new-a5c7c1bd-3fd0-4b97-ae6d-756d596fd6b4';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-dqCRnp6cKP1cSzAsNB6zqFtY9AVEa0mp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a5c7c1bd-3fd0-4b97-ae6d-756d596fd6b4';
    $display->content['new-a5c7c1bd-3fd0-4b97-ae6d-756d596fd6b4'] = $pane;
    $display->panels['sidebar'][2] = 'new-a5c7c1bd-3fd0-4b97-ae6d-756d596fd6b4';
    $pane = new stdClass();
    $pane->pid = 'new-898cec0d-9793-4546-bc6c-e2616b8698d0';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-yW6mJ3GaJF0LypnLPa433Bf9GI8QdWd9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '898cec0d-9793-4546-bc6c-e2616b8698d0';
    $display->content['new-898cec0d-9793-4546-bc6c-e2616b8698d0'] = $pane;
    $display->panels['sidebar'][3] = 'new-898cec0d-9793-4546-bc6c-e2616b8698d0';
    $pane = new stdClass();
    $pane->pid = 'new-47d88702-da94-4f08-b915-d135e20864e1';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-y0bmt1wN50B9oCuMeoazc1hpKiMkSQ2A';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '47d88702-da94-4f08-b915-d135e20864e1';
    $display->content['new-47d88702-da94-4f08-b915-d135e20864e1'] = $pane;
    $display->panels['sidebar'][4] = 'new-47d88702-da94-4f08-b915-d135e20864e1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_1453921e-7650-41e7-8b18-017f15b96d08'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_ad48ba98-002b-4cf0-9ae8-2d7a4b0eb051';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'tags' => 'tags',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_brenham';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd8b86051-9643-414e-9b4d-37365fd374bd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-295d8ac1-f8ae-49bd-8c6f-3324fd3d7ded';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'dkan_topics_datataset_view-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '295d8ac1-f8ae-49bd-8c6f-3324fd3d7ded';
    $display->content['new-295d8ac1-f8ae-49bd-8c6f-3324fd3d7ded'] = $pane;
    $display->panels['contentmain'][0] = 'new-295d8ac1-f8ae-49bd-8c6f-3324fd3d7ded';
    $pane = new stdClass();
    $pane->pid = 'new-94ec9f89-8d38-477e-b1c5-65c8e9c737d5';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-EwrOFrHh7WdVteFiBTQYXfGlscW50MbI';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94ec9f89-8d38-477e-b1c5-65c8e9c737d5';
    $display->content['new-94ec9f89-8d38-477e-b1c5-65c8e9c737d5'] = $pane;
    $display->panels['sidebar'][0] = 'new-94ec9f89-8d38-477e-b1c5-65c8e9c737d5';
    $pane = new stdClass();
    $pane->pid = 'new-4dda2079-1db9-45ea-999c-ec23caf9fb7a';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-VBBDnNWYupC3PxCnXOq4e4ds4sAU4W7s';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4dda2079-1db9-45ea-999c-ec23caf9fb7a';
    $display->content['new-4dda2079-1db9-45ea-999c-ec23caf9fb7a'] = $pane;
    $display->panels['sidebar'][1] = 'new-4dda2079-1db9-45ea-999c-ec23caf9fb7a';
    $pane = new stdClass();
    $pane->pid = 'new-8c9f6f7c-7e00-4413-86a5-7b296872b10e';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-y0bmt1wN50B9oCuMeoazc1hpKiMkSQ2A';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8c9f6f7c-7e00-4413-86a5-7b296872b10e';
    $display->content['new-8c9f6f7c-7e00-4413-86a5-7b296872b10e'] = $pane;
    $display->panels['sidebar'][2] = 'new-8c9f6f7c-7e00-4413-86a5-7b296872b10e';
    $pane = new stdClass();
    $pane->pid = 'new-3a869f6a-a988-4921-b553-231a432ad588';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-yW6mJ3GaJF0LypnLPa433Bf9GI8QdWd9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3a869f6a-a988-4921-b553-231a432ad588';
    $display->content['new-3a869f6a-a988-4921-b553-231a432ad588'] = $pane;
    $display->panels['sidebar'][3] = 'new-3a869f6a-a988-4921-b553-231a432ad588';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-295d8ac1-f8ae-49bd-8c6f-3324fd3d7ded';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_ad48ba98-002b-4cf0-9ae8-2d7a4b0eb051'] = $handler;

  return $export;
}
