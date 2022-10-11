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


int countNodes(Node *root){

    int lh = 0;
    int rh = 0;
    Node *curr = root;
    
    while(curr != NULL){
        lh++;
        curr = curr->left;
    }

    curr = root;

    while(curr != NULL){
        rh++;
        curr = curr->right;
    }

    if(lh == rh){
        return pow(2,lh) - 1;
    }

 return 1 + countNodes(root->left) + countNodes(root->right);
}



//Driver Function
int main(){

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    root->left->left = new Node(40);
    root->left->right = new Node(50);

    root->right->left = new Node(60);
    root->right->right = new Node(70);

    root->left->left->left  = new Node(80);
    root->left->right->right = new Node(90);

    root->left->right->left = new Node(100);
    root->left->right->left = new Node(110);

     cout<< countNodes(root);

    return 0;
}