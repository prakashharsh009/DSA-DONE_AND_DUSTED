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



//Iterative Version
void leftView(Node *root){

     if(root == NULL){ return ;}

    queue <Node *> q;

    q.push(root);

    while(q.empty() == false ){

        Node *curr = q.front();
        q.pop();

        cout<<curr->key<<" ";
        if(curr->left != NULL){
             q.push(curr->left);
             continue;
         }
        else if(curr->right != NULL){
             q.push(curr->right); 
        }


    }
    
}


//Recursive Version
int maxlevel = 0;

void leftViewRecursive(Node *root, int level){

    if (root == NULL){
        return;
    }

        if(maxlevel < level){
            cout<<root->key<<" ";
            maxlevel = level;
        }
    leftViewRecursive(root->left , level + 1);
    leftViewRecursive(root->right, level +1 );


}

void printLeft(Node *root){

    leftViewRecursive(root , 1);
    
}


// Driver Function
int main()
{

    Node *root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    root->right->right = new Node(60);

    printLeft(root);

    return 0;
}