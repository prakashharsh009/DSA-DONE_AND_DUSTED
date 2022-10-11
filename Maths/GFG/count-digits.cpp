#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter a number";
    cin>>n;
    int counter = 0;


    while(n>0){
        n = n/10;
        counter++;
    }

    cout<<counter;

}