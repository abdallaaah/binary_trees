
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function to create nodes
 * @parent: parent of the node
 * @value: the value inside the node
 * Return: the new created pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
struct binary_tree_s *newnode = malloc(sizeof(struct binary_tree_s));
if (newnode == NULL)
return (NULL);
newnode->n = value;
newnode->parent = parent;
newnode->left = NULL;
newnode->right = NULL;
return (newnode);
}
