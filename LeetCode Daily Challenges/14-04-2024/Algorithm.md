# Recursion

## Approach

- we just want to access the value in `leaf` of left nodes.
- so, recursively call the left and right.
- if left is a `leaf node` get it's value. or else then it's a node that might contains a `left leaf`. 
- so, recursively call it's left.
- if you encounter right, we check whether right has a `left node`
    - if it has recursively call it to check whether it has left leaf.
- After getting values from the left and right recursive calls, add the values and return them. since we get only the left leaf's values.
#### Implementation
- create variables `a`, `b`
- if root is `null`
    - assign a to `0`
- else if root is a `leaf node`
    - assign `root->val` (data) to `a`.
- else, recursively call the root->left to find the leaf node's val and assign it to `a`.
- if right has `node`
    - check it has `left node`. recursively.
    - assign the value to `b`.
- else assign `b` to 0 (no left nodes)
- return `a + b`, since we get only the values in left leaves.