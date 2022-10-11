#include <bits/stdc++.h>

using namespace std;



//Data Structure
struct Node{

    int data;

    Node *next;

    Node (int x){
        data = x;
        next = NULL;
    }


};

Node *floydLoop(Node *head){

    Node *slow = head;
    Node *fast = head;

    
    int counter = 0;

    while(fast->next != NULL){

        slow = slow->next;
        fast = fast->next->next;

        if (slow->next == fast->next)
        {
            counter++;
            break;
        }

        

    }

    if(counter == 1){
        cout<<"LOOP";

    }
    else{
        cout<<"NO LOOP";
    }

return head;

}




//Driver Function

int main(){ 

    Node *head = new Node(10);
    Node *temp = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);

    head->next = temp;
    temp->next = temp2;
    temp2->next = temp3;
    temp3->next = NULL;


    floydLoop(head);
    

    return 0;
}