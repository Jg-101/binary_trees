#include "binary_trees.h"
/**
 * aux_sort - create the tree using the half elem of the arr
 * @parent: parent of the node to create
 * @array: sorted arr
 * @begin: position where the arr starts
 * @last: position where the arr ends
 * Return: tree created in prog
 */
avl_t *aux_sort(avl_t *parent, int *array, int begin, int last)
{
	avl_t *root;
	binary_tree_t *aux;
	int mid = 0;

	if (begin <= last)
	{
		mid = (begin + last) / 2;
		aux = binary_tree_node((binary_tree_t *)parent, array[mid]);
		if (aux == NULL)
			return (NULL);
		root = (avl_t *)aux;
		root->left = aux_sort(root, array, begin, mid - 1);
		root->right = aux_sort(root, array, mid + 1, last);
		return (root);
	}
	return (NULL);
}
/**
 * sorted_array_to_avl - create a alv tree from sorted arr
 * @array: sorted arr
 * @size: size of the sorted arr
 * Return: alv tree form sorted arr
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return (NULL);
	return (aux_sort(NULL, array, 0, ((int)(size)) - 1));
}
