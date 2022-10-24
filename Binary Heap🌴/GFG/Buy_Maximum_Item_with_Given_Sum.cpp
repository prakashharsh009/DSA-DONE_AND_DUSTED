#include <bits/stdc++.h>

using namespace std;



//Naive Method
int naiveCount(vector<int> v, int sum){

    int res = 0;

    sort(v.begin(), v.end());

    for (int i = 0 ; i < v.size(); i++){
        if(sum >= v[i]){
            res++;
            sum = sum -  v[i];
        }
       else  break;
    }
return res;

}

//Efficiently using MinHeap 

int effCount(vector<int> v, int sum){
    int res = 0;
    
    priority_queue<int , vector<int> , greater<int>>pq(v.begin(), v.end());
    
    while ( pq.empty() == false){

        if(pq.top() <=  sum){
            res++;
            sum  -= pq.top();
            
            pq.pop();
        }
        else break;
    }
return res;
}


//Driver Function
int main (){

    vector<int> v = {20,10,5,30,100};
    int sum = 35;

    cout<<effCount(v,sum);

    return 0;
}