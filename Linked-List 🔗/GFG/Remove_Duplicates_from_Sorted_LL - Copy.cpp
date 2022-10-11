#include <bits/stdc++.h>

using namespace std;


//Data Structure
struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

// 10 20 20 30 30 30 

Node *removeDuplicate(Node *head){

    Node *curr = head;

    while(curr->next != NULL){

        if(curr->data == curr->next->data){
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
            
        }

        else{
            curr = curr->next;
        }

    }
return head;

}

// Auxiliary Function

    void printList(Node *head)
{

    cout << (head->data) << " ";

    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << (p->data) << " ";
    }
}

//Driver Function
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(30);
    head->next->next->next->next->next = new Node(30);

    Node *newNode = removeDuplicate(head);

    printList(newNode);

    return 0;
}