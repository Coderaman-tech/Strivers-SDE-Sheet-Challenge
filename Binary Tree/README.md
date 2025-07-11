# 1. Inorder Traversal

## By Iterative

In inorder traversal, the tree is traversed in this way: root, left, right. We first visit the left child, after returning from it we print the current node value, then we visit the right child. The fundamental problem we face in this scenario is that there is no way that we can move from a child to a parent. To solve this problem, we use an explicit stack data structure. While traversing we can insert node values to the stack in such a way that we always get the next node value at the top of the stack.

## By Recusion

We first recursively visit the left child and go on till we find a leaf node.

Then we print that node value.

Then we recursively visit the right child.

If we encounter a node pointing to NULL, we simply return to its parent.

# 2. Preorder Traversal

## By Iterative

In preorder traversal, the tree is traversed in this way: root, left, right. When we visit a node, we print its value, and then we want to visit the left child followed by the right child. The fundamental problem we face in this scenario is that there is no way that we can move from a child to a parent. To solve this problem, we use an explicit stack data structure. While traversing we can insert node values to the stack in such a way that we always get the next node value at the top of the stack.

## By Recusion

We first visit the root node and before visiting its children we print its value.

After this, we recursively visit its left child.

Then we recursively visit the right child.

If we encounter a node pointing to NULL, we simply return to its parent.

# 3. Postorder Traversal

## By Two stack

 In postorder traversal, the tree is traversed in this way: left, right, root. We first visit the left child, after returning from it we visit the right child, and after returning from both of them, we print the value of the current node. The fundamental problem we face in this scenario is that there is no way that we can move from a child to the parent using as our node points to only children and not to the parent. To solve this problem, we use an explicit stack data structure. While traversing we can insert node values to the stack in such a way that we always get the next node value at the top of the stack.

 ## By one stack

 First we need to understand what we do in a postorder traversal. We first explore the left side of the root node and keep on moving left until we encounter a node pointing to NULL. As now there is nothing more to traverse on the left, we move to the immediate parent(say node P) of that NULL node. Now we again start our left exploration from the right child of that node P. We will print a node’s value only when we have returned from its both children.

# 4. LeftView and RightView Of Binary Tree
In the Left view code first, you have to call the recursive function for the Left than the right node
Initially if level is equal to the size of vector then push the val of root into it then call recursion as mentioned above.

AND

In the Right view code first, you have to call the recursive function for the right than the left node
Initially if level is equal to the size of vector then push the val of root into it then call recursion as mentioned above.

# 5. Vertical Order Traversal of Binary Tree
Vertical order can be tracked by same approach as top or bottom view but here we have to also take care of multiple nodes comes into the savel level in same vertical line and for that we use 2d map which insert node on the basis of vertical and level. Starting with the root node, we enqueue it with initial vertical and level values (0, 0). During traversal, for each dequeued node, we update the map by inserting the node value at its corresponding coordinates and enqueue its left and right children with adjusted vertical and level information. When traversing to the left child, the vertical value decreases by 1 and the level increases by 1, while traversal to the right child leads to an increase in both vertical and level by 1.

