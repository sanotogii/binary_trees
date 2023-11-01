#include "binary_trees.h"

/**
 * height -  a function that measures the
 * height of a binary tree
 * @tree: is a pointer to the root node of
 * the tree to measure the height.
 * Return: integer the height of tree
 */

size_t height(const binary_tree_t *tree)
{
	size_t rheight, lheight;

	if (!tree)
		return (0);
	lheight = height(tree->left);
	rheight = height(tree->right);
	if (rheight >= lheight)
		return (rheight + 1);
	else
		return (lheight + 1);
}
/**
 * binary_tree_height -  a function that measures the
 * height of a binary tree
 * @tree: is a pointer to the root node of
 * the tree to measure the height.
 * Return: integer the height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (height(tree) - 1);
}
