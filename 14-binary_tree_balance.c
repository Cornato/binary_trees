#include "binary_trees.h"

/**
 * binary_tree_height_b - tree
 * @tree: tree
 * Return: 0
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t lef = 0;
	size_t rig = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lef = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			rig = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((lef > rig) ? lef :rig);
	}
}

/**
 * binary_tree_balance - tree
 * @tree: tree
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int rights = 0, lefts = 0, totals = 0;

	if (tree)
	{
		lefts = ((int)binary_tree_height_b(tree->left));
		rights = ((int)binary_tree_height_b(tree->right));
		totals = lefts - rights;
	}
	return (totals);
}
