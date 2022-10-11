#include <bits/stdc++.h>
using namespace std;



void printMat( int mat[3][2]){

    for (int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}


//Pass vector of vectors


void printMatVector(vector <vector<int>> &arr){

    for (int i = 0 ; i < arr.size() ; i++){
        for (int j = 0 ; j <arr[i].size() ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}



//Driver Function
int main(){

    int m = 3 , n = 3;

    int mat[3][2] = {{10,20},{20,30},{30,40}};


    vector <vector<int>> arr;

    for (int i =  0 ; i < m ; i++){

        vector <int> v;
        for (int j = 0 ; j < n ; j++){
            v.push_back(5);
        }
        arr.push_back(v);

    }





    printMatVector(arr);

    return 0;
}