#include <bits/stdc++.h>

using namespace std;

int recursiveNaturalSum(int n){

    if(n == 0){
        return 0;
    }

    return n+recursiveNaturalSum(n-1);

}



//Driver Function

int main(){

    int n = 5;

    cout<<recursiveNaturalSum(n);
    return 0;
}