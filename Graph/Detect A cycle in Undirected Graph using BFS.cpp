#include <bits/stdc++.h>

bool bfs(int node,vector<int>adj[],vector<int>&vis){

    queue<pair<int,int>>q;
    q.push({node,-1});
    vis[node]=1;

    while(!q.empty()){
        int ele=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto it:adj[ele]){
            if(!vis[it]){
                q.push({it,ele});
                vis[it]=1;
            }
            else{
                if(it!=parent) return true;
            }
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
        if(bfs(i,adj,vis)) return "Yes";
    }
    return "No";
}
