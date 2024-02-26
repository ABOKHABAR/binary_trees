#include "binary_trees.h"

/**
 * unique_binary_tree_sibling - function that finds if a node is sibling
 * @node: node to check
 * Return: The sibling node
 */

unique_binary_tree_t *unique_binary_tree_sibling(unique_binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
