#include <bits/stdc++.h>

using namespace std;



int sumofDigits(int n){

    int sum = 0;

if( n == 0){
    return 0;
}
    sum += n%10;

    return sum+sumofDigits(n/10);
}






//Driver Function

int main(){


    int n = 123;
    cout<<sumofDigits(n);


    return 0;
}