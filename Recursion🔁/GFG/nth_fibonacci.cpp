#include <bits/stdc++.h>

using namespace std;





int recursivefibonacci(int n){

    if(n<=1){
        return n;
    }

    return recursivefibonacci(n-1)+recursivefibonacci(n-2);



}



//Driver Function

int main(){

    int n = 3;
    cout<<recursivefibonacci(n);
    return 0;
}