#include <bits/stdc++.h>

using namespace std;


//Function Prototyping
int recursiveBinary(int arr[], int n, int element, int low, int high);





    //Main Function

    int search(int arr[], int size, int element, int low, int high)
{

    //Base Case 
    if( low >high){
        return -1 ; //Doesnt exists
    }


    int mid  = (low+high)/2;

    if(arr[mid] == element){

        return mid; 


    }

    else {

        //WHEN X LIES IN FIRST HALF 

        if(arr[low] < arr[mid]){

        if(element >= arr[low] && element < arr[mid]){

           return  recursiveBinary(arr, size , element , 0 , mid-1);

        


        }
        else{
           return  recursiveBinary(arr , size , element , mid+1 , high);
        }
        }

        //WHEN X LIES IN SECOND HALF 

        else {

                if(element > arr[mid] && element <= arr[high]){


                        return recursiveBinary(arr , size , element  , mid+1 , high);



                }

                else{
                    return recursiveBinary(arr , size , element , low , mid-1);
                }


        }



    }
}

// Utility Function - Binary Search

int recursiveBinary(int arr[], int n, int element, int low, int high)
{

    //Base Case
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == element)
    {
        return mid;
    }
    else if (arr[mid] > element)
    {
        return recursiveBinary(arr, n, element, low, mid - 1);
    }

    else
    {
        return recursiveBinary(arr, n, element, mid + 1, high);

    }
}

//Driver Function

int main(){
    
    int arr[] = {100,200,500,1000,2000,20};

    int size  = sizeof(arr)/sizeof(arr[0]);

    int element = 2000;

    int low = 0;
    
    int high = size - 1;

    cout<<search(arr, size , element , low , high);



}