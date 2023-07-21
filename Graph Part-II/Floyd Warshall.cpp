int floydWarshall(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.

    vector<vector<int>>dist(n+1,vector<int>(n+1,1e9));
    for(auto it:edges){
        int u=it[0],v=it[1],wt=it[2];
        dist[u][v]=wt;
    }

    for(int i=1;i<=n;i++){
       dist[i][i]=0;
    }

    for(int via=1;via<=n;via++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
               if(dist[i][via]!=1e9 && dist[via][j]!=1e9)
                dist[i][j]=min(dist[i][j],dist[i][via]+dist[via][j]);
            }
        }
    }
    return dist[src][dest];
}
