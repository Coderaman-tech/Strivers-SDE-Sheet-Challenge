# 2. DFS
DFS is a traversal technique which involves the idea of recursion and backtracking. DFS goes in-depth, i.e., traverses all nodes by going ahead, and when there are no further nodes to traverse in the current path, then it backtracks on the same path and traverses other unvisited nodes. 

# 3. BFS
For doing BFS traversal use a queue and insert first starting node and take them and insert its adjacent into a queue and mark them visited.Take a element one by one by pop() with storing them into ans vector and push into the queue only if unvisited and mark them visited.Do it till queue is empty.

# 4. Detect A cycle in Undirected Graph using BFS
The intuition is that we start from a node, and start doing BFS level-wise, if somewhere down the line, we visit a single node twice, it means we came via two paths to end up at the same node. It implies there is a cycle in the graph because we know that we start from different directions but can arrive at the same node only if the graph is connected or contains a cycle, otherwise we would never come to the same node again.So maintain a queue for current node and its parent if the aj node is visited and the parent of it in queue is not same as its original parent then it contains cycle.

# 5. Create Detect A cycle in Undirected Graph using DFS.cpp
Same as previous approach here only use DFS to solve the problem.
