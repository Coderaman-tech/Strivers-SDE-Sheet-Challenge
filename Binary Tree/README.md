# 1. Inorder Traversal

By Iterative
In inorder traversal, the tree is traversed in this way: root, left, right. We first visit the left child, after returning from it we print the current node value, then we visit the right child. The fundamental problem we face in this scenario is that there is no way that we can move from a child to a parent. To solve this problem, we use an explicit stack data structure. While traversing we can insert node values to the stack in such a way that we always get the next node value at the top of the stack.

By Recusion
We first recursively visit the left child and go on till we find a leaf node.
Then we print that node value.
Then we recursively visit the right child.
If we encounter a node pointing to NULL, we simply return to its parent.
