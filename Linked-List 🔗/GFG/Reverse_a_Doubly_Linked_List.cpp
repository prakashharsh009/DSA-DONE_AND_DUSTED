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


//Auxiliary Function

void printList(Node *head)
{

    Node *current = head;

    while (current != NULL)
    {
        cout << current->data << " ";

        current = current->next;
    }
}




Node *reversalDoubly(Node *head ){


Node *currentNode = head;
Node *temp  = NULL;

if(head == NULL || head->next == NULL){
    return head;
}


while(currentNode != NULL){

  temp = currentNode->prev;
  currentNode->prev = currentNode->next;
  currentNode->next = temp;  

temp = currentNode;
currentNode = currentNode->prev;


}


return temp;

}





//Driver Function

int main(){

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);


    Node *newHead = reversalDoubly(head);

    printList(newHead);


    return 0;
}