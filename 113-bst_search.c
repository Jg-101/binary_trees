#include "binary_trees.h"
/**
 * bst_search - search for a special val in the tree and return the node in prog
 * @tree: tree to go through in prog
 * @value: val to search in prog
 * Return: the node with the val or NULL if the val is not in the tree in prog
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *found;

	if (tree == NULL)
		return (NULL);

	if (value < tree->n)
	{
		found = bst_search(tree->left, value);
	}
	else if (value > tree->n)
	{
		found = bst_search(tree->right, value);
	}
	else if (value == tree->n)
		return ((bst_t *)tree);
	else
		return (NULL);
	return (found);
}
