#include <bits/stdc++.h> 

void bfs(int node, vector<int>adj[], vector<int>&vis, vector<int>&ans){

   queue<int>q;
    q.push(node);
    vis[node]=1;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
}

vector<int> BFS(int v, vector<pair<int, int>> edges)
{
    // Write your code here

    vector<int>ans;
    vector<int>adj[v];
    vector<int>vis(v,0);

    for(auto it:edges){
        int u=it.first;
        int v=it.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0;i<v;i++){
        sort(adj[i].begin(),adj[i].end());
    }
    
    for(int i=0;i<v;i++){
        if(!vis[i]){
            bfs(i,adj,vis,ans);
        }
    }
    return ans;
}
