#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to count leaves
 *
 * Return: leaves of a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves += binary_tree_leaves(tree->right);
	leaves += binary_tree_leaves(tree->left);
	return (leaves);
}
