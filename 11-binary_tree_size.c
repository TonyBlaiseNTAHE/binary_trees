#include "binary_trees.h"

/**
  * binary_tree_size - measures the size of a binary tree
  * @tree: a pointer to the node to measure the size
  * Return: NULL if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
