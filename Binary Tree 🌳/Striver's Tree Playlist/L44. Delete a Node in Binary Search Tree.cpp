
BinaryTreeNode<int> *finalright(BinaryTreeNode<int> *root){
    if(root->right == nullptr){
        return root;
    }
    finalright(root->right);
}

BinaryTreeNode<int> *helper(BinaryTreeNode<int>* root){
    
    if(root->left == nullptr){ return root->right; }
    if(root->right == nullptr){ return root->left; }
    
   // BinaryTreeNode<int> *rightChild = root->right;
    BinaryTreeNode<int> *lastRight  = finalright(root->left);
    lastRight->right = root->right;
    
    return root->left;
}

BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int key){
    // Write your code here.
    if(root == nullptr){ return nullptr; }
    if(root->data == key){ return helper(root); }
    
    BinaryTreeNode<int> * dummy = root;
    
    while (root != nullptr){
        if(root->data  >  key){
            if(root->left != nullptr and root->left->data == key){
                root->left = helper(root->left);
            }
            else{
                root = root->left;
            }
        }
        else{
            if(root->right != nullptr and root->right->data == key){
                root->right = helper(root->right);
            }
            else{
                root = root->right;
            }
        }
    }
    return dummy;
}
