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


Node *recursiveReverse(Node *head){

    Node *temp = head;

    //Base Case
        if(temp->next == NULL){
            return head;

        }
        
        Node




}




//Driver Method

int main(){
    
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Node *newHead = recursiveReverse(head);

    printList(newHead);

    return 0;
}