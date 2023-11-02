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
	int right_node = 0, left_node = 0;

	if (tree == NULL)
		return (0);
	right_node = binary_tree_nodes(tree->right);
	left_node = binary_tree_nodes(tree->left);
	return (1 + right_node + left_node);
}
