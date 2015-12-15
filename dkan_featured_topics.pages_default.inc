<?php
/**
 * @file
 * dkan_featured_topics.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dkan_featured_topics_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dkan_topics_page';
  $page->task = 'page';
  $page->admin_title = 'Topics';
  $page->admin_description = '';
  $page->path = 'topics';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dkan_topics_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'dkan_topics_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
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
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b60b0e57-5371-470b-9e3b-77b2e034f66f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-07010456-c41d-434c-8f47-c1541c075337';
    $pane->panel = 'contentmain';
    $pane->type = 'views';
    $pane->subtype = 'topics_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
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
    $pane->uuid = '07010456-c41d-434c-8f47-c1541c075337';
    $display->content['new-07010456-c41d-434c-8f47-c1541c075337'] = $pane;
    $display->panels['contentmain'][0] = 'new-07010456-c41d-434c-8f47-c1541c075337';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-07010456-c41d-434c-8f47-c1541c075337';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dkan_topics_page'] = $page;

  return $pages;

}
