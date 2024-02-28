#include "binary_trees.h"

/**
 * unique_binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

unique_binary_tree_t *create_unique_binary_node(unique_binary_tree_t *parent_node, int node_value)
{
	unique_binary_tree_t *fresh_node;

	new_node = malloc(sizeof(unique_binary_tree_t));
	if (new_node == NULL)
		//this allocate memory for the new node
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
