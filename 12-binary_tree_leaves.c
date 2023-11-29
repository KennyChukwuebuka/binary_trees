#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that count the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the numeber
 * of leaves
 * Return: if tree is NULL return always 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaf = 0;
	size_t i = 0;
	size_t j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		i = binary_tree_leaves(tree->left);
		j = binary_tree_leaves(tree->right);
		count_leaf = i + j;
		return ((!i && !j) ? count_leaf + 1 : count_leaf + 0);
	}
}
