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



//Iterative Method

int iterativeTraversal(Node *head , int key){


    Node *currentNode = head;
    int position  = 1;

    while(currentNode != NULL){


        if(currentNode->data == key){
            return position;
        }

        else{
            currentNode = currentNode->next;
            position++;
        }



    }


return -1;


}


//Recursive Solution

int recursiveTraversal(Node *head , int key , int pos){

    
    if(head->next == NULL){
        return -1;
    }
    else if(head->data == key){
        return pos;
    }

    else{
        return recursiveTraversal(head->next , key , pos+1);
    }

}




//Driver Function

int main(){

    Node *head = new Node(5);
    head->next = new Node(15);
    head->next->next = new Node(25);
    head->next->next->next = new Node(35);

    ///cout<<iterativeTraversal(head , 15);
    cout<<recursiveTraversal(head, 5 , 1);
    return 0;
}