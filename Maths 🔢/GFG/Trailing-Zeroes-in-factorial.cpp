#include <bits/stdc++.h>

using namespace std;


//Naive Solution

int trailingzero(int n){

    int res = 1;
    int count = 0;

    for(int i = 2; i<=n;i++){
        res*= i;
    }

    while(res%10 == 0){
        count++;
        res /= 10;
    }

    return count;
}

//EFFICIENT METHOD

/* formula - 
prime factorization of N

trailing zeros = (n/5)floor + (n/25)floor +(n/125)floor + ..........n

since every 5th term as 5 and conscutively 25 has 2  5s,  similarly 125 has 3 5s and so on

*/

int trailingZeroEff(int num){

    int result = 0;

    for(int i = 5; i<=num; i*5){
        result  = result +num/i;
    }

    return result;
}






int main(){

    int n = 251;

    cout<<trailingZeroEff(n);
}