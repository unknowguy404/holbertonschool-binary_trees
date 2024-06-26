#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: a pointer to the root node of a tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
