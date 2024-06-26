#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if
 * a node is a leaf.
 *
 * @node: pointer to the node to check.
 *
 * description: if node is NULL, return 0.
 *
 * Return: 1 if node is a leaf, otherwiswe 0.
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node != NULL) && (node->left == NULL) && (node->right == NULL))
	{
		return (1);
	}
	else
		return (0);

}
