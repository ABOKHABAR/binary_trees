#include "binary_trees.h"
/**
 * unique_binary_tree_delete - free an entire tree using recursion it free the node
 * when the node left and right are NULL
 * @tree: tree to free
 * Return: Nothing
 */
void unique_binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			unique_binary_tree_delete(tree->left);
			unique_binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
