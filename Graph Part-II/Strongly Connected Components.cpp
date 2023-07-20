#include <bits/stdc++.h>

void dfs(int node,stack<int>&st,vector<int>adj[],vector<int>&vis){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it])
        dfs(it,st,adj,vis);
    }
    st.push(node);
}

void dfs1(int node,vector<int>adj[],vector<int>&vis,vector<int>&v){
     vis[node]=1;
     v.push_back(node);    
    for(auto it:adj[node]){
        if(!vis[it])
        dfs1(it,adj,vis,v);
    }
}

vector<vector<int>> stronglyConnectedComponents(int n, vector<vector<int>> &edges)
{
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>adj[n];
    for(auto it:edges){
        adj[it[0]].push_back(it[1]);
    }
    vector<int>vis(n,0);
    stack<int>st;
    for(int i=0;i<n;i++){
        if(!vis[i])
        dfs(i,st,adj,vis);
    }
    
    vector<int>revadj[n];

    for(int i=0;i<n;i++){
        vis[i]=0;
        for(auto it:adj[i]){
            revadj[it].push_back(i);
        }
    }

   while(!st.empty()){
       int node =st.top();
       st.pop();
       if(!vis[node]){
           vector<int>v;
           dfs1(node,revadj,vis,v);
           ans.push_back(v);
       }
   }
   return ans;
}
