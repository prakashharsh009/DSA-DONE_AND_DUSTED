#include <bits/stdc++.h>

using namespace std;









//Super-Naive Repeating  - 0n^2

int naiveRepeating(int arr[] ,int  n){

int count  = 1;

for(int i = 0; i<n ; i++){

    for(int j = i+1 ; j<n ; j++){

        if(arr[i] == arr[j]){
            count++;
        }

        else continue;

    }

    if (count >2){
        return i;
    }
}
return 0;

}


//Naive Approach - Array Sorting (O(nlogn))

int naiveusingSort(int arr[], int n){


    sort(arr , arr + n );

    //Now performing Checks


    for(int i = 1; i<n-1 ; i++){

            if(arr[i] == arr[i-1]){
                return arr[i];
            }

    }

return -1;
}



//EFFICIENT APPROACH - (O(N) TIME AND O(N) SPACE)

int efficientRepeating(int arr[], int n ){


    bool visited[n] ; 

    for(int i = 0; i<n; i++){

        if(arr[i] == arr[i+1]){
            visited[i]  = tru
        }

    else{
        visited[i] = true;
    }



    }



}









//Driver Function

int main(){


    int arr[] = {0,2,1,4,4,4,3};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<naiveusingSort(arr , size);

    return 0;




}