#include "binary_trees.h"

/**
 * binary_tree_delete - Function deletes an entire
 * binary tree.
 *
 * @tree: s a pointer to the root node of the tree to delete.
 *
 * Return: Nothing.
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
