#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the total number of nodes in a binary tree.
 *
 * @tree: A pointer to the root of the binary tree.
 *
 * Description:
 * This function recursively counts and returns the total number of nodes
 * in the binary tree starting from the specified root node.
 *
 * Return: The number of nodes in the binary tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
