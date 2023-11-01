#include "binary_trees.h"

/**
 * binary_tree_postorder -  a function that goes through
 * a binary tree using post-order traversal
 * @tree: the tree to be traversed
 * @func: a pointer function passed by param
 * Return: Void function
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
