/******************************************** ADJACENCY MATRIX ********************************************/

#include < bits/stdc++.h>

using namespace std;

//Driver Function 
int main(){
  
  int n , m ; // N is the number of nodes and m is the number of edges 
  cin>>n>>m;
  
  //Create the Adjacency Matrix;
  int adj[n+1][m+1];
  
  for (int i  = 0 ; i < m ; i++){
    
    int u, int v;
    cin>>u>>v;
    
    adj[u][v] = 1;
    adj[v][u] = 1;  
  }
  return 0;
}


/*************************************** ADJACENCY LIST **************************************************/

#include <bits/stdc++.h>

using namespace std;

//Driver Function 
int main(){
  
  int n , int m;
  cin>>n>>m;
  
  vector<int> adj[n+1]; //Adjacency List
  
  for (int i = 0  ; i < m ; i++){
    int u , v;
    cin>>u>>v;
    
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  return 0;
}

