#include "binary_trees.h"
/**
 * binary_tree_size - function
 * @tree: tree
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizee = 0, rig = 0, lef = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lef = binary_tree_size(tree->left);
		rig = binary_tree_size(tree->right);
		sizee = rig + lef + 1;
	}
	return (sizee);
}
