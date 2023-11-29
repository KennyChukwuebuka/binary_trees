#include "binary_trees.h"

/**
 * binary_tree_balance_height - Function measure height of b-tree
 * @tree: param
 * Return: b-tree height
 */
size_t binary_tree_balance_height(const binary_tree_t *tree)
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
			i = tree->left ? 1 + binary_tree_balance_height(tree->left) : 1;
			j = tree->right ? 1 + binary_tree_balance_height(tree->right) : 1;
		}
		return ((i > j) ? i : j);
	}
}


/**
 * binary_tree_balance - Function that measures the balance factor
 * of a b-tree
 * @tree: pointer to the root node of the tree to measure b-factor
 * Return: if tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;
	int total = 0;

	if (tree)
	{
		left = ((int)binary_tree_balance_height(tree->left));
		right = ((int)binary_tree_balance_height(tree->right));
		total = left - right;
	}
	return (total);
}
