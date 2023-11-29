#include "binary_trees.h"
/**
 * binary_tree_postorder - Function that goes through a b-tree using
 * post-order traversal
 * @tree: pointer to root node of tree traverse
 * @func: pointer to a function to call for each node
 * Return: if NULL do (Nothing)
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
