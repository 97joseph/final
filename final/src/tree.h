////////////////////////////////////////////////////////////////////////////////
///                                  tree.h                                  ///
////////////////////////////////////////////////////////////////////////////////
#ifndef __TREE_H__
#define __TREE_H__

/**
 * The binary tree node structure you are using here. No suprises.
 */
typedef struct treenode {
	int value;
	struct treenode *left;
	struct treenode *right;
} TreeNode;

/**
 * Compute the highest path weight in the input tree and return that value. If
 * the tree is empty, return 0.
 */
int get_highest_path_weight(TreeNode *root);

/**
 * Count the number of sibling pairs in the input tree and return that value. If
 * the tree is empty, return 0.
 */
int count_siblings(TreeNode *root); 

#endif
////////////////////////////////////////////////////////////////////////////////
///                                END OF FILE                               ///
////////////////////////////////////////////////////////////////////////////////
