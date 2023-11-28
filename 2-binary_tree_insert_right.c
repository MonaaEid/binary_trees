#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_insert_right - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);

	new_right = malloc(sizeof(binary_tree_t));

	if (new_right == NULL)
		return (NULL);
	new_right->n = value;
	new_right->parent = parent;
	new_right->right = NULL;
	new_right->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = new_right;
	}
	else
	{
		new_right->right = parent->right;
		/*It sets the parent of the old left child of the parent to the new node,*/
		/*by setting the field parent->left->parent to the pointer new_node.*/
		parent->right->parent = new_right;
		parent->right = new_right;

	}
	return (new_right);
}
