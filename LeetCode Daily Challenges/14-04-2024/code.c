/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode* root) {
    int a;
    int b;

    if ( !(*root).left )
        a = 0;
    else if ( !(*(*root).left).left && !(*(*root).left).right )
        a = (*(*root).left).val;
    else
        a = sumOfLeftLeaves ( (*root).left );
    
    if ( (*root).right )
        b = sumOfLeftLeaves ( (*root).right );
    else 
        b = 0;

    return a + b;

}