#include <bits/stdc++.h>

using namespace std;


//Data Structure
struct Node{
    int data;
    Node *next;
    bool isVisited;

    Node(int x){
        data = x;
        next = NULL;
        isVisited = false;
    }
};


//Naive Solution  - 0n2

Node *naiveLoop(Node *head){

    
    int counter = 0;


    for( Node *temp = head; temp != NULL ; temp = temp->next){

        for(Node *temp2 = temp->next ; temp2 != NULL ; temp2 = temp2->next){

                if(temp->next == temp2->next){
                    cout<<"LOOP EXIST !";
                    counter++;
                    break;
                }
                else continue;

        }
        if(counter != 0){
            break;
        }

    }
if(counter == 0){
    cout<<"NO LOOP !";
}

return head;

}

//EFFICIENT SOLUTION
//Modifications to Linked List Structure 10 20 30 40 

Node *efficientLoopCheck(Node *head){

    Node *temp = head;
    int counter = 0;

    while(temp->next != NULL){

        temp->isVisited = !temp->isVisited;

        if(temp->isVisited == 0){
            cout<<"LOOP";
            counter++;
            break;
        }
        else{
            temp = temp->next;
        }
    
     }

     
if(counter == 0){
    cout<<"NO LOOP";
}
return head;

}


//More efficient - Modifications to Linked List's pointers
//Change every node's next pointer to a dummy node and if there exists node whose pointer already points
// to the dummy node => O/P - Loop Exist !

Node *modificationPointer(Node *head){

    Node *temp = head;
    Node *dummy;
    int counter = 0;
    
    while(temp != NULL){

        if (temp->next == dummy)
        {
            counter++;
            break;
        
        }

        Node *tempNext = temp->next;

        temp->next = dummy;
        // 10 20 30 40 50 
        temp = tempNext;
    
    }

if(counter == 0){
    cout<<"NO LOOP";
}
else{
    cout<<"LOOP EXIST";
}

return head;

}



//Method - 4 Hashing

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

    modificationPointer(head);
    

    
    return 0;
}