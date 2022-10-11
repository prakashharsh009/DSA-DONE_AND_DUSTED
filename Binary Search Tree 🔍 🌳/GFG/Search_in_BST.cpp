#include <bits/stdc++.h>

using namespace std;

//Data Structure
struct Node {

int key;

Node *left;
Node *right;

Node (int x){
    
    key = x;
    left = right = NULL;
}
};

bool searchBST(Node *root , int key){

    if(root == NULL){
        return false;
    }

    if( root->key == key){
        return true;
    }

    if(key > root->key){
       return  searchBST(root->right, key);
    }

    if(key < root->key){
        return searchBST(root->left, key);
    }
return false;
}


//Driver Function
int main(){

    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);

    root->right = new Node(20);
    root->right->left = new Node(18);

    root->right->left->left = new Node(16);

    root->right->right = new Node(80);

    cout<<searchBST(root , 16);

    return 0;   
}