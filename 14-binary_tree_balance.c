#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 * at least 1 child in a binary tree
 * @tree: pointer to the parent node of the node to create
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = tree->left ? 1 + binary_tree_balance(tree->left) : 1;
	right_height = tree->right ? 1 + binary_tree_balance(tree->right) : 1;
	return (left_height - right_height);
}



