#include <bits/stdc++.h>

using namespace std;


int reverseArray(int array[], int size ){

    int start = 0;
    int end = size-1;

    while(start<end){

        int temp = array[end];
        array[end] = array[start];
        array[start] = temp;

        start++;
        end--;

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

    int array[] = {1,2,3,4};

    int size = sizeof(array)/sizeof(array[0]);
    

    reverseArray(array, size);
    printArray(array, size);
}