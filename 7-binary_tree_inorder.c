#include "binary_trees.h"
/**
 * unique_binary_tree_inorder - print elements of tree using in-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void unique_binary_tree_inorder(const unique_binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		unique_binary_tree_inorder(tree->left, func);
		func(tree->n);
		unique_binary_tree_inorder(tree->right, func);
	}
}
