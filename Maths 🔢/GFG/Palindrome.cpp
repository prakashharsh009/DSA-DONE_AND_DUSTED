#include <bits/stdc++.h>

using namespace std;



int isPalindrome(int n){


    int reverse = 0;
    int tempVar = n;

    while(tempVar != 0){
        int rem = tempVar%10;

        
         reverse = reverse*10 + rem;
         tempVar /= 10;
    }
            if(reverse == n){
                cout<<"Yes";
            }
            else cout<<"No";

            return 0;
}

//Driver Function

int main(){

    int n;

    cout<<"Enter the number ";
    cin>>n;

    isPalindrome(n);

}