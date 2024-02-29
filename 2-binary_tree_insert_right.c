#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the right-child of another node
 * @parent: a pointer to the parent node of the node to create
 * @value:  the value to put in the new node
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}

	parent->right = new;
	return (new);
}
