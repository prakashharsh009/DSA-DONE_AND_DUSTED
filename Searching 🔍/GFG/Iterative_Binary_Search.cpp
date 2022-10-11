#include <bits/stdc++.h>


using namespace std;




int naiveBinary(int arr[], int n, int element){


    int start = 0;
    int end = n-1;
    int mid;



    while(start<=end){

        mid = (start+end)/2;

        if(arr[mid] == element){
            return mid;
        }

        else if(arr[mid]<element){
            start = mid+1;
        
        }
        else if(arr[mid]>element){
        
            end = mid-1;
        }

    
    }



return -1;

}



//Driver Function
int main(){

int arr[] = {10,20,30,40,50,60};

int size = sizeof(arr)/sizeof(arr[0]);

int element = 70;

cout<<naiveBinary(arr, size, element);

return 0;

}