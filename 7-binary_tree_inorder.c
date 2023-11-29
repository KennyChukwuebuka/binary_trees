#include "binary_trees.h"

/**
 * binary_tree_inorder - Function that goes through a binary tree
 * using the in-order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function to call for each node
 * Return: if tree OR func is NULL (Nothing)
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

