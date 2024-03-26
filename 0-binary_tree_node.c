#include "binary_trees.h"
/**
 * binary_tree_node - Function that creates a new node.
 *
 * @parent: pointer to parent node.
 *
 * @value: integer input to node value.
 *
 * Return: Pointer to new node or NULL.
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
