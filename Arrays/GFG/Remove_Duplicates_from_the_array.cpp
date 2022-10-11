#include <bits/stdc++.h>

using namespace std;



int naiveRemove(int arr[], int n){


    //Create a Temporary Variable of the same size of original array
    int temp[n];

    int finalSize = 1; //Counter of the size of the finalArray received upon comparison

    //Copy the first element as it is
    temp[0] = arr[0];


        for(int i = 1; i<n ; i++){

            if(temp[finalSize-1] != arr[i]){
                temp[finalSize] = arr[i];
                finalSize++;
            }


        }

        for(int i = 0; i<finalSize; i++){
            arr[i] = temp[i];
        }
        return finalSize;

}



//Efficient Approach

int efficientRemove(int array[], int n){

    int finalSize = 1;

    for(int i = 1; i<n; i++){
        if(array[finalSize-1] != array[i]){
            finalSize++;
        }
    }

return finalSize;

}




//Driver Function

int main(){

    int array[] = {10,20, 25, 35, 35, 35, 45};

    int size = sizeof(array)/sizeof(array[0]);

    cout<<efficientRemove(array,  size);

}