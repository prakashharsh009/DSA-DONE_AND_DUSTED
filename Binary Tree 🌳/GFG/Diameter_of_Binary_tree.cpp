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

//Auxiliary Function

int height(Node *root){

if(root == NULL){
    return 0;
}
return max(height(root->left),height(root->right)) + 1;

}


//Naive - O(n^2) approach
int diameterofTree(Node *root){

if(root == NULL){
    return 0;
}

int d1 = 1 + height(root->left) + height(root->right);

int d2 = diameterofTree(root->left);

int d3 = diameterofTree(root->right);

return max(d1, max(d2,d3));

}



//Efficient Approach - O(n^2)
int res = 0;

int height2(Node *root){

    if(root == NULL){
        return 0;

    }

    int lh = height2(root->left);
    int rh = height2(root->right);

    res = max(1 + lh + rh , res);

    return 1 + max(lh,rh);
}



//Driver Function
int main(){

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->left->left = new Node(60);

    height2(root);
    cout<<res;
    return 0;
}