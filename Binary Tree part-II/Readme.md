# Maximum depth of a Binary Tree
1. I used simple approach using recursion to traverse first left part then right part and for each step increase the counter by one and take maximum of it.This is because for +1 which count the number of nodes just below of it and max function takes the maximum path.
2. There is another approach using Level Order Traversal,we employ a breadth-first approach. Initialise a queue and push the root node. Traverse through the levels and track the depth by counting the number of levels traversed. At each level pop the nodes and push their left and right children, incrementing the depth counter as we explore.This process continues until all levels are traversed at which point the depth variable holds the maximum depth of the tree. 

# Diameter of Binary Tree
## 1. Brute Force Approach
Calculate left and right height of each node and diameter is lh+rh+1 so take maximum of diameter of each node every time. But TC will be O(n*n) because to calculate height many times.
## 2. Optimal Approach
We can find diameter of a node while calculating height which helps to not calculate height many times.By doing that we take a variable diameter and use it via reference and update in every step by taking the maximum of currDiamter with lh+rh+1;
