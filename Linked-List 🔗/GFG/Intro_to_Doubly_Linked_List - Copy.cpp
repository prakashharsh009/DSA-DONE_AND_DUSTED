#include <bits/stdc++.h>

using namespace std;


//DOUBLY LINKED LIST Data Structure
struct Node{
    int data;

    Node *prev;
    Node *next;

    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }


};



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

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    printList(head);


    return 0;
}