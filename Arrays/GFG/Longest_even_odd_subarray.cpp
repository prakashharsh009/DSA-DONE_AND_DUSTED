#include<bits/stdc++.h>

using namespace std;

//Naive Method - O(n2)
int naiveEvenOdd(int arr[], int n){

int res = 1;

for (int i = 0 ; i <  n ; i++){

    int curr = 1;

    for (int j = i + 1 ; j  < n ; j++){

        if((arr[j-1] % 2 == 0 && arr[j] % 2 != 0) || (arr[j-1] % 2 != 0 && arr[j] % 2 == 0)){ curr++; }
        else{
            break;;
        }

    }
    res = max(res , curr);

}
return res;    
}


//Efficient Method using KADANE'S ALgorithm

int kadaneSubarray(int arr[], int n ){

    int currMax = 1;
    int totalMax = 1;

    for (int i = 1 ; i < n ; i++){

        if((arr[i-1] % 2 == 0 && arr[i] % 2 != 0) || (arr[i-1] % 2 != 0 && arr[i] % 2 == 0)){
            currMax++;
            totalMax = max(currMax, totalMax);
        } 
        else{
            currMax = 1;
            
        }

    }
return totalMax;
}


//Driver Function
int main(){

    int arr[] = {5,10,20,6,3,8};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<kadaneSubarray(arr, size);

    return 0;
}