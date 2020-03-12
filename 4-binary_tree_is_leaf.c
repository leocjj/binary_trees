#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a given node is a leaf
 * @node: pointer to the root node of the tree
 * Return: 1 if is root, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
