#include <bits/stdc++.h>

using namespace std;



int checkSorted(int arr[], int size){


    int flag = 0;

    for(int i = 0; i<size-1; i++){

        if(arr[i]<=arr[i+1]){
            continue;

        }

        else {
            ++flag;
        }

    }

if(flag == 0 || size == 1){
    cout<<"Sorted :)";

}
else{
    cout<<"Not Sorted !";
}

return 0;

}



//Driver Function

int main(){

l̥
    int arr[] = {10,20,30,40};

    int size = sizeof(arr)/sizeof(arr[0]);

    checkSorted(arr, size);

}