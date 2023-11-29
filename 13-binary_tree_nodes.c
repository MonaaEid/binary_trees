#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_nodes -  function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to the parent node of the node to create
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left != NULL) || (tree->right != NULL))
		count = binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
	return (count);
}





