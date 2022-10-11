#include <bits/stdc++.h>

using namespace std;

struct Node{

    int data ;
    Node *prev;
    Node *next;

    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }

};





//Auxiliary Function

void printList(Node *head){

    Node *current = head;

    while(current != NULL){

        cout<<current->data<<" ";
        current = current->next;

    }

}



//Function

Node *deleteLast(Node *head){


    Node *temp = head;
    Node *temp2 = head->next;

    while(temp2->next != NULL){

        temp2 = temp2->next;
        temp  = temp->next;

    }

    temp2->prev = NULL;
    temp->next = NULL;

    return head;

}





//Driver Function
int main(){

    Node *head = new Node(10);
    Node *temp1 = new Node(15);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->prev  = head;
    temp1->next = temp2;
    temp2->prev= temp1;

    deleteLast(head);
    printList(head);

    return 0;
}