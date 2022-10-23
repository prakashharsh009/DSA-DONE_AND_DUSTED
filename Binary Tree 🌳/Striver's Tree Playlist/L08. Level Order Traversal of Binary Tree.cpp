void levelOrderTraversal(TreeNode *root){
  
  if(root == nullptr){
    return; 
  }
  queue<TreeNode*> q;
  q.push(root);
  
  while(!q.empty()){
    TreeNode *curr = q.front();
    q.pop();
    
    if(curr->left){
      q.push(curr->left);
    }
    if(curr->left){
      q.push(curr->left);
    }
  }
}

//Striver's Approach
vector<vector<int>> levelOrder(TreeNode *root){
vector<vector<int>> finalres;  
  if(root == nullptr){
    return finalres;
  }
  queue<TreeNode *>q;
  q.push(root);
  
  while (!q.empty()){
    int sz = q.size();
    vector<int> level;
    for (int i = 0 ; i <  sz ; i++){
      TreeNode *curr = q.front();
      q.pop();
      level.push_back(curr->data);
      if(curr->left){q.push(curr->left);}
      if(curr->right){q.push(curr->right);}
    }
    finalres.push_back(level);
  } 
  return finalres;
}
      
