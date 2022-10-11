//Majority element is the element which appears more than size/2 times in an array where size is the length of array


#include <bits/stdc++.h>

using namespace std;



//Naive Approach (On^2)

int majorityElementNaive(int arr[], int size){


    

    for(int i = 0; i<size ; i++){

        int count = 1;

        for(int j = i+1  ; j<size ; j++){

            if(arr[i] == arr[j]){

                count++;

            }

        }

        if(count>(size/2)){
            return i;
        }

    }

return -1;


}






///Efficient Approach - BOYER-MOORE ALGORITHM

int getMajority(int arr[], int size){


    //First Phase 

    int res  = 0 , count = 1;

    for(int i = 1; i<size ; i++){

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

    //SECOND PHASE 

    int finalCounter = 0;

    for( int i = 0 ; i <  size ; i++){

        if(arr[i] == arr[res]){
            finalCounter++;
        }

    }

    
        if(finalCounter<=(size/2)){
            return -1;
        }

        return res;

}







//Driver Function

int main(){


    int arr[] = {6,8,4,8,8[]};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<getMajority(arr , size);

    return 0;

}