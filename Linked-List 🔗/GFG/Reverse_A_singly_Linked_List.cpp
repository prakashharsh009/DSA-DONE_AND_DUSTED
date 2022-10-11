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


//Function - 10 20 30 40 50 60 

//Naive Method - using array/vector

Node *reverse(Node *head){

    vector<int> arr;
    Node*current = head;

    while(current != NULL){
        arr.push_back(current->data);
        current = current->next;
    }

    for(Node *curr = head; curr != NULL ; curr = curr->next){

        curr->data = arr.back();
        arr.pop_back();

    }
return head;

}

//WITH O(1) SPACE COMPLEXITY -   10  20  30 

Node *efficientReverse(Node *head){

    Node *curr = head;
    Node *prev = NULL;

    while(curr != NULL)
    {

        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;



    }

return prev; //NEW HEAD


}





//Auxiliary Function

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
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);


    Node *newHead = efficientReverse(head);
    printList(newHead);
    return 0;
}