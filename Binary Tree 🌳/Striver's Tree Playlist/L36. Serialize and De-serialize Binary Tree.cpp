string serializeTree(TreeNode<int> *root)
{
 //    Write your code here for serializing the tree
    
    if(root == nullptr){ return ""; }
    queue<TreeNode<int>*> q;
    q.push(root);
    string s =  "";
    
    while (!q.empty()){
        
        TreeNode<int> *curr = q.front();
        q.pop();
        if(curr == nullptr){ s.append("#,");}
        else{s.append(to_string(curr->data) + ',');}
        
        if(curr != nullptr){
            q.push(curr->left);
            q.push(curr->right);
        }
    }
    return s;
}

TreeNode<int>* deserializeTree(string &serialized)
{
 //    Write your code here for deserializing the tree
    if(serialized.size() == 0){return nullptr; }
    
    stringstream s(serialized);
    
    string str;
    queue<TreeNode<int>*> q;
    getline(s,str,',');
    TreeNode<int>* root = new TreeNode<int>(stoi(str));
    q.push(root);
    
    while (!q.empty()){
        TreeNode<int> *node = q.front();
        q.pop();
       
       getline(s,str,',');
        if(str == "#"){
            node->left = nullptr;
        }
        else{
            TreeNode<int> *leftNode = new TreeNode<int>(stoi(str));
            node->left = leftNode;
            q.push(leftNode);
        }
        getline(s,str,',');
        if(str == "#"){
            node->right == nullptr;
        }
        else{
            TreeNode<int> *rightNode = new TreeNode<int>(stoi(str));
            node->right = rightNode;
            q.push(rightNode);
        }   
    }
    return root;
}
