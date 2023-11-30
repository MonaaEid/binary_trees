#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_trees_ancestor - function that finds the lowest
 * common ancestor of two nodes
 * at least 1 child in a binary tree
 * @first: pointer to the first node
 * @second: is a pointer to the second node
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first->parent == second->parent)
		return (first->parent);

	if (first->parent == second)
		return ((binary_tree_t *)second);

	if (second->parent == first)
		return ((binary_tree_t *)first);

	return (binary_trees_ancestor(first->parent, second->parent)? binary_trees_ancestor(first->parent, second->parent): NULL);
}


