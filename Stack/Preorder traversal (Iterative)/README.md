# Preorder traversal (Iterative)
Given a binary tree. Find the preorder traversal of the tree <b>without using recursion</b>.

## Examples
```
Input:
           1
         /   \
        2     3
      /  \
     4    5
Output: 1 2 4 5 3
Explanation:
Preorder traversal (Root->Left->Right) of 
the tree is 1 2 4 5 3.
```
```
Input:
            8
          /   \
         1      5
          \    /  \
           7  10   6
            \  /
            10 6
Output: 8 1 7 10 5 10 6 6 
Explanation:
Preorder traversal (Root->Left->Right) 
of the tree is 8 1 7 10 5 10 6 6.
```

## Constraints
* 1 ≤ Number of nodes ≤ 10<sup>5</sup>
* 1 ≤ Data of a node ≤ 10<sup>5</sup>
