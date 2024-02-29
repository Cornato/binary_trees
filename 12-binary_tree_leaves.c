#include "binary_trees.h"
/**
 * binary_tree_leaves - function
 * @tree: tree
 * Return: 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, lef = 0, rig = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lef = binary_tree_leaves(tree->left);
		rig = binary_tree_leaves(tree->right);
		leaf = lef + rig;
		return ((!lef && !rig) ? leaf + 1 : leaf + 0);
	}
}
