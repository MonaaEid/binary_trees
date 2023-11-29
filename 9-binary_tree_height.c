#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height - function that creates a binary tree node
 * @tree: pointer to the parent node of the node to create
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
