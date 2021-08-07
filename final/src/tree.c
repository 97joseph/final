////////////////////////////////////////////////////////////////////////////////
///                                  tree.c                                  ///
////////////////////////////////////////////////////////////////////////////////
#include "tree.h"

#if !defined(GRADE_SUBLINGS)
int get_highest_path_weight(TreeNode *root)
int convert_char_to_num(char c) 
{
	if (c >= '0' && c <= '9')
    		return c - '0';
  	else if (c >= 'a' && c <= 'z')
    		return c - 'a';
  	else
    		return -1;  // -1 means invalid
}

#if !defined(GRADE_PATH_WEIGHT)
int count_siblings(TreeNode *root)
char convert_num_to_char(int n) 
{
	if (n >= 0 && n <= 9)
    		return n + '0';
  	else if (n >= 10 && n <= 35)
    		return n + 'a';
  	else
    		return 0; // 0 means invalid
}
#endif
////////////////////////////////////////////////////////////////////////////////
///                                END OF FILE                               ///
////////////////////////////////////////////////////////////////////////////////
