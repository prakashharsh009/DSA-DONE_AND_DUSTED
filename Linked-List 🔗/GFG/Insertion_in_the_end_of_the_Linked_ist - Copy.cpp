#include <bits/stdc++.h>

using namespace std;


struct Node{
    int data;

    Node *next;

    Node(int x){
        data = x ;
        next = NULL;

         }
};



Node insertioninEnd(Node *head , int x){

    Node *temp = new Node(x);

    //Corner case id there's no head (empty linked list)
    if(head == NULL){
       /* return temp;*/ 
        //This is too avoid in Segmentation Fault in C++ and Null Pointer Exception in Java
        cout<<"NULL";
    }

    Node *current = head;

    while(current->next != NULL){


        current = current->next;

    }

        current->next  = temp; 

}




//Utility Function

void printList(Node *head)
{

    Node *current = head;

    while (current != NULL)
    {
        cout << current->data << " ";

        current = current->next;
    }
}




//Driver Function

int main(){

        Node *first = new Node(10);
        first->next = new Node(20);
        first->next->next = new Node(30);

        insertioninEnd(first , 40);

        printList(first);

        return 0;
}