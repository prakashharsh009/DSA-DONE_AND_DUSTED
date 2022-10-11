#include <bits/stdc++.h>

using namespace std;



int frequency(int arr[], int n){

   int i = 1;

   int frequency = 1;

   while(i<n){

        while(i<n && arr[i] == arr[i-1]){


            frequency++;
            i++;


        }

       cout<<arr[i-1]<<" "<<frequency<<" ";     

       frequency = 1;
       i++;


   }


        //Corner Case

        if( n == 1 || arr[n-1] != arr[n-2]){
            cout<<arr[n-1]<<" "<<1<<" ";
        }

        return 0;

}



///Driver Function

int main(){

    int arr[] = {10,10,10,25,30,30};

    int size = sizeof(arr)/sizeof(arr[0]);

    frequency(arr, size);

    return 0;

    
}