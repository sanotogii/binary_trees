#include "binary_trees.h"


/**
 * binary_tree_depth - a function that measures
 * the depth of a node in a binary tree
 * @tree: is a pointer to the root node of
 * the tree to measure the height.
 * Return: integer the height of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *current = (binary_tree_t *)tree;

	if (!tree)
		return (0);
	while (current)
	{
		current = current->parent;
		depth += 1;
	}
	return (depth - 1);
}
