#include <bits/stdc++.h>

using namespace std;

//Data Structure
struct Node {

    int key;
    Node *left;
    Node *right;

    Node (int x){
        key = x;
        left = right  = NULL;
    }
};


//Function
void levelTraversal(Node *root) {

    if(root == NULL){
        return;
    }
    queue<Node *> q;

    q.push(root);

    while(q.empty() == false){

        Node *curr = q.front();
        q.pop();
        cout<<curr->key<<" ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }

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


    levelTraversal(root);

    return 0;
}