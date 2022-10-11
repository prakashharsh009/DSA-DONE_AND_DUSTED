#include <bits/stdc++.h>

using namespace std;



int naiveSum(int arr[], int n){

    int maxSum = 0;

    for(int i = 0; i<n; i++){
        
        int currentIndexSum = 0;

        for(int j = i; j<n; j++){

            currentIndexSum += arr[j];
            maxSum = max(currentIndexSum, maxSum);
        }


    }
return maxSum;
}


//Efficient Max sum of subarray || KADANE'S ALGORITHM
int efficientSum(int arr[] , int n){

    int maxSum = INT_MIN; // or we can use arr[i]
    int currSum = 0;

    for (int i  = 0 ; i < n ; i++){

            currSum += arr[i];
        
         maxSum = max(maxSum, currSum);

        //is currsum is less than 0 reinitialise it to zero , so that it doesnt carries negative subarrays

        if(currSum < 0) {
            currSum = 0;
        }

    }

return maxSum;

}




//Driver Function

int main(){

    int arr[] = {-2, -3, 4, -1};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<naiveSum(arr, size);


    return 0;
}