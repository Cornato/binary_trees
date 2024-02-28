#include "binary_trees.h"
/**
 * binary_tree_insert_left - parent
 * @parent: parent node
 * @value: value
 * Return: NULL if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		_node->left = parent->left;
		parent->left->parent = _node;
	}
	parent->left = _node;
	return (_node);
}
