#include <bits/stdc++.h>

using namespace std;

//DS
struct Node{

    int data ;
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

    while (current != NULL

    )
    {
        cout << current->data << " ";

        current = current->next;
    }
}



//Function
Node *insertionend(Node *head , int data){

    Node *current = head;

    while(current->next != head){

            current = current->next;


    }

    Node *newNode = new Node(data);

    current->next = newNode;
    newNode->next = head;

return head;

}



//Driver Function
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    int data = 40;

     Node *newHead = insertionend(head, data);

    printList(newHead);

    return 0;
}