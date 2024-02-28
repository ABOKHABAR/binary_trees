#include "binary_trees.h"
/**
 * unique_binary_tree_insert_right - add a node in the right of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */

unique_binary_tree_t *unique_binary_tree_insert_right(binary_tree_t *parent, int value)
{
	unique_binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = unique_binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	//ksjassdsaaasdisajudshdaisd
	parent->right = new_node;
	return (new_node);
}
