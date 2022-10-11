#include <bits/stdc++.h>

using namespace std;

//Data Structure
struct Node {

    int key;
    Node *left;
    Node *right;

    Node ( int x){
        key = x;
        left = right = NULL;
    }

};

//Function
int preIndex = 0;
//Preindex declared globally so that every recursive call can use it without it getting changed everytime

Node *constructTree(int in[] , int pre[] , int inorderStart , int inorderEnd){

    if(inorderStart > inorderEnd){
        return NULL;
    }

    Node *root = new Node(pre[preIndex++]);

    int inorderIndex;

    for (int i = inorderStart ; i <= inorderEnd ; i++){

            if(in[i] == root->key){
                inorderIndex = i;
                break;
            }

    }

   root->left  =  constructTree(in , pre , inorderStart , inorderIndex - 1);
   root->right =  constructTree(in , pre , inorderIndex + 1 , inorderEnd);
   //Connecting the newly created node to the left/right subtree.


return root;

}



void displayTree ( Node *root ){

    if(root == NULL){

        return;

    }
        displayTree(root->left);
        cout<<root->key<<" ";
        displayTree(root->right);
    
}


//Driver Function
int main(){

    int in[] ={40,20,50,10,30,80,70,90};

    int pre[] = {10,20,40,50,30,70,80,90};

    int inorderStart = 0;
    int inorderEnd = sizeof(in)/sizeof(in[0]);


    Node *root = constructTree(in , pre , inorderStart, inorderEnd);
    displayTree(root);

    return 0;
}