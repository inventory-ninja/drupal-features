<?php
/**
 * @file
 * inventory_item_fields.features.inc
 */

/**
 * Implements hook_node_info().
 */
function inventory_item_fields_node_info() {
  $items = array(
    'inventory_item' => array(
      'name' => t('Inventory Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
