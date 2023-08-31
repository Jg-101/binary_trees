#include "binary_trees.h"

/**
 * binary_tree_is_root - Func that checks if a node is a root in prog
 * @node: Node to check in prog
 * Return: 0 if is not a root 1 if it is in prog
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
