#include <bits/stdc++.h>

using namespace std;



//Naive Approach 

int naiveOddNumber(int arr[] , int n){

    int count ;

for(int i = 0; i<n; i++){

     count = 0;
    for(int j = 0; j<n ; j++ ){

        if(arr[i] == arr[j]){
            count++;
        }

    }
    if (count % 2 != 0)
    {
        cout<<arr[i];
    }
}




return 0;

}


//Efficient Solution using XOR operation

int efficientOdd(int arr[], int n){


    int res = 0;

    for (int i = 0; i<n; i++){


        res = res^arr[i];


    }

return res;



}





//Driver Function
int main(){

    int arr[] = {4,3,4,4,4,2,2};
    int n  = sizeof(arr)/sizeof(arr[0]);


    cout<<efficientOdd(arr, n);


    return 0;
}