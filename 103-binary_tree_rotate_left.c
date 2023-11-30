#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Function that perform left rotation
 * on b-tree
 * @tree: pointer to root node of tree to rotate
 * Return: pointer to new route node
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *i;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}

	i = tree->right;
	tree->right = i->left;

	if (i->left != NULL)
	{
		i->left->parent = tree;
	}
	i->left = tree;
	i->parent = tree->parent;
	tree->parent = i;
	return (i);
}
