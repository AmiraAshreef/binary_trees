#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves or 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{

		right = binary_tree_leaves(tree->right);
		left = binary_tree_leaves(tree->left);
		leaf =  right + left;
		return ((!right && !left) ? leaf + 1 : leaf + 0);
	}
}
