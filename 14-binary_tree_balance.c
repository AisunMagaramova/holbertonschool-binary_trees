#include <stdlib.h>
#include "binary_trees.h"
/* Height funksiyası */
int binary_tree_height(const binary_tree_t *tree)
{
    int left, right;

    if (tree == NULL)
        return (-1);

    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);

    return (1 + (left > right ? left : right));
}

/* Balance funksiyası */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
