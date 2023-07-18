#include <bits/stdc++.h> 


vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<int>adj[v];
    for(auto it:edges){
        int u=it[0];
        int v=it[1];

        adj[u].push_back(v);
       
    }
    vector<int>indegree(v,0);
    vector<int>ans;
    queue<int>q;
    for(int i=0;i<v;i++){
        for(auto it:adj[i])
        indegree[it]++;
    }

    for(int i=0;i<v;i++){
        if(indegree[i]==0)
        q.push(i);
    }

    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0)
            q.push(it);
        }
    }

    return ans;
}
