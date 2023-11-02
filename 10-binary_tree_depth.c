#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the the depth of a node in a
 * binary tree.
 * @tree: A pointer tothe node to measure the depth.
 *
 * Return: If tree is NULL, return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0 );
}
