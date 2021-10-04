# Postorder Traversal (Iterative)

Given a binary tree. Find the postorder traversal of the tree <b>without using recursion</b>.

## Examples
```
Input:
           1
         /   \
        2     3
      /  \
     4    5

Output: 4 5 2 3 1
Explanation:
Postorder traversal (Left->Right->Root) of 
the tree is 4 5 2 3 1.
```
```
Input:
             8
          /      \
        1          5
         \       /   \
          7     10    6
           \   /
            10 6

Output: 10 7 1 6 10 6 5 8 
Explanation:
Inorder traversal (Left->Right->Root) 
of the tree is 10 7 1 6 10 6 5 8 .
```

## Constraints
* 1 <= Number of nodes <= 10<sup>5</sup>
* 1 <= Data of a node <= 10<sup>5</sup>
