#include <bits/stdc++.h>

using namespace std;




//Recursive


int fact(int num){

    if(num==0)
    return 1;
    

    return num*fact(num-1);
}



int main(){

    int n = 6;

cout<<fact(n);
return 0;


}

/*
void factorial(int n){

    int result = 1;

    if (n < 0)
    {
        return;
    }

    for (int i = 2;i<=n; i++){
        result *= i;
    }


    cout<<result;
}
*/
