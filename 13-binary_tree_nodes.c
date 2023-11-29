#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the tree with atleast one
 * child in the b-tree
 * @tree: pointer to the root node
 * Return: if tree is NULL return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child_node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		child_node += ((tree->left || tree->right) ? 1 : 0);
		child_node += binary_tree_nodes(tree->left);
		child_node += binary_tree_nodes(tree->right);
		return (child_node);
	}
}
