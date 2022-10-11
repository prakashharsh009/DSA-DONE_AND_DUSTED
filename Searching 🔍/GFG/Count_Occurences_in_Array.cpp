#include <bits/stdc++.h>

using namespace std;



//Function Prototyping
int recursiveBinaryFirst(int arr[], int size, int element, int low, int high);
int recursiveBinaryLast(int arr[], int size, int element, int low, int high);





    //Main Count Occurence Function

    int countOccurence(int arr[], int size, int element, int low, int high)
{

    int first  = recursiveBinaryFirst(arr , size, element, 0 , size-1);
    int last =   recursiveBinaryLast(arr, size, element, 0, size - 1);

        if(first == -1)
    {
        return 0; // No elements present of that value
    }

    else{
        return ( last - first + 1);
    }
}

//First Occurence Function

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




//Last Occurence Function
int recursiveBinaryLast(int arr[], int size, int element, int low, int high)
{

    //Base Case
    if (low > high)
    {
        return -1; //Element not present
    }

    int mid = (low + high) / 2;

    if (arr[mid] == element)
    {

        if (arr[mid] != arr[mid + 1])
        {
            return mid;
        }

        else
        {
            return recursiveBinaryLast(arr, size, element, mid + 1, high);
        }
    }

    else if (arr[mid] > element)
    {
        return recursiveBinaryLast(arr, size, element, low, mid - 1);
    }

    else
    {
        return recursiveBinaryLast(arr, size, element, mid + 1, high);
    }
}





//Driver Function
int main(){

    int arr[] = {5, 10, 10, 10, 10, 20, 20};

    int size = sizeof(arr) / sizeof(arr[0]);

    int element = 10;

    int low = 0;
    int high = size - 1;

    cout << countOccurence(arr, size, element, low, high);

    return 0;
}