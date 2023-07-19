#include <bits/stdc++.h>

bool dfs(int node,int color,vector<int>&col,vector<int>adj[]){
  
  col[node]=color;

	for(auto it:adj[node]){
		if(col[it]==-1){
			if(!dfs(it,!color,col,adj)) return false;
		}
		else if(col[it]==color)
		return false;
	}
	return true;
}


bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
	int n=edges.size();
	vector<int>adj[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(edges[i][j]==1){
				adj[i].push_back(j);
				adj[j].push_back(i);
			}
		}
	}

	vector<int>col(n,-1);
	for(int i=0;i<n;i++){
		if(col[i]==-1){
		if(dfs(i,0,col,adj)) return true;
		}
	}
	return false;
}
