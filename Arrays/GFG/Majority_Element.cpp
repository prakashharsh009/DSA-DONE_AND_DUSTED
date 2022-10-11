#include <bits/stdc++.h>

using namespace std;


//Naive Method
int naiveMajority(int arr [], int size){

    int target = size/2;
    

    for (int  i = 0 ; i < size ; i++){

            int currCount = 1;

            for (int j = i+1 ; j < size ; j++){

                if(arr[i] == arr[j]){
                    currCount++;
                }


            }
        if(currCount > target){
            return i;
        }

    }
    return  -1;
}



//EFFICIENT METHOD - BOYER - MOORE'S MAJORITY VOTE ALGORITHM

//The algorithm consists of two phases , one returns max index and second checks if its majority

int boyerMoore(int arr[], int n){



    //  RETURNING THE MAX INDEX  - 1ST PHASE

    int res = 0;
    int count = 1;

    for (int i = 1; i < n ; i++){  

        if(arr[i] == arr[res]){
                count++;
        }
        else{
            count--;
        }

        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    



    // VERIFYING IF ITS MAJORITY ELEMENT - 2ND PHASE

    int count2 = 0;
    
    for (int i = 0;  i  < n ; i++){

        if(arr[i] == arr[res]){
            count2++;
        }

    }

    if(count2 <= n/2){
        res = -1;
    }

return res;

}



//Driver Function
int main(){

    int arr[] =  {20,30,40,50,50,50,50};
    int size  = sizeof(arr)/sizeof(arr[0]);

    cout<<boyerMoore(arr,size);


    return 0;
}