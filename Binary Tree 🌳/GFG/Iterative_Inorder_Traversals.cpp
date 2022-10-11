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


//ITERATIE INORDER TRAVERSAL FUNCTION
void iterativeInorder(Node *root ){

    stack<Node *> s;
    Node *curr = root;

    while(curr != NULL || s.empty() == false){

            //Pushing All the left nodes first 
            while(curr != NULL){
                s.push(curr);
                curr = curr->left;
            }

            curr = s.top();
            s.pop();

            cout<<curr->key<<" ";
            curr = curr->right;
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

    iterativeInorder(root);


}