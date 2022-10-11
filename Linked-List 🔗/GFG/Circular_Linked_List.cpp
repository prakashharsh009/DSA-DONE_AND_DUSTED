#include <bits/stdc++.h>

using namespace std;

/********************************* SINGLY CIRCULAR WASTED *********************************/


// Data Structure
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
    Node *temp = head;


   if (head != NULL)
    { 
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
}


//Driver Function
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;

    printList(head);


    return 0;
}