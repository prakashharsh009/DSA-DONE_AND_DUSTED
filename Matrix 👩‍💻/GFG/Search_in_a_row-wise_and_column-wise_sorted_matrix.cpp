#include <bits/stdc++.h>
#define M 4
#define N 4

using namespace std;



//Naive Method
void searchSortedMat(int mat[M][N], int key){


    for (int i = 0 ; i < M ; i++){

        for (int j = 0 ; j  < N; j ++){
            if(mat[i][j] == key){
                cout<<i<<j;
                return;
            }
        }

    }

    cout<<"Not present !";

}


//Efficient Search

//begin from the top right corner
//if key is same as position , print pos and return
//if key is smaller move left
//if key is greater then move down


void efficientSearchMat(int mat[M][N] , int key ){

    int R =  0;
    int C = N - 1;

//begin from the top right corner
    while (R<M && C>= 0){

        // if key is same as position , print pos and return

        if(mat[R][C] == key){
            cout<<R<<C;
            return;
        }

        // if key is smaller move left

        if(mat[R][C] > key){
            C--;
        }
        // if key is greater then move down

        else{
            R++;
        }

    }    

cout<<"NOT FOUND !";
}




//Driver Function
int main(){

    int mat[4][4] = {{10,15,27,32},{20,25,29,33},{30,35,37,39},{40,45,48,50}};

    efficientSearchMat(mat, 35);



}