#include "binary_trees.h"
/**
 * unique_binary_tree_depth - depth of specified node from root
 * @tree: node to check the depth
 * Return: 0 is it is the root or number of depth
 */
size_t unique_binary_tree_depth(const unique_binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + unique_binary_tree_depth(tree->parent) : 0);
}
//this is binary tree depth
