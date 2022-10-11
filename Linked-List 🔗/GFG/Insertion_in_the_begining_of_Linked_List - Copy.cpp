#include <bits/stdc++.h>

using namespace std;



struct Node{
    int data;
    Node *next;

    //Constructor
    Node(int x){
        data = x;
        next = NULL;
    }


};


Node *insertNode(Node *head , int x){

Node *temp = new Node(x);
temp->next = head;
    
return temp;


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

    Node *head = NULL;

    head = insertNode(head, 30);
    head = insertNode(head, 20);
    head = insertNode(head,10);


    printList(head);


    return 0;
}