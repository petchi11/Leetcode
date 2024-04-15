# Recursive Pre-Order Tree Traversal

## Approach

A `leaf` node is a node with no children. (Hence, both point to null).

appending a digit to `number` -> (`number`*10) + value. 

- Traverse through the path from `root` to `leaf` node.
- While Traversing add each digit to the variable `number` to form a number for each sub-tree.
- return the addition of the numbers from the left and right sub-trees.

### Implementation
- create a variable `number` and assign it the value `0`.
- if `root` is null
    - return 0
- if `root->left` and `root->right` nodes are null, then it's a `leaf` node
    - append the value in `root->val` to `number` and return it.
- if both the above cases are false then there is further path. 
    - append the value in `root->val` to `number`.
- call the left and right sub-trees with `number` and return the addition of the values returned from both the calls. 

### Time Complexity 

- The Time Complexity of this problem is `O (n).` where `n` is the number of `nodes` in the tree.
### Space Complexity

- `O (h)`, keep track of the recursive stack, where `h` is the `height` of the tree.