#include "binary_trees.h"
/**
 * unique_binary_tree_nodes - function that returns # of nodes in a tree with children
 * @tree: tree to check
 * Return: number of nodes with children
 */
//nodes of unique binary trees
size_t unique_binary_tree_nodes(const unique_binary_tree_t *tree)
{

	size_t  node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right) ? 1 : 0);
		node += unique_binary_tree_nodes(tree->left);
		node += unique_binary_tree_nodes(tree->right);
		return (node);
	}
}
