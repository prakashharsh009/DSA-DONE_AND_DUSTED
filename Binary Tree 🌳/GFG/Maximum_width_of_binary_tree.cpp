#include <bits/stdc++.H>

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
int maxWidth(Node *root){

    if( root == NULL){
        return 0;
    }

    queue <Node *> q;
    int currSize = 1;


    q.push(root);

    while(q.empty()  == false){

        Node *curr = q.front();
        
        q.pop();

        if(curr->left != NULL){
            q.push(curr->left);

        }
        if(curr->right != NULL){
            q.push(curr->right);
        }

        if(currSize < q.size()){
            currSize = q.size();
        }

    }
    return currSize;
}



//Driver Function
int main(){

    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->right = new Node(30);
    cout<<maxWidth(root);


    return 0;
}