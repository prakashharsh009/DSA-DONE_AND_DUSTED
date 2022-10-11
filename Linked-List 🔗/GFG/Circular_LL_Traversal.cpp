#include <bits/stdc++.h>

using namespace std;

//Singly Circular Linked List
struct Node{

    int data;
    Node *next;

    Node(int x){
        data =x;
        next = NULL;
    }


};



int circularTraversal(Node *head){



    //when no head 
    if(head == NULL){
        return -1;
    }

    //Printing the head and then iterating rest of the nodes until the head is encountered again
    cout<<(head->data)<<" ";

    

    for(Node *p = head->next ; p != head ; p = p->next){
        cout<<(p->data)<<" ";
    }
return 0;
}





//Driver Function
int main(){
    
        Node *head  = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(30);
        head->next->next->next = head;

        circularTraversal(head);


    return 0;
}
