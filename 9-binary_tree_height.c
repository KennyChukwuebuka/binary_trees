#include "binary_trees.h"

/**
 * binary_tree_height - Function that measure height of a b-tree
 * @tree: pointer to root node of tree to measure th height
 * Return: if tree is NULL return (0)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			j = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((i > j) ? i : j);
	}
}
