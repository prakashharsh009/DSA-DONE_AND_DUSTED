#include <bits/stdc++.h>

using namespace std;





//Using_Left_Shift_Operator

int leftshiftCheck(int n , int k){

    if(n&(1<<(k-1)) != 0){
        cout<<"Yes";
    }

else cout<<"No";


return 0;
}


//Using_Right_Shift_Operator

int rightShiftCheck(int n , int k ){
    if((n>>(k-1)) & 1 != 0){
        cout<<"Yes";
    } 

    else cout<<"No";

    return 0;

}



//Driver Function

int main(){

    int a = 20;
    int b = 3;

    rightShiftCheck(a,b);

}