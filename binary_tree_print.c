#include "binary_tree_print.h"
#include <stdio.h>
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	printf("Node: %d\n", tree->n);
	if (tree->left)
		printf("Left child: %d\n", tree->left->n);
	if (tree->right)
		printf("Right child: %d\n", tree->right->n);

	 binary_tree_print(tree->left);
	 binary_tree_print(tree->right);
}
