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





void printList(Node *head)
{

    Node *current = head;

    while (current != NULL)
    {
        cout << current->data << " ";

        current = current->next;
    }
}





//Insertion Function

Node *insertionNode(Node *head , int position , int data){

int currentPosition = 2;

    Node *currentNode = head;


    
    while(currentPosition<position){

        currentNode = currentNode->next;
        currentPosition++;
    }

    //If poistion beyond current_Size\


    if (currentNode == NULL)
    {
        return head;
    }

    Node *newNode = new Node(data);

    newNode->next = currentNode->next;
    currentNode->next = newNode;



    


    return head;
}







//Driver Function
int main(){

        Node *head  = new Node(5);
        head->next = new Node(15);
        head->next->next = new Node(25);
        head->next->next->next = new Node(35);

        int position = 3;
        int data = 20;

        Node *newHead = insertionNode(head , position, data);

        //print
        printList(newHead);

    return 0;
}