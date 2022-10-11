#include <bits/stdc++.h>

using namespace std;



int secondLargestFinder(int arr[], int n){


    int largest = 0;
    int secondLargest = -1; //Any value other than the index of an array, so that we can update it later


    for(int i = 1; i<n; i++){

        if(arr[i]>arr[largest]){
            secondLargest = largest;
            largest = i;

        }

        else if(arr[i] != arr[largest]){

            if(secondLargest == -1 ||  arr[secondLargest]<arr[i]){

                    secondLargest = i;
            }
        }


    }
    return secondLargest+1;


}






//Driver Function
int main(){

    int array[] = {55,51,35,45,2,65};

    int n = sizeof(array)/sizeof(array[0]);

    cout<<secondLargestFinder(array, n);

}