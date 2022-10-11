#include <bits/stdc++.h>

using namespace std;




int getPeak(int arr[], int size){

int low  = 0;
int high = size - 1 ;


while ( low <= high){

    int mid = (low + high)/2;


    // Checking if the array contains only element or its a peak element (greater than its adjacent elements)

    if( (mid == 0 || arr[mid] >= arr[mid-1])  && (mid == size - 1  ||  arr[mid] >= arr[mid+1])){
        return mid;
    }

        else if( (mid > 0) && arr[mid - 1 ] >= arr[mid]){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
}

return -1;
}






//Driver Function
int  main(){


    int arr[] = {5,10,20,15,7};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<getPeak(arr , size );
    return 0;

}