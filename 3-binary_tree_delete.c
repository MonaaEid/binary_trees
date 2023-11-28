#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_delete - function that creates a binary tree node
 * @tree: pointer to the parent node of the node to create
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);

}
