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


//FUNCTION    10 20 30 40 50 60 

//First count the number of elements
//then find a relation between n and number of elements

Node *nthNumber(Node *head, int n){


Node *current = head;

int count = 1;
while(current->next != NULL){

    current = current->next;
    count++;

}

int index = count - n;
Node *temp = head;

    while(index != 0){

        temp = temp->next;
        index--;



    }
return temp;


}







//METHOD - 2  USING TWO POINTERS

// MOVE "FIRST" FROM N POSITION AND INCREMENT THE POSITION BY 1
// MOVE "SECOND" FROM HEAD POSITION AND INCREMENT THE POSITION BY 1
// MOVE BOTH POINTERS WITH SAME SPEED HENCEFORTH TILL "FIRST" REACHES NULL


Node *methodTwo(Node *head, int n){

    

    Node *first = head;
    Node *second = head;
    while(n != 0){
        first = first->next;
        n--;
    }

    while(first != NULL){

        first = first->next;
        second = second->next;

}
    return second;

}





//Driver Function

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);


    Node *newNode = methodTwo(head, 4);

    cout<<newNode->data;



    return 0;
}