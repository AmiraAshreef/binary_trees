#include <stddef.h>
#include "binary_trees.h"

/**
 *binary_tree_depth - a function measures the depth of a node.
 * @tree:  pointer to the node to measure the depth.
 * Return: 0 or NO of depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t depth = 1;

	binary_tree_t *parent = tree->parent;

	while (parent != NULL)
	{
		depth++;
		parent = parent->parent;
	}

	return (depth);
}
