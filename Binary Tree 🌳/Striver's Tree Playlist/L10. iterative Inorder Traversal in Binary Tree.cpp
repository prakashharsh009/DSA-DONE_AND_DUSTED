vector<int> inOrder(TreeNode *root){

  stack<TreeNode *> s;
  vector<int> res;
  TreeNode *node = root;
  
  while (true){
    if(node != nullptr){
      s.push(node);
      node = node->left;
    }
    else{
      if(s.empty()){ break; }
      node = s.top();
      s.pop();
      res.push_back(node->data);
      node = node->right;
    }
  }
  return res;
}
