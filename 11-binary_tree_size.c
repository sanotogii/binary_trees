#include "binary_trees.h"

/**
 * size - a function that measures
 * the depth of a node in a binary tree
 * @tree: is a pointer to the root node of
 * the tree to measure the height.
 * Return: integer the height of tree
 */
size_t size_of_tree(const binary_tree_t *tree, size_t *z)
{
	if (!tree)
		return (0);

	size_of_tree(tree->left, z);
	size_of_tree(tree->right, z);
	return ((*z)++);
}

/**
 * binary_tree_depth - a function that measures
 * the depth of a node in a binary tree
 * @tree: is a pointer to the root node of
 * the tree to measure the height.
 * Return: integer the height of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t z = 0;

	if (!tree)
		return (0);
	return(size_of_tree(tree, &z) + 1);
}
