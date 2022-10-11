#include <bits/stdc++.h>

using namespace std;


int recursiveBinary(int arr[], int size, int element, int low , int high){

    //Base Case
    if(low>high){
        return -1;
    }   

    int mid = (low+high)/2;

        if(arr[mid] == element){

            if(arr[mid] != arr[mid-1]){
                return mid;
            }

            else {
               return  recursiveBinary(arr, size , element, low , mid-1);
            }
        }

        else if( arr[mid] > element){
           return recursiveBinary(arr , size , element , low , mid-1);
        }   
        else{
           return  recursiveBinary(arr, size , element , mid+1 , high);
        }

}





//Driver Function
int main(){

    int arr[] = {10,20,30};

    int size = sizeof(arr) / sizeof(arr[0]);

    int element = 20;

    int low = 0;
    int high = size - 1;

    cout << recursiveBinary(arr, size, element, low, high);

    return 0;
}