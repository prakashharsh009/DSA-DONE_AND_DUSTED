#include <bits/stdc++.h>

using namespace std;



//Naive Solution

int naiveTrapping(int arr[], int n ){


    int res = 0;

    for(int i = 1; i<n-1; i++){
        //Since first and last bar have no capacity or support to hold water - hence traversing through middle bars

        int leftMax = arr[i];
        //Finding Maximum height bar on the left side  - leftMAX
        for(int j = 0 ; j<i; i++){
                leftMax = max(leftMax, arr[j]);
        }

        int rightMax  = arr[i];
        //Finding Maximum height bar on the right side  - rightMAX
        for(int j = i+1; j<n; j++){
            rightMax = max(rightMax, arr[j]);
        }

        //Finally evaluating the result for every ith bar and appending the result after every iteration

        res += ( min(leftMax, rightMax) - arr[i]);
        //Subtracting the height of the bar from the second highest bar from the corners in order to record the amount of water




    }

    

    return res;


}



//Efficient Solution

int efficientSolution(int arr[], int n ){


    int res = 0;
    int leftMax[n];
    int rightMax[n];


    //Precomputing LeftMax Array

    leftMax[0] = arr[0];

    for(int i = 1; i<n; i++){

        leftMax[i] = max(leftMax[i], arr[i-1]);

        //Comparing the prev and current elemennt and storing the max into ith position

    }

        //Precomputing RightMax Array

    rightMax[n-1] = arr[n-1];

    for(int i = n-2 ; i>=0; i--){
        rightMax[i] = max(rightMax[i], arr[i+1]);
        //Comparing the current and and next element and storing the max in the ith position

    }

    


    //Final Computation

    for(int i = 1; i<n-1; i++){
        res += (min(leftMax[i], rightMax[i]) - arr[i]);
    }

    return res;
}




//Driver Function

int main(){

        int arr[] = {3,0,1,2,5};

        int size = sizeof(arr)/sizeof(arr[0]);

        //naiveTrapping(arr, size);

        cout<<efficientSolution(arr, size);

    return 0;
}