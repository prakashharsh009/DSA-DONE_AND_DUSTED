
int findMaxDist( map<BinaryTreeNode<int> *,BinaryTreeNode<int>*> &mpp, BinaryTreeNode<int> *target){
    
    queue<BinaryTreeNode<int>*> q;
    q.push(target);
    map<BinaryTreeNode<int>*, int> visited;
    visited[target] = 1;
    int maxi = 0;
    while (!q.empty()){
        int flag = 0;
        int sz = q.size();
      for (int i = 0 ; i < sz ; i++){
        auto node  = q.front();
        q.pop();
        if(node->left and !visited[node->left]){
            flag = 1;
            visited[node->left] = 1;
            q.push(node->left);
        } 
        if(node->right and !visited[node->right]){
            flag = 1;
            visited[node->right] = 1;
            q.push(node->right);
        }
        
        if(mpp[node] and !visited[mpp[node]]){
            flag = 1;
            visited[mpp[node]] = 1;
            q.push(mpp[node]);
        }
    }
          if(flag) maxi++;
   }
     return maxi;
}
BinaryTreeNode<int>* bfsMapToParent(BinaryTreeNode<int>* root, 
                                     map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> &mpp, int start) {
    queue<BinaryTreeNode<int>*> q; 
    q.push(root); 
    BinaryTreeNode<int>* res; 
    while(!q.empty()) {
        BinaryTreeNode<int>* node = q.front(); 
        if(node->data == start) res = node; 
        q.pop(); 
        if(node->left) {
            mpp[node->left] = node; 
            q.push(node->left); 
        }
        if(node->right) {
            mpp[node->right] = node;
            q.push(node->right); 
        }
    }
    return res; 
}
int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    // Write your code here
    map<BinaryTreeNode<int> *,BinaryTreeNode<int>*> mpp;
    BinaryTreeNode<int> *target = bfsMapToParent(root,mpp,start);
    int maxTime = findMaxDist(mpp, target);
    return maxTime;
}
