#include <bits/stdc++.h>

using namespace std;


//Function
int slidingWindow(int arr[], int n , int k ){

    int currSum =  0;
    //Creating first window 
    for (int i = 0 ; i < k ; i++){
        currSum  +=  arr[i];
    }

    int maxSum = currSum;

    //Sliding subsequent windows
    for (int i = k ; i <n ; i++){
        currSum += (arr[i] - arr[i-k]);
        maxSum = max(currSum, maxSum);
    }

    return maxSum;

}


//Driver Function 
int main(){

    int arr[] =  {1,8,30,-5,20,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    int k  = 3;

    cout<<slidingWindow(arr,size,k);

    return 0;
}