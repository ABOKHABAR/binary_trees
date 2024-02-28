#include "binary_trees.h"
/**
 * unique_binary_tree_postorder - print elements of tree using post-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
//postorder for binary tree
void unique_binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		unique_binary_tree_postorder(tree->left, func);
		unique_binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
