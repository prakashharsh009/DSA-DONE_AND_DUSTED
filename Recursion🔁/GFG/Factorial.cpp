#include <bits/stdc++.h>
using namespace std;




int recursivefact(int n){
    if(n == 0){
        return 1;
    }

    return n*recursivefact(n-1);
}





//Driver Function
int main(){
    int n = 5;
    cout<<recursivefact(n);
}