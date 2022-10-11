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

int maximumVal(Node *root){

   /* WITHOUT RECURSION 
    if(root == NULL){ return INT_MIN;}

    int res = root->key;

    int leftMax = maximumVal(root->left);
    int rightMax = maximumVal(root->right);

    if(leftMax > res){
        res = leftMax;
    }

    if(rightMax > res){
        res = rightMax;
    }
    return res; */

    //WITH RECURSION

    if(root == NULL){return INT_MIN; }

    return max(root->key, max(maximumVal(root->left), maximumVal(root->right)));

}


//Driver Function
int main(){

    Node *root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    root->right->right = new Node(60);

    cout<<maximumVal(root);

    return 0;
}