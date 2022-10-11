#include <bits/stdc++.h>
#define M 4
#define N 4



using namespace std;


void printBound(int arr[M][N]){


//PART 1    1   2   3   4
for (int i = 0 ; i < 1 ; i ++){
    for (int j = 0 ; j < N ; j++){
        cout<<arr[i][j]<<" "; 
    }
}


//PART 2    8   12  16

for (int i = 1 ; i < M ; i++){
    for ( int j =  N -1  ; j < N ; j++){
        cout<<arr[i][j]<<" ";
    }
}

//PART 3    15  14  13
for (int i  = M - 1 ; i < M ; i++){
    for (int j = N-2 ; j >= 0 ; j--){
        cout<<arr[i][j]<<" ";
    }
}

//PART 4    9   5
for (int i = M-2 ; i > 0 ; i--){
    for (int j  = 0 ; j <= 0 ; j++){
        cout<<arr[i][j]<<" ";
    }
}



}



// Driver Function 

int main(){


    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};


        printBound(arr);



}