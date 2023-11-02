#include "binary_trees.h"

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

	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	if ((tree->left == NULL && tree->right != NULL) ||
(tree->left != NULL && tree->right == NULL))
		return (-1);
	if (tree->left != NULL && tree->right != NULL)
		return (2);
	return (0);
}
