
#include <bits/stdc++.h>
using namespace std;




class Solution {
  public:
  
  void dfs(int row,int col,int delrow[],int delcol[] , vector<vector<int>>&vis, vector<vector<int>>&grid,vector<pair<int,int>>&v,int n,int m,
  int brow,int bcol){
      
      vis[row][col]=1;
      v.push_back({row-brow,col-bcol});
      
      for(int i=0;i<4;i++){
          int nrow=row+delrow[i];
          int ncol=col+delcol[i];
          if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol])
          dfs(nrow,ncol,delrow,delcol,vis,grid,v,n,m,brow,bcol);
      }
      
  }
  
  
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        
        set<vector<pair<int,int>>>s;
        
        int delrow[]={-1,0,1,0};
        int delcol[]={0,-1,0,1};
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]){
                    vector<pair<int,int>>v;
                    dfs(i,j,delrow,delcol,vis,grid,v,n,m,i,j);
                    s.insert(v);
                }
            }
        }
        return s.size();
    }
};

s
