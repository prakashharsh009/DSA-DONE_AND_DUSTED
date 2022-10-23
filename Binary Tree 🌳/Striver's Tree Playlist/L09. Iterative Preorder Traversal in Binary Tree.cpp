vector<int> preOrder(TreeNode *root){
  vector<int> preOrder;
  if(root == nullptr){ return preOrder; }
  
  stack<TreeNode *> s;
  s.push(root);
  
  while(!s.empty(){
    root = s.top();
    s.pop();
    
    preOrder.push_back(root->val);
    if(root->right){s.push(root->right);
    if(root->left){s.push(root->left);
  }
  return preOrder;
}
