#include <bits/stdc++.h>


bool dfs(int node, vector<int>&vis, vector<int>pathVis, vector<int>adj[]){
  
  vis[node]=1;
  pathVis[node]=1;

  for(auto it:adj[node]){
    if(!vis[it])
    if(dfs(it,vis,pathVis,adj)) return true;
    if(pathVis[it]) return true;
  }
  
  pathVis[node]=0;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.

  vector<int>adj[n+1];
  vector<int>vis(n+1,0);
   vector<int>pathVis(n+1,0);
  
  for(auto it:edges){
    adj[it.first].push_back(it.second);
  }

  for(int i=1;i<=n;i++){
    if(!vis[i]){
        if(dfs(i,vis,pathVis,adj))
        return true;
    }
  }
 return false;
}
