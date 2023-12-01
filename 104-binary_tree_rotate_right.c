#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Function that performs right rotate
 * on a b-tree
 * @tree: pointer to the root node to rotate
 * Return: pointer to the new root node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *rotate_right;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}

	rotate_right = tree->left;
	tree->left = rotate_right->right;

	if (rotate_right->right != NULL)
	{
		rotate_right->right->parent = tree;
	}
	rotate_right->right = tree;
	rotate_right->parent = tree->parent;
	tree->parent = rotate_right;
	return (rotate_right);

}
