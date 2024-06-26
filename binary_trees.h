#ifndef _BINARY_TREES_H
#define _BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct binary_tree_s - binary tree node.
 *
 * @n: Integer stored in the node.
 * @parent: Pointer to parent node.
 * @left: pointer to left child node.
 * @right: pointer to right child node.
 *
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/*Function Prototypes*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_print(const binary_tree_t *);

#endif /*_BINARY_TREES_H*/
