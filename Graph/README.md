# 2. DFS
DFS is a traversal technique which involves the idea of recursion and backtracking. DFS goes in-depth, i.e., traverses all nodes by going ahead, and when there are no further nodes to traverse in the current path, then it backtracks on the same path and traverses other unvisited nodes. 

# 3. BFS
For doing BFS traversal use a queue and insert first starting node and take them and insert its adjacent into a queue and mark them visited.Take a element one by one by pop() with storing them into ans vector and push into the queue only if unvisited and mark them visited.Do it till queue is empty.

# 4. Detect A cycle in Undirected Graph using BFS
The intuition is that we start from a node, and start doing BFS level-wise, if somewhere down the line, we visit a single node twice, it means we came via two paths to end up at the same node. It implies there is a cycle in the graph because we know that we start from different directions but can arrive at the same node only if the graph is connected or contains a cycle, otherwise we would never come to the same node again.So maintain a queue for current node and its parent if the aj node is visited and the parent of it in queue is not same as its original parent then it contains cycle.

# 5. Create Detect A cycle in Undirected Graph using DFS.cpp
Same as previous approach here only use DFS to solve the problem.

# 6. Detect A cycle in a Directed Graph using DFS
Here we can use path visited array which track the cycle occuring or not in the same path.

# 7. Detect A cycle in a Directed Graph using BFS
It is done by Khan's Algorithm used in Topo sort.If DAG contains a cycle then it is impossible to find all the node in topo sort,so,just count the size of topo sort if it equal to the no. of nodes then graph doesn't contain cycle and if not then it contains the cycle.

# 8. Topological Sort BFS
In this we use concept of indegree.If node has indegree 0,it ensures that noone will call him.So firstly put all node whose indegree is 0 in queue and pop one by one and reduce its adjcacent node indegree and push node only if node has indegree 0. This is Kahn's Algorithm.

# 9. Topological Sort DFS
For topo sort by dfs, we use stack which insert the node after all its recursion call over means at the end which ensures that there will be noone present to call that node which is a statement of toposort that u appears before v and in ordering that v can't call by anyone.

# 10. Number of Distinct Islands
Every island has a dimension so store it in set.To found two island same or not use base row and col which helps to differentiate between two islands.

# 11. Bipartite Check using BFS
Use a color array with -1 all entry in it.Use queue for BFS , store first node in queue and mark its color 0 and go to its adjacent and mark opposite to the color of node which pop from the queue . If the adjcacent color is visited and color equal to the node then it is not bipartite.If queue is empty then graph is bipartite.

# 12. Bipartite Check using DFS
Just take one variable color which give current color should insert and col array which maintain all node color and do DFS.
