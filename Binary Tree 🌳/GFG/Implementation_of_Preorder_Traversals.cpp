#include <bits/stdc++.h>

using namespace std;

//Data Structure
struct Node {
    int key;
    Node *left;
    Node *right;

    //Constructor
    Node (int x){
        key = x;
        left = right = NULL;
    }
};


//Function - Recursive

void recusiveTraversal(Node *root){

    if(root != NULL){

        cout<<root->key<<" ";
        recusiveTraversal(root->left);
        recusiveTraversal(root->right);

    }

}


//Driver Function
int main(){

    Node *root = new Node(10);

    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->right->left = new Node(70);
    root->left->right->right = new Node(80);

    root->right = new Node(30);
    root->right->right = new Node(60);

    recusiveTraversal(root);

    return 0;
}