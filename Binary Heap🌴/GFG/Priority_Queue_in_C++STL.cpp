#include <bits/stdc++.h>

using namespace std;


//Driver Function 
int main (){

priority_queue<int> pq;

// priority_queue<int <vector<int>, greater<int>> pq; FOR MIN-HEAP
//if  you dont want to use the large syntax for minheap you can negate the numbers and then negate again while output to neutralise 

pq.push(10);
pq.push(5);
pq.push(15);

cout<<pq.size()<<" ";
cout<<pq.top()<<" "<<endl;

while (pq.empty() == false){
    cout<<pq.top()<<" ";
    pq.pop();
}

cout<<endl;

//CREATING PRIORITY QUEUE FROM AN ARRAY

int arr[] = {10,2,57,8};

priority_queue<int> pq2(arr, arr+4);

while(pq2.empty() == false){
    cout<<pq2.top()<<" ";
    pq2.pop();
}

return 0;
}