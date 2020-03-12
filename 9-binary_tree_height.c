#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: Height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;
	else
		left = 0;
	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;
	else
		right = 0;

	if (left > right)
		return (left);
	else
		return (right);
}
