/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
typedef struct TreeNode tree;
tree* GET_NODE ( int );
tree* addRow ( tree*, int, int, int );
struct TreeNode* addOneRow(struct TreeNode* root, int val, int depth) {

    if ( depth == 1 ) {
        tree* node = GET_NODE ( val );
        (*node).left = root;

        return node;
    }

    return addRow ( root, val, depth, 1 );
}

tree* GET_NODE ( int val )
{
    tree* temp = (tree*) malloc ( sizeof (tree) );

    (*temp).val = val;
    (*temp).left = (*temp).right = NULL;

    return temp;
}

tree* addRow ( tree* root, int val, int originalDepth, int localDepth )
{
    if ( !root )
        return 0;

    if ( localDepth == originalDepth - 1 ) {

            tree* store = (*root).left;
            tree* node = GET_NODE (val);
            (*root).left = node;
            (*node).left = store;

            store = (*root).right;
            node = GET_NODE (val);
            (*root).right = node;
            (*node).right = store;
    }
    else {
        addRow ( (*root).left, val, originalDepth, localDepth + 1 );
        addRow ( (*root).right, val, originalDepth, localDepth + 1 );
    }

    return root;
}