int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int floor  = -1;
    while (root){
        if(root->val == X){
            floor = root->val;
            return floor;
        }
        else if(root->val < X){
            floor = root->val;
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
   return floor;
}
