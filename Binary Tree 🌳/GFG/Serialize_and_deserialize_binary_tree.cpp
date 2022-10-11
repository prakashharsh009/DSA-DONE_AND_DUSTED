#include <bits/stdc++.h>

using namespace std;

//Data Structure
struct Node{

    int key;

    Node *left;
    Node *right;

    Node (int x){
        key = x;
        left = right = NULL;
    }

};



void serialise (Node *root , vector<int> &arr){

    if(root == NULL){
        arr.push_back(-1);
    }

     arr.push_back(root->key);

    serialise(root->left , arr);
    serialise(root->right, arr);

}


int indeX = 0;
Node *deserialise(vector<int> &arr){

    //if we have traversed the whole array
    if(indeX == arr.size()){
        return NULL;
    }
    
    int val = arr[indeX];
    indeX++;

    Node *root = new Node(val);

    root->left = deserialise(arr);
    root->right = deserialise(arr);

    return root;

    }





//Driver Function
int main(){

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    vector <int> arr;
    serialise(root, &arr);

    return 0;
}