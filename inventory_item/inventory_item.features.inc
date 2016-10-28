<?php
/**
 * @file
 * inventory_item.features.inc
 */

/**
 * Implements hook_node_info().
 */
function inventory_item_node_info() {
  $items = array(
    'item' => array(
      'name' => t('item'),
      'base' => 'node_content',
      'description' => t('Inventory Item'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
