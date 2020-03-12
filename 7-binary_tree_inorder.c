#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree in inorder
 * @tree: pointer to the root node of the tree
 * @func: Function pointer that receives an integer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
