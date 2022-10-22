void preOrder(TreeNode *node){
  
  if(node == nullptr){
    return;
  }
  
  cout<<node->data<<" ";
  preOrder(node->left);
  preOrder(node->right);
  
}
