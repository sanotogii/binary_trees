#include "binary_trees.h"

/**
 * binary_tree_leaves -a function that counts
 * the leaves in a binary tree
 * @tree: is a pointer to the root node of
 * the tree to measure the height.
 * Return: integer the counts of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (2);
	else if (tree->left)
		return (1);
	else if (tree->right)
		return (1);
	else
		return (0);
	
}
