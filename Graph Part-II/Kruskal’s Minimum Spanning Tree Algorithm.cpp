#include <bits/stdc++.h> 

class DisjointSet{
	vector<int>parent,rank;

	public:
	DisjointSet(int n){
		parent.resize(n+1);
		for(int i=1;i<=n;i++)
		parent[i]=i;
		rank.resize(n+1,0);
	}

	int ultiparnt(int u){
		if(parent[u]==u) return u;
		return parent[u]=ultiparnt(parent[u]);
	}

	void unionbyrank(int u,int v){
		int ult_u=ultiparnt(u);
		int ult_v=ultiparnt(v);
		if(ult_u==ult_v) return;

		if(rank[ult_u]<rank[ult_v])
		parent[ult_u]=ult_v;
		else if(rank[ult_u]>rank[ult_v])
		parent[ult_v]=ult_u;
		else{
			parent[ult_u]=ult_v;
			rank[ult_v]++;
		}
	}
};

int kruskalMST(int n, int m, vector<vector<int>> &graph) {
	// Write your code here.

	vector<vector<int>>adj[n+1];
	for(auto it:graph){
		int u=it[0],v=it[1],wt=it[2];
		adj[u].push_back({v,wt});
		adj[v].push_back({u,wt});
	}

	DisjointSet ds(n);
	int sum=0;

	vector<pair<int,pair<int,int>>>edge;
	for(int i=1;i<=n;i++){
		for(auto it:adj[i]){
			int node=i;
			int adjnode=it[0];
			int adjwt=it[1];
			edge.push_back({adjwt,{node,adjnode}});
		}
	}

	sort(edge.begin(),edge.end());

	for(auto it:edge){
		int u=it.second.first;
		int v=it.second.second;
		int wt1=it.first;

		if(ds.ultiparnt(u)!=ds.ultiparnt(v)){
			sum+=wt1;
			ds.unionbyrank(u,v);
		}
	}
	return sum;
}
