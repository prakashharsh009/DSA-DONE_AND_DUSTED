#include <bits/stdc++.h>

using namespace std;



//Naive Solution - O(n^2)

int leaderArray(int arr[], int n ){


    bool flag = false ;

    for(int i = 0 ; i<n;i++){


        for(int j = i+1; j<n; j++){

                if(arr[i]<=arr[j]){
                    flag = true;

                    break;
                }


        }

        if(flag == false ){
            cout<<arr[i]<<" ";
        }

        flag = false;


    }



        return 0;
}



//Efficient Approach

int efficientLeader(int arr[], int n)
{

    cout<<arr[n-1]<<" ";
    //Since the last element is always a leader

    int currentLeader = arr[n-1];


    for(int i = n-2; i>=0; i--){


        if(arr[i]>currentLeader){
            currentLeader = arr[i];
            cout<<currentLeader<<" ";
        }



    }

    return 0;


}






//Driver Function
int main(){

    int arr[] = {7,10,4,3,6,5,2};

    int size = sizeof(arr)/sizeof(arr[0]);

    efficientLeader(arr, size);


    return 0;


}