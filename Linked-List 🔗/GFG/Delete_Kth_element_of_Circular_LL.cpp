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
    cout<<head->data<<" ";
    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << (p->data) << " ";
    }
}

Node *deleteK(Node *head, int k ){

    //if  k = 1

    //Efficient Head Delete

    if(k == 1){
    Node *temp = head->next;
    head->data = head->next->data;
    head->next = head->next->next;
    

    delete temp;

    return head;
    }

    else    {


        Node *current = head;
        

        for (int i =  1; i<= k ; i++){


            current = current->next;

        }
        Node *temp = current->next;

        current->next = current->next->next;

        delete temp;
    

        return head;

    }
    
return 0;

}


//Driver Function

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;

    int k;

    cout<<"Enter the position of the element to be deleted ! ";
    cin>>k;

    Node *newHead = deleteK(head, k);

    printList(newHead);
return 0;

}