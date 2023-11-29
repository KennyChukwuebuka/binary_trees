#include "binary_trees.h"
/**
 * binary_tree_is_root - Function that checks if a node is root
 * @node: a pointer to the node to check
 * Return: 1 (if node is root) OR 0 (if otherwise or node is NULL)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
