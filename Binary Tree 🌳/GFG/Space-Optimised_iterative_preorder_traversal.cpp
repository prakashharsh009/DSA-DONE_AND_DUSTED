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

//Function

void spaceOptimisedpreorder(Node *root)
{
    if(root == NULL){ return; }

    stack <Node *> s;

    Node *curr = root;

    while (curr != NULL || s.empty() == false){

        while (curr != NULL){

            cout<<curr->key<<" ";

            if(curr->right != NULL){ s.push(curr->right); }

            curr = curr->left;

        }
        if(s.empty() == false ){
            curr = s.top();
            s.pop();
        }
    }

}

// Driver Function
int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);

    spaceOptimisedpreorder(root);

    return 0;
}