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

//Auxiliary Function

void printList(Node *head)
{

    Node *current = head;

    while (current != NULL )
    {
        cout << current->data << " ";

        current = current->next;
    }
}



Node *insertionBegin(Node *head, int data){

    Node *current = head;

    while(current->next != head){

        current = current->next;

    }

    Node *newHead = new Node(data);

    current->next = newHead;
    newHead->next = head;
    


    return newHead;

}




//Driver Function 
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    int data = 5;

    Node *newHead = insertionBegin(head, data);


    printList(newHead);
    return 0;
}