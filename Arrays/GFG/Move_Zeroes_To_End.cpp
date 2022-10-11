#include <bits/stdc++.h>

using namespace std;




//Naive Approach

int naiveMoveZeroes(int array[], int n){

    for(int i = 0; i<n; i++){
        if(array[i] == 0){
            for(int j = i+1; j<n; j++){

                if(array[j] != 0){
                swap(array[i], array[j]);
                }
            }
        }
    }



return 0;

}



//Efficient Approach - Single Traversal of the array

int efficientApproach(int arr[], int n){

    int count = 0; //Counter of the first non-zeroes element

    for(int i = 0; i<n; i++){

        if(arr[i] != 0){

            swap(arr[i], arr[count]);
            count++;

        }




    }
return 0;

}











/* Utility function to print an array */
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}

//Driver Function
int main(){

    int array[] = {8,5,0,0,10,0,20};

    int size = sizeof(array)/sizeof(array[0]);

    efficientApproach(array, size);
    printArray(array, size);

    return 0;
}