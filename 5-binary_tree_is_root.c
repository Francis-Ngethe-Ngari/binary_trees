#include "binary_trees.h"

/**
 * binary_tree_is_root - Function checks if node is a root.
 *
 * @node: node is a pointer to node check.
 *
 * description: If node is NULL, return 0.
 *
 * Return: 1 if node is a root, otherwise 0.
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node != NULL) && (node->left != NULL) && (node->right != NULL))
	{
		return (1);
	}
	else
		return (0);
}
