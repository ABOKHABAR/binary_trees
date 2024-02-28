#include "binary_trees.h"

/**
 * unique_binary_tree_is_root - Function that checks if a node is a root
 * @node: Node to check
 * Return: 0 if is not a root 1 if it is
 */

int unique_binary_tree_is_root(const unique_binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
//this is root node to check
