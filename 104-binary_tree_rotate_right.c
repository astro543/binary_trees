#include "binary_trees.h"

/**
 * binary_tree_rotate_right - function that rotates right the binary tree
 * @tree: the root node of the tree
 * Return: pointer node of the new node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	pivot = tree->left;
	tree->left = pivot->right;
	if (pivot->right != NULL)
	{
		pivot->right->parent = tree;
	}
	pivot->right = tree;
	pivot->right = tree;
	tree->parent = pivot;
	return (pivot);
}