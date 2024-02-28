#include "binary_trees.h"

/**
 * binary_tree_is_root - root
 * @node: Node
 * Return: 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent != NULL || node == NULL)
		return (0);
	return (1);
}
