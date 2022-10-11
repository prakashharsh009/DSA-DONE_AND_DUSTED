#include <bits/stdc++.h>


using namespace std;

//Data Structure
struct Node {

    int key;

    Node *left;
    Node *right;

    Node (int x){
        key =x;
        right = left  = NULL;
    }

};

//Creating an auxiliary function to check if the "n" input node exists in the tree and push the nodes in the array
bool findPath(Node *root , vector<Node *> &p , int n){

    //Base Case
    if(root == NULL){
        return 0;
    }

    p.push_back(root);
    if(root->key == n){
        return true;
    }

    if(findPath(root->left , p , n) || findPath(root->right , p , n)){
        return true;
    }

    p.pop_back();
    return false;

}


//Function 

Node *lca(Node *root , int n1 , int n2){

    vector<Node *> p1,p2;

    if(findPath(root, p1 , n1) == false || findPath(root , p2 , n2) == false){

        return NULL;
    }

    for(int i = 0 ; i<p1.size() - 1 && i<p2.size() - 1 ; i++){
        if(p1[i+1] != p2[i+1]){
            return p1[i];
        }
    }

    return NULL;

}


Node* lcaTree(Node *root , int n1 , int n2){


    if(root == NULL || root->key == n1 || root->key == n2){
        return root;
    }

    Node *left = lcaTree(root->left , n1 , n2);
    Node *right = lcaTree(root->right , n1 , n2);

    if(left == NULL){
        return right;
    }
    else if(right == NULL){
        return left;
    }

    else{
        return root;
    }

}





//Driver Function
int main(){

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->left->left = new Node(60);

    root->right->right->left = new Node(70);
    root->right->right->right = new Node(80);

    Node *head = lcaTree(root , 60, 70);

    cout<<head->key;
    
    return 0;
}