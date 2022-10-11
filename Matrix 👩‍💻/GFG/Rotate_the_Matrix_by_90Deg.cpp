#include <bits/stdc++.h>
#define M 3
#define N 3
 
using namespace std;




// TRANSPOSE AND THEN REVERSE INDIVIDUAL COLUMNS

void rotateEfficient(int mat[M][N]){


    //Transpose

    for (int i = 0  ; i < M ; i++){

        for (int j = i +1 ; j <N ; j++){

                swap(mat[i][j] , mat[j][i]);

        }

    }


    //Reversing individual row


    for (int i  = 0 ; i < M ; i++){

        int low = 0;
        int high  = M - 1;

        while (low < high){
            swap(mat[low], mat[high]);
            low++;
            high--;
        }


    }


//printing
    for (int i = 0 ; i < N ; i++){
        for (int j = 0 ; j< N ; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


}



//Driver Function 
int main(){

    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    rotateEfficient(mat);


    return 0;
}