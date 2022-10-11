// QUESTION FIND PAIRS OF THE SUM PROVIDED IN THE ARRAY


#include <bits/stdc++.h>

using namespace std;



bool twoPointer (int arr[], int size , int sum)
{

    int low = 0;
    int high = size - 1;


    while(low<high){

        if(arr[low] + arr[high]  ==  sum){

                return true;


        }
        else if( arr[low] +  arr[high] >sum ){
            high--;
        }

        else{
            low++;
        }

    }
return false;

}


//Driver Function
int main(){


    int arr[] = {2,4,8,9,11,12,20,30};
    int size = sizeof(arr)/sizeof(arr[0]);

    int sum = 23;


    cout<<twoPointer(arr , size , sum);

    return 0;

}