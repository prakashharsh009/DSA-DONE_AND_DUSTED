#include <bits/stdc++.h>

using namespace std;



    int nto1(int n ){

        if(n == 0){
            return 0;
        }

        cout<<n<<" ";
        return nto1(n-1);

    }










//Driver Function

int main(){

    int n  = 10;

    nto1(n);

    return 0;
}