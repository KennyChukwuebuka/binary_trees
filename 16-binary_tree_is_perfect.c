#include "binary_trees.h"

/**
 * b_tree_is_perfect - Function that acertain if each node is prefect
 * from left to right
 * @tree: node to check
 * Return: 0
 */
int b_tree_is_perfect(const binary_tree_t *tree)
{
	int i = 0;
	int j = 0;

	if (tree->left && tree->right)
	{
		i = 1 + b_tree_is_perfect(tree->left);
		j = 1 + b_tree_is_perfect(tree->right);
		if (j == i && j != 0 && i != 0)
			return (j);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - Function that check if a binary tree is
 * perfect
 * @tree: pointer to the root node of tree to check
 * Return: if tree is NULL return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int ret = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		ret = b_tree_is_perfect(tree);
		if (ret != 0)
		{
			return (1);
		}
		return (0);
	}

}
