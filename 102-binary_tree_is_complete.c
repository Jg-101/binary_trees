#include "binary_trees.h"
/**
 * new_node - Func that creates a new_node in a linked_list in prog
 * @node: Type pointer of node to be created in prog
 * Return: the node created in prog
 */
link_t *new_node(binary_tree_t *node)
{
	link_t *new;

	new =  malloc(sizeof(link_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->node = node;
	new->next = NULL;

	return (new);
}
/**
 * free_q - Func that free the nodes at the linked list in prog
 * @head: Node of the linked_list in prog
 */
void free_q(link_t *head)
{
	link_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
/**
 * _push - Func that pushes a node into the stack in prog
 * @node: Type pointer of node of the tree in prog
 * @head: Type head node of in the stack in prog
 * @tail: Type tail node of in the stack in prog
 */
void _push(binary_tree_t *node, link_t *head, link_t **tail)
{
	link_t *new;

	new = new_node(node);
	if (new == NULL)
	{
		free_q(head);
		exit(1);
	}
	(*tail)->next = new;
	*tail = new;
}
/**
 * _pop - Func that pops a node into the stack in prog
 * @head: Type head node of in the stack in prog
 */
void _pop(link_t **head)
{
	link_t *temp_node;

	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;
}
/**
 * binary_tree_is_complete - Func that checks if a binary tree is complete in prog
 * @tree: Type pointer of node of the tree in prog
 * Return: 1 if is complete 0 if it is not in prog
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	link_t *head, *tail;
	int flag = 0;

	if (tree == NULL)
	{
		return (0);
	}
	head = tail = new_node((binary_tree_t *)tree);
	if (head == NULL)
	{
		exit(1);
	}
	while (head != NULL)
	{
		if (head->node->left != NULL)
		{
			if (flag == 1)
			{
				free_q(head);
				return (0);
			}
			_push(head->node->left, head, &tail);
		}
		else
			flag = 1;
		if (head->node->right != NULL)
		{
			if (flag == 1)
			{
				free_q(head);
				return (0);
			}
			_push(head->node->right, head, &tail);
		}
		else
			flag = 1;
		_pop(&head);
	}
	return (1);
}
