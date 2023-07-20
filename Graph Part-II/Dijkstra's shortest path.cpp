#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int n, int e, int src) {
    // Write your code here.
    vector<pair<int,int>>adj[n];
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(auto it:vec){
        int u=it[0],v=it[1],wt=it[2];
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    vector<int>dist(n,2147483647);
    dist[src]=0;
    pq.push({0,src});

    while(!pq.empty()){
        int d=pq.top().first;
        int node=pq.top().second;
        pq.pop();

        for(auto it:adj[node]){
            int adjdist=it.second;
            int adjnode=it.first;
            if(dist[node]+adjdist<dist[adjnode]){
                dist[adjnode]=dist[node]+adjdist;
                pq.push({dist[adjnode],adjnode});
            }
        }
    }
    return dist;
}
