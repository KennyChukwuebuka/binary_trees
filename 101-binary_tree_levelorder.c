#include "binary_trees.h"

/**
 * binary_tree_h - Function that measures the height of a b-tree
 * @tree: Pointer to the root
 * Return: tree height
 */
size_t binary_tree_h(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			i = tree->left ? 1 + binary_tree_h(tree->left) : 0;
			j = tree->right ? 1 + binary_tree_h(tree->right) : 0;
		}
		return ((i > j) ? i : j);
}

/**
 * binary_tree_dpth - Function that account for the depth of b-tree node
 * @tree: pointer to tree node
 * Return: 0
 */
size_t binary_tree_dpt(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_dpth(tree->parent) : 0);
}

/**
 * linked_binary_node - Function create a linked node from depth
 * @head: pointer to the list head
 * @tree: pointer to the depth of the tree
 * @depth: depth of tree
 * Return: Nothing
 */
void linked_binary_node(link_t **head, const binary_tree_t *tree, size_t depth)
{
	link_t *new_t, *s;

	new_t = malloc(sizeof(link_t));

	if (new_t == NULL)
	{
		return;
	}
	new_t->n = depth;
	new_t->node = tree;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new_t;
	}
	else
	{
		s = *head;
		while (s->next != NULL)
		{
			s = s->next;
		}
		new_t->next = NULL;
		s->next = new_t;
	}
}

/**
 */

/**
 * binary_tree_levelorder - function that goes through a binary
 * tree using level-order traversal
 * @tree: pointer to the root node to traverse
 * @func: pointer to a function to call for each node
 * Return: if tree is NULL do (Nothing)
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	
}
