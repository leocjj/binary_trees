#include "binary_trees.h"
#include <math.h>

/**
 * height - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: Height of a binary tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = height(tree->left) + 1;
	else
		left = 0;

	if (tree->right != NULL)
		right = height(tree->right) + 1;
	else
		right = 0;

	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if the binary tree is perfect, otherwise 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (height(tree->left) != height(tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
