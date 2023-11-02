#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to create nodes
 * @parent: parent of the node
 * @value: the value inside the node
 * Return: the new created pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
