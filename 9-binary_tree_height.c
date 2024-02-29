#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t l = 0;
    size_t r = 0;

    if (tree == NULL)
    {
        return (0);
    }

    if (tree->left)
    {
        l = 1 + binary_tree_height(tree->left);
    }

    if (tree->right)
    {
        r = 1 + binary_tree_height(tree->right);
    }

    return ((l > r) ? l : r);
}
