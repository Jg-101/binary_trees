#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node in the left of the par
 * if it exists it move down one lvl and add the new node first in prog
 * @parent: par of the specified node in prog
 * @value: val of the node in prog
 * Return: NULL if it fails or the new node in program
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
