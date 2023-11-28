#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function inserts a node
 * to the right-child of another node
 * @parent: a pointer to the node to insert the right childen
 * @value: is the value to store in the new node
 * Return: A pointer to the created node OR NULL (on failure)
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
