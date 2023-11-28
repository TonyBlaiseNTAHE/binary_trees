#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the lsft-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: NULL on failure or NULL is parent is NULL or a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	
	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	new->n = value;

	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}
	return (new);
}
