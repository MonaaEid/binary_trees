#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_insert_left - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	// binary_tree_t *new_left = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
        return (NULL);
	// if (new_left == NULL || parent == NULL)
	// 	return(NULL);
	// new_left->n = value;
	// new_left->parent = parent;
	binary_tree_t *new_left = binary_tree_node(parent, value);
	if (new_left == NULL)
        return (NULL);
	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		/*It sets the parent of the old left child of the parent to the new node,
		by setting the field parent->left->parent to the pointer new_node.*/
		parent->left->parent = new_left;
	}
	parent->left = new_left;
	return(new_left);
}
