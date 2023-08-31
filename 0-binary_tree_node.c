#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node in prog
 * @parent: node parent in prog
 * @value: Val of the node in prog
 * Return: the new node in prog
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
