#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_is_root - function that creates a binary tree node
 * @node: pointer to the parent node of the node to create
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}


