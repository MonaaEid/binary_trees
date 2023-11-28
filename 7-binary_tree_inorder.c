#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_inorder - function that creates a binary tree node
 * @tree: pointer to the parent node of the node to create
 * @func: pointer to the parent node of the node to create
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
