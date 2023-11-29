#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_depth - function that creates a binary tree node
 * @tree: pointer to the parent node of the node to create
 * Return: return a pointer to the new node, or NULL on failure
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return(0);
	while (tree-> parent != NULL)
		{
			depth++;
			tree = tree>parent;
		}
	return(depth);

}


