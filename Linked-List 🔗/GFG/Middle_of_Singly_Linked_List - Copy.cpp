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


// Function -  10  20   30  40  50   60 

Node *middle(Node *head){

    if(head == NULL){
        cout<<"NO HEAD";
        exit(-1);

    }

    Node  *current = head;
    


    int count = 1;


    while(current->next != NULL)
    {
        current = current->next;
        count++;
    }

    int index = count/2;
    Node *result = head;

    while(index != 0){
        result = result->next;
        index--;
    }

    return result;

}



//EFFICIENT - ONE TRAVERSAL SOLUTION USING TWO POINTERS SLOW AND FAST

//SLOW MOVES ONE NODE WHILE FAST MOVES TWO NODES IN A SINGLE ITERATION


Node *efficientMiddle(Node *head){


    Node *fast  = head;
    Node *slow  = head;

    while (fast != NULL && fast->next != NULL)
    {

        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;

}







//Driver Function
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    Node *result = efficientMiddle(head);

    cout<<result->data;
    

    return 0;
}