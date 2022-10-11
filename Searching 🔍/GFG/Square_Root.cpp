#include <bits/stdc++.h>

using namespace std;

int squareRoot(int x){

    int low = 1 , high = x , ans = -1;

    while(low <= high){

        int mid = (low+high)/2;

        int midSquare = mid*mid;

        if(midSquare ==  x){
            return mid;
        }

        else if(midSquare > x){
            high = mid-1;
        }

        else {
            low  = mid+1;
            ans = mid;
        }


    }


return ans;

}


//Driver Function
int main(){


    int x = 20;

    cout<<squareRoot(x);

}