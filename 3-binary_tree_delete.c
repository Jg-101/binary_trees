#include "binary_trees.h"
/**
 * binary_tree_delete - free an entire tree using recursion it free the node in prog
 * when the node left and right are NULL in prog
 * @tree: tree to free in prog
 * Return: Nothing in prog
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
