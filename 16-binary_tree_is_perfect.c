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
	if (!tree)
		return (0);
	return (height(tree) - 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description:
 * This function checks if the given binary tree
 * is perfect, which means that all
 * internal nodes have exactly two children,
 * and all leaf nodes are at the same
 * level or depth.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	if (lheight == rheight)
	{
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
