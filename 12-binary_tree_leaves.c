#include "binary_trees.h"
/**
 * unique_binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
//leaves binary tee
size_t unique_binary_tree_leaves(const unique_binary_tree_t *tree)
{
	size_t leaf = 0, l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = unique_binary_tree_leaves(tree->left);
		r = unique_binary_tree_leaves(tree->right);
		leaf = l + r;
		return ((!l && !r) ? leaf + 1 : leaf + 0);
	}
}
