#include <stddef.h>
#include "binary_trees.h"

/**
 *binary_tree_size - a function measures thesize of tree.
 * @tree:  pointer to the node to measure the depth.
 * Return: 0 or size of tree.
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/* Recursively count the size of left and right subtrees */
	size_t left_size = binary_tree_size(tree->left);

	size_t right_size = binary_tree_size(tree->right);


	return (1 + left_size + right_size);
}
