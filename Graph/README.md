# 2. DFS
DFS is a traversal technique which involves the idea of recursion and backtracking. DFS goes in-depth, i.e., traverses all nodes by going ahead, and when there are no further nodes to traverse in the current path, then it backtracks on the same path and traverses other unvisited nodes. 

# 3. BFS
For doing BFS traversal use a queue and insert first starting node and take them and insert its adjacent into a queue and mark them visited.Take a element one by one by pop() with storing them into ans vector and push into the queue only if unvisited and mark them visited.Do it till queue is empty.
