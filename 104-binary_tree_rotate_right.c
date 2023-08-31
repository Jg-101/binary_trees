#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Func that  rotates right the binary tree in prog.
 * @tree: The root node of the three in prog
 * Return: Pointer node of the new node in prog
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	pivot = tree->left;
	tree->left = pivot->right;
	if (pivot->right != NULL)
	{
		pivot->right->parent = tree;
	}
	pivot->right = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;
	return (pivot);
}
