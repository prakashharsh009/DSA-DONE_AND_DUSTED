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

void iterativePreorder(Node *root){

//if tree is empty
if(root == NULL){ return;}

stack <Node *> s;

s.push(root);

while(s.empty() == false){

    Node *curr = s.top();
    s.pop();
    cout<<curr->key<<" ";
    if(curr->right != NULL){ s.push(curr->right);}
    if(curr->left != NULL){ s.push(curr->left); }

}

}


//Driver Function
int main(){

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    
    iterativePreorder(root);

    return 0;
}