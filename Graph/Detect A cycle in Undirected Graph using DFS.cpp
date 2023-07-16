#include <bits/stdc++.h>

bool dfs(int node,int parent,vector<int>adj[],vector<int>&vis){

    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(dfs(it,node,adj,vis)) return true;
        }
        else{
            if(it!=parent) return true;
        }
    }
    return false;
}



string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    vector<int>adj[n+1];
    vector<int>vis(n+1);
    for(int i=0;i<m;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1;i<=n;i++){
        if(!vis[i])
        if(dfs(i,-1,adj,vis)) return "Yes";
    }
    return "No";
}
