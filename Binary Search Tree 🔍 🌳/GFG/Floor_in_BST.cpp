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


    //RECURSIVE METHOD

    

Node * recursiveFloor(Node *root , int n){

    if(root == NULL || root->key == n){
        return root;
    }

    if(root->key > n){
        return recursiveFloor(root->left , n);
    }
    else return recursiveFloor(root->right , n);

    return root;
}


//Iterative 

Node * iterativeFloor(Node *root , int n ){

    Node *res = NULL;

    while(root != NULL){
        if(root->key  == n){
            return root;
        }
        else if(root->key > n){
            root = root->left;
        }
        else{
            res = root;
            root = root->right;
        }
    }
return res;
}


//Driver Function
int main(){


    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(30);

   Node *head = iterativeFloor(root , 24 );

    cout<<head->key;

    return 0;
}