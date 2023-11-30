#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that finds the
 * lowest common ancestors of two nodes
 * @first: pointer of the first node
 * @second: pointer of the second node
 * Return: NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *s, *t;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	s = first->parent;
	t = second->parent;
	if (s == NULL || first == t || (!s->parent && t))
	{
		return (binary_trees_ancestor(first, t));
	}
	else if (t == NULL || s == second || (!t->parent && s))
	{
		return (binary_trees_ancestor(s, second));
	}
	return (binary_trees_ancestor(s, t));
}
