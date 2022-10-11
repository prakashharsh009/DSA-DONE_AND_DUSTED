 #include <bits/stdc++.h>

 using namespace std;

//Naive Approach
int twoOddOccuring(int arr[], int n){


for(int i = 0; i<n; i++){

    int count = 0;

    for(int j = 0; j<n; j++){

        if(arr[i] == arr[j]){

            count++;

        }
        
    }
    if(count%2 != 0){
        cout<<arr[i]<<endl;
    }

}


return 0;

}

//Efficient Approach

int twoOddOccuringEff(int arr[], int n){


    





}








//Driver Function
int main(){

int arr[] = {3,4,4,5,4,4,6,6};

int size = sizeof(arr)/sizeof(arr[0]);

twoOddOccuring(arr, size);

    return 0;
}