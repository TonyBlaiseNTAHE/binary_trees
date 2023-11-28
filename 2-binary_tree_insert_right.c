#include "binary_trees.h"

/**
  * binary_tree_insert_right - inserts node as the right-child of another node
  * @parent: a pointer to the node to insert the rigth-child in
  * @value: the value to store in the new node
  * Return: NULL on failure or NULL if parent is NULL
  *         a pointer to the created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
	{
		parent->right = new;
	}
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
	}
	return (new);
}
