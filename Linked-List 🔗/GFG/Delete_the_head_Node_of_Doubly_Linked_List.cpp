#include <bits/stdc++.h>

using namespace std;



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


Node *deleteHead(Node *head){


    Node *newHead = head;

    head = head->next;

    newHead->next->prev = NULL;
    newHead->next = NULL;
    

    delete(newHead);


return head;

}








void printList(Node *head){


    Node *currentHead = head;

    while(currentHead != NULL){


        cout<<currentHead->data<<" ";
        currentHead = currentHead->next;


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


    Node *newHead = deleteHead(head);

    printList(newHead);
    return 0;
}