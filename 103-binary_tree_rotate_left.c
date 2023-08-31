#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Func that  rotates left the binary tree in prog.
 * @tree: The root node of the three in prog
 * Return: Pointer node of the new node in prog
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}
	pivot = tree->right;
	tree->right = pivot->left;
	if (pivot->left != NULL)
	{
		pivot->left->parent = tree;
	}
	pivot->left = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;
	return (pivot);
}
