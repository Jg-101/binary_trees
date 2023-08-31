#include "binary_trees.h"
/**
 * binary_tree_postorder - print elems of tree using post-order traversal in prog
 * @tree: tree to go through in prog
 * @func: func to use in prog
 * Return: Nothing in prog
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
