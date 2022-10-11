#include <bits/stdc++.h>
#define M 4
#define N 4

using namespace std;



//Function
void transposeMat(int mat[M][N]){

    int transpose[M][N];

    for (int i = 0 ; i < M ; i++){

        for (int j  = 0 ; j < N ; j++){
                transpose[j][i] = mat[i][j];
        }


    }

    for (int i = 0 ; i < M ; i++){

        for (int j = 0 ; j < N ; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }


}



void swap(int  *x , int *y){

    int temp = *x;
    *x = *y;
    *y = temp;

}


//Efficient Approach 
void efficientApproach(int mat[M][N]){

    for(int i = 0 ; i < M ; i++){
        for (int j = i+1 ; j < N ; j++){
            swap(&mat[i][j], &mat[j][i]);
        }
    }


     for (int i = 0 ; i < M ; i++){

        for (int j = 0 ; j < N ; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


}




//Driver Function
int main(){

    int mat[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    efficientApproach(mat);


    return 0;
}