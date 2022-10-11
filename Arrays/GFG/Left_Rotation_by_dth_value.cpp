#include <bits/stdc++.h>

using namespace std;





int leftrotationbyD(int arr[], int n){

    int temp = arr[0];

    for (int i = 0; i < n; i++)
    {

        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;

    return 0;
}


//Better Approach 




int leftRotatebyD(int arr[], int n, int d){

    int temp[d];

    for(int i = 0 ; i<d; i++){
        temp[i] = arr[i];
    }


    //Left Rotating by d

    for(int i = d; i<n; i++ ){
        
        arr[i-d] = arr[i];
    }


    //Combining temp and arr

    for(int i  = 0; i<d; i++){

        arr[n-d+i] = temp[i];

    }

    return 0;

}

int reversal(int arr[], int low, int high); //Function Prototyping to let know the reversalLeftFunction
                                            // know there exists a function reversal at some point in the program

    //Using Reversal Algorithm

    int reversalLeftRotation(int arr[], int n, int d)
{

    reversal(arr, 0, d - 1);

    reversal(arr, d, n - 1);

    reversal(arr, 0, n-1);

    return 0;
}

int reversal(int arr[], int low , int high){



    while(low<high){

        swap(arr[low], arr[high]);

        low++;
        high--;

    }

return 0;


}






/* Utility function to print an array */
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    
}








//Driver Function
int main(){

    int array[] = {1,2,3,4,5};

    int size = sizeof(array)/sizeof(array[0]);

    int d= 2;

   /* leftrotationbyD(array, size);
    leftrotationbyD(array, size);*/ //Naive Approach -  run left rotate by one function d times


    reversalLeftRotation(array, size, d);
    
    printArray(array, size);
    
    return 0;

}