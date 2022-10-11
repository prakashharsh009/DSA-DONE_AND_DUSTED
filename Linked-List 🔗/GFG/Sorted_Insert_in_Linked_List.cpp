#include <bits/stdc++.h>

using namespace std;


//Data Structure

struct Node {

    int data;
    Node *next;
    
    Node(int x){

        data = x;
        next = NULL;


    }

};


//Sorted Insert                  10  20   30  40  

    Node *sortedInsert(Node *head, int data)
{


            //Check if the list is empty
            if(head == NULL){
                cout<<"NULL";
            }

    Node *newNode = new Node(data);

    //Corner Case when the data is less than the data in head

    if(head->data>data){
        newNode->next = head;
        return newNode;
    }



    Node *current = head;

    while(current->next->data < data){
        current = current->next;
    }



    


    //Insertion

    newNode->next = current->next;
    current->next = newNode;

    return head;
    
}



void printList(Node *head){

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
    head->next->next = new Node(30);
    

    int data = 15;


    Node *newNode = sortedInsert(head, data);

    printList(newNode);

    return 0;
}