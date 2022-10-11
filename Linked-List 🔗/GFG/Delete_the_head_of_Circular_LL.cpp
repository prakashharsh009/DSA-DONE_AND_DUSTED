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


//Efficient Solution
Node *efficientDelete(Node *head){

    Node *temp = head->next;

    head->data = head->next->data;

    head->next  = head->next->next;

    delete temp;

return head;

}





//Driver Function

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    Node *newHead = efficientDelete(head);

    printList(newHead);

    return 0;
}


