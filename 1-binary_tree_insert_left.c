#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		temp = parent->left;
		temp->parent = new_node;
		parent->left = new_node;
		new_node->left = temp;
	}
	else
		parent->left = new_node;

	return (new_node);
}
