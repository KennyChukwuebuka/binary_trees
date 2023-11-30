#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that find the sibling of a node
 * @node: pointer to the node to find sibling
 * Return: if node or parent is NULL return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL && node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
