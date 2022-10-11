#include <bits/stdc++.h>

using namespace std;

int pairCount(int arr[], int low, int high, int sum);





    //Main Function

    int tripletCount(int arr[], int size, int sum)
{

    int count = 0;
    int pairCountCurrent = 0;

    for(int i = 0; i<size; i++){

         pairCountCurrent =  pairCount(arr, i + 1, size - 1, sum - arr[i]);

            if (pairCountCurrent)
        {
            count++;
        }
    }

return count++;


}




//Utility Function

int pairCount(int arr[] , int low , int high , int sum){


  
    int count = 0;

    while(low<high){

        if(arr[low] + arr[high] == sum){
            count ++;
        }

        else if(arr[low] +arr[high] > sum){
            high--;
        }
        else{
            low++;
        }


    }

return count;


}



//Driver Function

int main(){


    int arr[] = {2,3,4,8,9,20,40};

    int size = sizeof(arr)/sizeof(arr[0]);

    int sum = 31;


    cout<<tripletCount(arr , size , sum);


}