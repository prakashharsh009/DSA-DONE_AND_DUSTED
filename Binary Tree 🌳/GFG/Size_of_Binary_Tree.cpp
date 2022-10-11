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

//Function

int getSize(Node *root){

    if(root == NULL){
        return 0;
    }

    return 1 + getSize(root->left) + getSize(root->right);
    

}



//Driver Function
int main(){

    Node *root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    
    root->right->right = new Node(60);

    cout<<getSize(root);

    return 0;
}