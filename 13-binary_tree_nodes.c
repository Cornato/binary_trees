#include "binary_trees.h"
/**
 * binary_tree_nodes - fchildren
 * @tree: tree
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  node_c = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node_c += ((tree->left || tree->right) ? 1 : 0);
		node_c += binary_tree_nodes(tree->left);
		node_c += binary_tree_nodes(tree->right);
		return (node_c);
	}
}
