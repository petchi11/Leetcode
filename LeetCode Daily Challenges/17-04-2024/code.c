/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct Node
{
    char val;
    struct Node* next;
};
typedef struct Node node;
void smallest ( struct TreeNode* root, node** small, node* string );
int lexical ( node* node1, node* node2 );
node* NODE ( int val )
{
    node* temp = (node*) malloc ( sizeof(node) );

    (*temp).val = val + 97;
    (*temp).next = NULL;

    return temp;
} 
char* smallestFromLeaf(struct TreeNode* root) {
    node* head;
    int size;
    char* str;
    int k;

    head = 0;
    size = 0;
    smallest ( root, &head, 0 );
    //str = 0;
    //size = (*head).count;
    //printf ( "%d ", size );
    node* temp = head;
    while ( temp )
    {
        size += 1;
        temp = (*temp).next;
    }
    k = 0;
    str = (char*) malloc ( (size+1) * sizeof (char) );
    while ( head )
    {
        *(str+k) = (*head).val;
        *(str+(k+1)) = 0;
        k += 1;
        head = (*head).next;
    }

    return str;
}

void smallest ( struct TreeNode* root, node** small, node* string )
{
    if ( !root )
        return;

    node* temp = NODE ( (*root).val );
    // if ( string )
    //     (*temp).count = (*string).count + 1;
    (*temp).next = string;
    string = temp;
    
    if ( !(*root).left && !(*root).right )
    {
        if ( !*small || lexical ( string, *small ) ) {
            *small = string;
        }

        //node* temp = string;
        string = (*string).next;

        //(*temp).next = NULL;
        //free (temp);
        return;
    }

    smallest ( (*root).left, small, string );
    smallest ( (*root).right, small, string );

    //temp = string;
    string = (*string).next;

    //(*temp).next = 0;
    //free (temp);
}

int lexical ( node* node1, node* node2 )
{
    while ( node1 || node2 )
    {
        if ( !node1 )
            return 1;
        if ( !node2 )
            return 0;
        if ( (*node1).val < (*node2).val )
            return 1;
        if ( (*node2).val < (*node1).val )
            return 0;
        
        node1 = (*node1).next;
        node2 = (*node2).next;
    }

    return 0;
}