#include <bits/stdc++.h>

using namespace std;


struct Node  {

    int key ;
    Node *left;
    Node *right;

    Node ( int x ){
        key = x;
        left = right = NULL;
    }

};


//Function
void distance(Node *root, int k ){

//Base Case
if(root == NULL){
    return;
}

    if(k == 0){
        cout<<root->key<<" ";
    }

else{

 distance(root->left , k-1);
 distance(root->right, k-1);
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

    int k = 2;
    distance(root, k);

    return 0;
}