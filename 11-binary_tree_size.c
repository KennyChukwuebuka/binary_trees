#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: if tree is NULL always return (0)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t i = 0, j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		i = binary_tree_size(tree->left);
		j = binary_tree_size(tree->right);
		size = i + j + 1;
	}
	return (size);
}