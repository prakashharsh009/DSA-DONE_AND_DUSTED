#include <bits/stdc++.h>

using namespace std;

//Function Prototyping
int recursiveBinaryFirst(int arr[], int size, int element, int low, int high);



//Count Ones Function

int countOnes(int arr[], int size , int element, int low , int high){


    int first = recursiveBinaryFirst(arr, size, 1, 0, size-1);

    if(first == -1){
        return 0; //No One's present
    }


    else{
        return (size-first);
    }


}







    //Utility Function - First Occurence
    int recursiveBinaryFirst(int arr[], int size, int element, int low, int high)
{

    //Base Case
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == element)
    {

        if (arr[mid] != arr[mid - 1])
        {
            return mid;
        }

        else
        {
            return recursiveBinaryFirst(arr, size, element, low, mid - 1);
        }
    }

    else if (arr[mid] > element)
    {
        return recursiveBinaryFirst(arr, size, element, low, mid - 1);
    }
    else
    {
        return recursiveBinaryFirst(arr, size, element, mid + 1, high);
    }
}






//Driver Function
int main(){

    int arr[] = {0,0,0,1,1,1,1};

    int size = sizeof(arr) / sizeof(arr[0]);

    int element = 10;

    int low = 0;
    int high = size - 1;

    cout << countOnes(arr, size, element, low, high);
    return 0;
}