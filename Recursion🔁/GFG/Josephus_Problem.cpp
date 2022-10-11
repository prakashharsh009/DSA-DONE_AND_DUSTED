#include <bits/stdc++.h>

using namespace std;


int jos(int n , int k){

    //Base Case
    if( n == 1){
        return 0; // if theres only one person left
    }


    return (jos(n-1, k)+k)%n;
    //mapping new indexes(after iteration) to old indexes to obtain the correct index 

}



//Driver Function

int main(){

    int n = 3;
    int k = 2;
    cout<<jos(n, k);
}