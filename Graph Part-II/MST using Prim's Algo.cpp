#include <bits/stdc++.h> 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // Write your code here.
    vector<pair<pair<int, int>,int>>ans;
    vector<vector<int>>adj[n+1];

    for(auto it:g){
        int u=it.first.first;
        int v=it.first.second;
        int wt=it.second;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
   
   pq.push({0,{1,-1}});
   vector<int>vis(n+1,0);

   while(!pq.empty()){
       auto it=pq.top();
       pq.pop();
       int wt=it.first;
       int node=it.second.first;
       int parent=it.second.second;

       if(vis[node]!=0) continue;
       vis[node]=1;
       if(parent!=-1)
       ans.push_back({{node,parent},wt});

        for(auto it:adj[node]){
            int adjNode=it[0];
            int adjWt=it[1];
            if(!vis[adjNode]){
                pq.push({adjWt,{adjNode,node}});
            }
        }

   }
   
    return ans;
}
