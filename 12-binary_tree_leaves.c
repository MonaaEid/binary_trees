#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_leaves - function that creates a binary tree node
 * @tree: pointer to the parent node of the node to create
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*size_t size = 0;*/

	if (tree == NULL)
		return (0);
	else if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}




