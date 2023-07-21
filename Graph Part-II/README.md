# 1. Strongly Connected Components – Kosaraju’s Algorithm
A component is called a Strongly Connected Component(SCC) only if for every possible pair of vertices (u, v) inside that component, u is reachable from v and v is reachable from u.

See this [https://takeuforward.org/graph/strongly-connected-components-kosarajus-algorithm-g-54/]

# 2. Dijkstra's shortest path
Use priority queue to find the minimum distance from the src node to all node.Pop one by one element and update its adj node distance if it is minimum then previous till becomes queue empty do operation.

# 3. Bellman Ford
It is used only for directed graph and able to find negative cycle. Just apply operation of all the edges at N-1 edges and found the distance of src node to all nodes.In N iteration if distance vector is reduced then it means graph contains contain negative cycle.

# 4. Floyd Warshall
It is only for Directed graph and able to find negative cycle.

Make a matrix of n*n nodes and put 1e9 in it and 0 in i,i position and do traversal via all node in the matrix of distance at the end we can find the minimum distance between all node. To find graph contain or not - traverse the matrix if i,i position is <0 then it means that there is negative cycle because minimum dist between same node is always be 0.

# 5. MST using Prim's Algo
For find the MST,Prim's algo visit all the edges and choose minimum edges on by one and for it we use minimum priority queue.Once a node is visited then we don;t follow that path because previously path is the minimum edges of the MST.
