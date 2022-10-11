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

//Function

Node *insertion(Node *head , int newData){

    Node *newNode = new Node(newData);

    if(head == NULL){
        head->prev = newNode;
        
    }

    

    else{

       

        head->prev = newNode;
        newNode->next = head;

        return newNode;

    }
    
}




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

    int data = 5;
    Node *newHead = insertion(head , data);

    printList(newHead);


return 0;

}