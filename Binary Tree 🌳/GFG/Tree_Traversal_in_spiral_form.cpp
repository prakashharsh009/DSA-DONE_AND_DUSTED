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


void displaySpiral(Node *root){

    if ( root == NULL){
        return;
    }

    queue<Node *> q;
    stack<int> s;

    bool reverse = false;

    q.push(root);
    


    while(q.empty() == false){

        int count = q.size();
        //because we are modifying the size of queue in the loop
        for( int i = 0 ; i<count ; i++){
            Node *curr = q.front();
            q.pop();

            //STACK STORING
            if(reverse){
                s.push(curr->key);

            }

            //QUEUE TRAVERSALS
            else{
                cout<<curr->key<<" ";
            }

            if(curr->left != NULL){
                q.push(curr->left);

            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }

        //STACK TRAVERSALS
        if(reverse){

            while(s.empty() == false){
            cout<<s.top()<<" ";
            s.pop();
            }
        }
        reverse = !reverse;
        cout<<endl;  

    }


}


// 2ND METHOD  - using two stacks

void displaySpiralv2(Node *root){

    if(root == NULL){
        return;
    }

    stack<Node *> s1;
    stack<Node *> s2;

    bool reverse = false;

    s1.push(root);

    while(s1.empty() == false || s2.empty() == false ){

    if(reverse){

        int count = s1.size();

        for(int i = 0 ; i< count ; i++){

            Node *curr = s1.top();
            s1.pop();

            cout<<curr->key<<" ";

            if(curr->left != NULL){
                s2.push(curr->left);
            }
            if (curr->right != NULL)
            {
                s2.push(curr->right);
            }
        }
        reverse = !reverse;
        cout<<endl;

    }

        else{

            int count = s2.size();

            for(int i = 0 ; i<count ; i++){

                Node *curr = s2.top();
                s2.pop();
                cout<<curr->key<<" ";

                if (curr->right != NULL)
                {
                    s1.push(curr->right);
                }
                if (curr->left != NULL)
                {
                    s1.push(curr->left);
                }
            }

            reverse = !reverse;
            cout<<endl;
        }

    }

}



//Driver Function
int main(){

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);

    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->left = new Node(10);

    displaySpiralv2(root);


}


