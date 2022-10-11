#include <bits/stdc++.h>
#define M 3
#define N 3

using namespace std;



//Function - Naive
void naiveMedian(int mat[M][N]){

    vector<int> v;

    for (int i = 0 ; i < M ; i++){
        for (int j  = 0 ; j < N ; j++){

                v.push_back(mat[i][j]);

        }
    }

    sort(v.begin() , v.end());

    int  low  = 0;
    int  high  = v.size();
    int mid  = (low +high )/ 2;

    cout<<v[mid];

}


//Effcicient Approach









//Driver Function
int main(){

    int mat[3][3] = {{1,10,20},{15,25,35},{5,30,40}};

    naiveMedian(mat);


    return 0;
}