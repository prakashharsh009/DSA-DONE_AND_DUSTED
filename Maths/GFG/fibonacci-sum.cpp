#include <bits/stdc++.h>

using namespace std;


int main(){

    int n = 4;

    int fibo[n];


    if(n<=0){
        return 0;
    }
    
     fibo[0] = 0 , fibo[1] = 1;

    int sum = fibo[0] + fibo[1];

    

    for(int i = 2; i<n ; i++){

        fibo[i] = fibo[i-1] + fibo[i-2];

        sum += fibo[i];
        
            }


            cout<<sum;
}