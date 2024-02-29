#include "binary_trees.h"

/**
 * binary_tree_height_b - binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t ls = 0;
	size_t rs = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			ls = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			rs = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((ls > rs) ? ls : rs);
	}
}

/**
 * binary_tree_balance - Measures tree
 * @tree: tree
 * Return: balanced
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
