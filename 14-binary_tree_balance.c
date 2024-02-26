#include "binary_trees.h"

/**
 * unique_binary_tree_height_b - Measures height of a unique_binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t unique_binary_tree_height_b(const unique_binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + unique_binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + unique_binary_tree_height_b(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * unique_binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int unique_binary_tree_balance(const unique_binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)unique_binary_tree_height_b(tree->left));
		right = ((int)unique_binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
