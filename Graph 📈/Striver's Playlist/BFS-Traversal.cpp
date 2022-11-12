vector <int> bfsTraversal(int v, vector<int> adj[]){

  int vis[v+1] = {0}; //Visited array
  
  for(int i  = 0  ; i <  v ; i++){  //optional step in cpp (not required in JAVA)
    vis[i] = false;
  }
  
  queue<int> q;
  vis[0] = true; //here in this question no source vertex is given so we will use 0 as a source/starting point of traversal
  
  q.push(0);
  
  while(!q.empty()){
    
    int u = q.front();
    q.pop();
    
    cout<<u<<" " //or store it in a resultant container
      
    for (int u  : adj[u]){
      if(!vis[u]){
        vis[u] = true;
        q.push(u);
      }
      
    }
  // if required -   return res;
  }
