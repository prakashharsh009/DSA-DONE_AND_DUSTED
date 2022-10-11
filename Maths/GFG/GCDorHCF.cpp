//Also Fill the biggest Rectangle of the tile problem solution  

#include<bits/stdc++.h>

using namespace std;



//Naive Solution
int gcd(int a , int b){

int res  = min(a,b);

while(res>0){
    if(a%res == 0 && b%res == 0){
        break;
    }
    res--;
}

return res;


}


//Euclidean Algorithm
/* let b be smaller than a =>
gcd(a,b) = gcd(a-b, b)  */


//Using Repetitive Subtraction

int euclidean(int a , int b){

    while(a!=b){
        if(a>b){
            a = a-b;
        }
        if(b>a){
            b = b-a;
        }

    }
    return a;

    //we can return either a or b


}

//Using Modular Division (Better)

int euclidModulo(int a , int b){

    if (b ==0){
        return a;
    }

    else return euclidModulo(b, a%b);

}





int main(){

int a = 10 , b = 15;

cout<<euclidModulo(a,b);

}