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


Node *deleteNodeLast(Node *head){


   if(head == NULL){
       cout<<"The list is empty !";


   }

    //If only one NODE  - 10 20 30 

    else if(head->next == NULL){
        delete(head);
        
    }

    else{

            Node *temp =head;
            Node *temp2 = head;

            while(temp->next != NULL){

                    temp2 = temp;
                    temp = temp->next;
            }

        temp2->next = NULL;
        delete(temp);

    }

    return head;
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

Node *head  = new Node(10);
head->next =  new Node(20);
head->next->next = new Node(30);


Node *temp = deleteNodeLast(head);

printList(temp);

    return 0;
}