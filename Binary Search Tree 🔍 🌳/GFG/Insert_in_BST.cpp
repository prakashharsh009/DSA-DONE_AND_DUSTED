#include <bits/stdc++.h>

using namespace std;

// Data Structure
struct Node
{

    int key;

    Node *left;
    Node *right;

    Node(int x)
    {

        key = x;
        left = right = NULL;
    }
};

//Function - Recursive 

Node *insertBSTrecursive(Node *root , int n){

    if(root == NULL){
        return new Node(n);
    }

    else if(root->key > n){
         root->left = insertBSTrecursive(root->left , n);
     }

    else if(root->key < n){
        root->right = insertBSTrecursive(root->right , n);
    }

    return root;
}

// Function - Iterative

Node *iterativeInsert(Node *root , int n){

Node *newNode = new Node(n);

Node *curr = root;
Node *parent = NULL;
//Immediate parent node to the current node

while (curr != NULL){

parent = curr;

if(curr->key > n){
    curr = curr->left;
}
else if(curr->key < n){
    curr = curr->right;
}
else return root;

//loop ends
}

//linking the newNode 

if(parent == NULL){
    return newNode;
    //if tree empty 

}
if(parent->key > n){
    parent->left = newNode;
}

if (parent->key < n)
{
    parent->right = newNode;
}

return root;

}




//Auxiliary Function
void inorderTraversal(Node *root){

    if(root == NULL){
        return;
    }

    inorderTraversal(root->left);
    cout<<root->key<<" ";
    inorderTraversal(root->right);

}


// Driver Function
int main()
{

    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);

    root->right->left = new Node(12);
    root->right->right = new Node(18);
   

    Node *head = iterativeInsert(root , 20);

    inorderTraversal(head);

    return 0;
}
