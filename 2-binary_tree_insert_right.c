#include "binary_trees.h"
/**
 * binary_tree_insert_right - parent
 * @parent: parent
 * @value: value
 * Return: NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	_node = binary_tree_node(parent, value);
	if (_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		_node->right = parent->right;
		parent->right->parent = _node;
	}
	parent->right = _node;
	return (_node);
}
