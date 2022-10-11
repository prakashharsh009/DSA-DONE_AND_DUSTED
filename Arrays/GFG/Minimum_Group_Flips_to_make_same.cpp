#include <bits/stdc++.h>

using namespace std;



//Function
void flipsrequired(int arr[], int n){



    for (int i = 1 ; i <n ; i++){

        if(arr[i] != arr[i-1]){
                if(arr[i] != arr[0]){
                    cout<<"From "<<i<<" to ";
                }
                else{
                    cout<<(i-1)<<endl;
                }
        }


    }
    if(arr[0] != arr[n-1]){
        cout<<(n-1)<<endl;
    }

}





//Driver Function
int  main(){

    int arr[] = {1,1,0,0,0,1,0 };
    int size = sizeof(arr)/sizeof(arr[0]);

    flipsrequired(arr, size);


    return 0;
}