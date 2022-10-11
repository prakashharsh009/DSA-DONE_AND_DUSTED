#include <bits/stdc++.h>

using namespace std;

struct Node{

    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }


};



//Recursive Function to print all Heads

int recursiveTraversal(Node *head){


    //Base Case
    if(head == NULL){
        return 0;
    }

    cout<<(head->data)<<" ";

    head = head->next;
    return recursiveTraversal(head);




}







//Driver Function
int main(){

        Node *head = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(30);
        head->next->next->next = new Node(40);



    

    recursiveTraversal(head);
return 0;

}