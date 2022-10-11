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



int balancedCheck( Node *root ){

    if (root == NULL)
    {
        return 0;
    }

    int lh = balancedCheck(root->left);
    int rh = balancedCheck(root->right);

    if (abs(lh - rh) > 1)
    {
        return -1;
    }
    return 1 + max(balancedCheck(root->left), balancedCheck(root->right));
} 



//Driver Function
int main(){

    Node *root = new Node(18);
    root->left = new Node(4);
    root->right = new Node(5);

    if (balancedCheck(root) == -1)
    {
        cout << "NOT BALANCED";
    }
    else
    {
        cout << "BALANCED AND THE HEIGHT IS " << balancedCheck(root);
    }

    return 0;
}