#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function  inserts a
 * node as the right-child of another node.
 *
 * @parent: pointer to parent node.
 *
 * @value: integer to be inserted in the binary tree.
 *
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		newNode->right = parent->left;
		parent->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}
