#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: Pointer to the newly created node
 * NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_t;

	new_t = malloc(sizeof(binary_tree_t));

	if (!new_t)
		return (NULL);
	new_t->parent = parent;
	new_t->right = NULL;
	new_t->left = NULL;
	new_t->n = value;
	return (new_t);
}
