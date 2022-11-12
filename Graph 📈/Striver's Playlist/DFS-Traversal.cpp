#include <bits/stdc++.h>
using namespace std;

void DFS(vector<int> adj[] , vector<int> &res , int source , int &vis[]){
  vis[source] = true;
  res.push_back(source);
  
  for(int u : adj[u]){
    if(!vis[u]){
      DFS(adj, res, u , vis);
    }
  }
}

vector<int> DFSTraversal(vector<int> adj[], int v){
  int vis[v+1];
  vector<int> res;
  
  for(int i = 0 ; i < v; i++){
    vis[i] = false;
  }
  DFS(adj, res, 0, vis);
}
