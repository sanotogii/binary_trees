#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 *
 * @tree: A pointer to the root of the binary tree.
 *
 * Description:
 * This function counts the number of leaves (nodes with no children) in
 * a binary tree starting from the specified root node.
 *
 * Return: The number of leaf nodes in the binary tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int rleaves, lleaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lleaves = binary_tree_leaves(tree->left);
	rleaves = binary_tree_leaves(tree->right);
	return (lleaves + rleaves);
}
