#include <bits/stdc++.h>

using namespace std;

//Data Structure
struct Node{

    int data ;

    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

// 10 20 30 40 50 60 -> 30 20 10 60 50 40

Node *reverseinK(Node *head, int k){

     int count = k ;
     Node *temp = head;

     while(temp->next != NULL){

         while(count != 0 ){
                
         }


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




    return 0;
}