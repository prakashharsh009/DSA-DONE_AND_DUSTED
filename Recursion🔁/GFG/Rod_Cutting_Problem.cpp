#include <bits/stdc++.h>

using namespace std;

//Objective - to gain max number of pieces of rod/rope

int recursiveCutting(int n , int a , int b , int c){


    //Base Cases
    if( n == 0){
        return 0;
    }
    if( n < 0){
        return -1;
    }

    int res = max(recursiveCutting(n-a, a, b, c)) , max(recursiveCutting(n-b, a , b , c)), max(recursiveCutting(n-c, a, b, c));


    if( n == -1){
        return -1;
    }

    return res+1;


}





//Driver Function
int main(){

    int n =23;
    int a = 12, b = 9, c = 11;

    cout<<recursiveCutting(n , a , b, c);
}