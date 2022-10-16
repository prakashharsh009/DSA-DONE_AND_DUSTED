bool check(BinaryTreeNode<int> *root, int minval , int maxval){
    if(root == nullptr){ return true; }
    if(root->data >= maxval || root->data <= minval){return false; }
    
    return check(root->left, minval, root->data) and check(root->right, root->data, maxval);
}
bool validateBST(BinaryTreeNode<int>* root) 
{
    // Write your code here
    return check(root, INT_MIN, INT_MAX);
    
}
