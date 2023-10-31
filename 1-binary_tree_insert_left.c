#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the left child of
 * a given parent node
 * @parent: Pointer to the parent node
 * to which the new node is attached as a left child
 * @value: The value to put in the new left child node
 * Return: A pointer to the new left child node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	parent->left = new_node;
	return (new_node);
}
