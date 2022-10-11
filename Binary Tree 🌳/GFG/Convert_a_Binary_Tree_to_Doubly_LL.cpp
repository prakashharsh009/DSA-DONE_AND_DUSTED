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



Node *BtoDLL(Node *root, Node *prev){

    if(root == NULL){
        return root;
    }

    Node *head = BtoDLL(root->left , prev);
    if(prev == NULL){
        head = root;
    }
    else{
        root->left = prev;
        prev->right = root;

    }
    prev = root;
    BtoDLL(root->right, prev);

    return head;


}

//Auxiliary Function
Node * helper(Node *root){
    Node *prev = NULL;
    return BtoDLL(root,prev);
}

void displayLL(Node *head){

    while(head != NULL){

        cout<<head->right->key<<" ";
        head = head->right;

    }

}



//Driver Function
int main(){

    Node *root  = new Node(10);
    root->left = new Node(5);
    
    root->right = new Node(20);
    
    root->right->left = new Node(30);
    
    root->right->right = new Node(35);

    Node *head = helper(root);

    displayLL(head);

    return 0;
}