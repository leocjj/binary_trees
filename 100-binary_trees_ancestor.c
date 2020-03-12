#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the node to find the lowest common ancestor
 * @second: is a pointer to the node to find the lowest common ancestor
 *
 * Return: pointer to the lowest ancestos, otherwise NULL.
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first,
	const binary_tree_t *second)
{
	const binary_tree_t *temp;

	int difference = binary_tree_depth(first) - binary_tree_depth(second);

	if (difference < 0)
	{
		temp = first;
		first = second;
		second = temp;
		difference *= -1;
	}

	while (difference--)
	{
		first = first->parent;
	}

	while (first != NULL && second != NULL)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: Depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		depth = binary_tree_depth(tree->parent) + 1;
	else
		depth = 0;

	return (depth);
}
