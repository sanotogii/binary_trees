#include "binary_trees.h"

/**
 * binary_tree_preorder -  a function that goes through a binary tree using pre-order traversal
 * @tree: the tree to be traversed
 * @func: a pointer function passed by param
 * Return: Void function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
