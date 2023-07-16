void dfs(int node,vector<int>adj[], vector<int>&vis, vector<int>&v){

    vis[node]=1;
    v.push_back(node);

    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,v);
        }
    }
}



vector<vector<int>> depthFirstSearch(int v, int e, vector<vector<int>> &edges)
{
    // Write your code here

    vector<vector<int>>ans;
    vector<int>vis(v,0);
    vector<int>adj[v];

    for(auto it:edges){
        int u=it[0];
        int v=it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<v;i++){
        vector<int>v1;
        if(!vis[i]){
          dfs(i,adj,vis,v1);
          ans.push_back(v1);
        }
    }
    return ans;
}
