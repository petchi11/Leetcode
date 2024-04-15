/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumNumbers(struct TreeNode* root) {
    
    if ( !root )
        return 0;

    return sumOfNumbers ( root, 0 );
}

int sumOfNumbers ( struct TreeNode* root, int number )
{
    if ( !root )
        return 0;
    if ( !(*root).left && !(*root).right ) {
        number = (number*10) + (*root).val;
        return number; 
    }
    number = (number*10) + (*root).val;
    return sumOfNumbers ( (*root).left, number ) + sumOfNumbers ( (*root).right, number );
}