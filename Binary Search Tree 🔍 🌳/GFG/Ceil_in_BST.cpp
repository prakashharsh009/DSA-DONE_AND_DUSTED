
//CEIL IS LOWEST OF ALL GREATER VALUES THAN "N"

#include <bits/stdc++.h>

using namespace std;

//Data Structure
struct Node {

    int key;
    Node *left;
    Node *right;

    Node (int x){
        x = key;
        left = right = NULL;
    }
};

// ITERATIVE FUNCTION 

Node *iterativeCeil(Node *root , int n){

    Node *res = NULL;

    while (root != NULL){

        if(root->key == n){
            return root;
        }
        
        else if(root->key < n ){
            
            root = root->right;
            
        }
        else if(root->key > n){
            //if n is less 
            res = root;
            root = root->left;
        }

    }
return res;

}


//Driver Function
int main(){

    Node *root  = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);

    root->right->left = new Node(12);
    root->right->right = new Node(30);

    Node *head = iterativeCeil(root , 10);
    cout<<head->key;

    return 0;
}