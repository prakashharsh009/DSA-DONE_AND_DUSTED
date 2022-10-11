#include <bits/stdc++.h>

using namespace std;



int leftRotate(int arr[], int n){


 

    int temp = arr[0];

    for(int i = 0; i<n; i++){

        arr[i] = arr[i+1];

    }

    arr[n-1] = temp;
    
    return 0;

}



0

/* Utility function to print an array */
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}

//Driver Function

int main(){

    int array[] = {1,2,3,4,5};

    int size = sizeof(array)/sizeof(array[0]);

    leftRotate(array, size);
    printArray(array, size);

}