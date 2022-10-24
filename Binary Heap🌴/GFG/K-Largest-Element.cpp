#include <bits/stdc++.h>

using namespace std;


//Function using MaxHeap 
void KlargestElement(vector<int> v , int k){

priority_queue<int> pq(v.begin(), v.end());

    while (k > 0){
        cout<<pq.top()<<" ";
        pq.pop();
        k--;
    }

}

//Driver Function 
int main (){

    vector<int> v = {9, 8, 7, 18, 19, 17};

    KlargestElement(v, 2);
    return 0;
}