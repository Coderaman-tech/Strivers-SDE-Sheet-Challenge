# 1. Strongly Connected Components – Kosaraju’s Algorithm
A component is called a Strongly Connected Component(SCC) only if for every possible pair of vertices (u, v) inside that component, u is reachable from v and v is reachable from u.

See this [https://takeuforward.org/graph/strongly-connected-components-kosarajus-algorithm-g-54/]

# 2. Dijkstra's shortest path
Use priority queue to find the minimum distance from the src node to all node.Pop one by one element and update its adj node distance if it is minimum then previous till becomes queue empty do operation.

# 3. Bellman Ford
It is used only for directed graph and able to find negative cycle. Just apply operation of all the edges at N-1 edges and found the distance of src node to all nodes.In N iteration if distance vector is reduced then it means graph contains contain negative cycle.
