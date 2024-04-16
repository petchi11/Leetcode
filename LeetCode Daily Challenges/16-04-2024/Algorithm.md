## Recursive Traversal

### Approach

- if `depth` equals 1, then
    - create `tree node` 
    - set `root` to point to `tree node->left`.
    return `node`.

- we create a variable `localdepth`.
- base case for recursion is when `root` is `null`
    - return `null`.
- if `localDepth` equals `depth - 1`
    - create a `tree node`.
    - set `root` to point to `tree node`.
    - set `tree node` to point to `root->lef`t and `root->right`.
- else
    - recursively call `left` and `right` subtrees with the `localDepth` increment by `1`. to finding the correct `depth`.
return `root`.

### Complexity Analysis

Time Complexity is `O (n)`. where `n` is the number of nodes in the binary tree.

Space Complexity is `O (x)`. where `x` is the Depth that we need to find to insert our nodes.