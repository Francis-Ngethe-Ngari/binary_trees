#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function  inserts a
 * node as the left-child of another node.
 *
 * @parent: pointer to parent node.
 *
 * @value: integer to be inserted in the binary tree.
 *
 * description: If parent already has a left-child,
 * the new node must take its place, and the old
 * left-child must be set as the left-child of the new node.
 *
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}

	parent->left = newNode;

	return (newNode);
}
