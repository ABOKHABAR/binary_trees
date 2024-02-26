#include "binary_trees.h"
/**
 * unique_binary_tree_size - function that return the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */
size_t unique_binary_tree_size(const unique_binary_tree_t *tree)
{
	size_t size = 0, r = 0, l = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = unique_binary_tree_size(tree->left);
		r = unique_binary_tree_size(tree->right);
		size = r + l + 1;
	}
//unique binary tree
	return (size);
}
