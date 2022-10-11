#include <bits/stdc++.h>
using namespace std;




bool naivePowerOfTwo(int n){

if(n == 0){
    cout<<"No";
}

while(n!=1){

    if(n%2 != 0){

        return false;
    }

    n = n/2;

}

return true;


}



//Efficient 

bool efficientPowerOfTwo(int n){

    if(n == 0){
        return false;
    }

    return ((n&(n-1)) == 0);

}









//Driver Function

int main (){

    int n = 4;

    if(efficientPowerOfTwo(n) == 1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}