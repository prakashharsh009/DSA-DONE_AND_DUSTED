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




Node *insertionEnd(Node *head, int x){


    Node *current = head->next;

    while(current->next != head){
        current = current->next;

    }

    Node *newNode = new Node(x);
    current->next = newNode;
    newNode->next = head;

    return head;

}



void printList(Node *head){


    cout<<head->data<<" ";

Node *current = head->next;

while(current != head){
    cout<<current->data<<" ";
    current = current->next;
}



}



//Efficient -O(1) Solution

Node *efficientEnd(Node *head, int data){

    Node *newNode = new Node(data);


    if(head == NULL){
        cout<<newNode->data;
    }

    else{

        newNode->next = head->next;
        head->next = newNode;

        int tempData = newNode->data;

        newNode->data = head->data;
        head->data = tempData;


    }
return newNode;
}







//Driver Function
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    int data = 40;

   Node *newHead =  efficientEnd(head,data);
    printList(newHead);

}