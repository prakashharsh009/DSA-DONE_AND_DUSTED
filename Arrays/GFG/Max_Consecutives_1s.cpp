#include <bits/stdc++.h>

using namespace std;



//Naive Approach

int naiveMax(int arr[] , int n ){

    int res = 0;

    


    for(int i = 0; i<n; i++){

        int currentCount = 0;

        for(int j = i; j<n; j++){
            if(arr[j] == 1){
                currentCount++;
            }
            else break;
        }

        res = max(res, currentCount);

    }

    return res;

}
//Efficient Approach


int efficientMax(int arr[], int n){

    int res  = 0;
    int currentCounter = 0;

    for(int i = 0; i<n; i++){


        if(arr[i] == 0){
            currentCounter = 0;
        }
        else{
            currentCounter++;
            res = max(currentCounter, res);
        }


    }
return res;

}




//Driver Function
int main(){

        int arr[] = {1,0,1,1,1,1,0,1,1};

        int size = sizeof(arr)/sizeof(arr[0]);

        cout<<efficientMax(arr, size);

    return 0;
}