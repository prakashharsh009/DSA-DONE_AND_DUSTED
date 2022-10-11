#include <bits/stdc++.h>

using namespace std;

//Data Structure

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


//Auxiliary Function

void printList(Node *head)
{
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << (p->data) << " ";
    }
}




//Insertion in the head

Node *insertionHead(Node  *head, int data){


    Node *newNode = new Node(data);
    Node *current = head;


    while(current->next != head){

        current = current->next;
        


    }

    newNode->prev = current;
    current->next = newNode;

    newNode->next = head;
    head->prev = newNode;

    return newNode;
}



// Efficient Insert in Head


Node *efficientHead(Node *head, int data){


    Node *newNode = new Node(data);

    int temp;

    newNode->next = head->next;
    head->next->prev = newNode;
    head->next = newNode;
    newNode->prev = head;

    temp = head->data;
    head->data = newNode->data;
    newNode->data = temp;

    return head;

}



//Delete Head 


Node *deleteHead(Node *head){

int temp;

temp = head->next->data;

head->data = temp;


head->next = head->next->next;

return head;

}




//Driver Function
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->prev = new Node(30);

    head->next->prev = head;
    head->next->next = head->prev;
    head->next->next->next = head;
    head->next->next->prev = head->next;

    int data = 5;
    
    
    Node *newHead = deleteHead(head);
    printList(newHead);

    return 0;

}