#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: adds a new node at the beginning of a dlistint_t.
 *
 * Return: size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0;

	if (tree == NULL)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	return (size_left + size_right + 1);
}
