#include <stddef.h>
#include "binary_trees.h"

/**
 *binary_tree_size - a function measures thesize of tree.
 * @tree:  pointer to the node to measure the depth.
 * Return: 0 or size of tree.
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, right_size = 0, left_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/* Recursively count the size of left and right subtrees */
	else
	{
		left_size = binary_tree_size(tree->left);

		right_size = binary_tree_size(tree->right);
		size = right_size + left_size + 1;
	}
	return (size);

}
