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
 * binary_tree_balance - Counts the total number of nodes in a binary tree.
 *
 * @tree: A pointer to the root of the binary tree.
 *
 * Description:
 * This function recursively counts and returns the total number of nodes
 * in the binary tree starting from the specified root node.
 *
 * Return: The number of nodes in the binary tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return(height(tree->left)- height(tree->right));
}
