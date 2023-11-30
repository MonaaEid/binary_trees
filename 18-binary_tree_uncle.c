#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_uncle - function that finds the sibling of a node
 * at least 1 child in a binary tree
 * @node: pointer to the parent node of the node to create
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	return (node->parent->parent->left == node->parent ?
	node->parent->parent->right : node->parent->parent->left);
}

