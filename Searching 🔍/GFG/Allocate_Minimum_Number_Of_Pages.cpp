#include <bits/stdc++.h>

using namespace std;


int isFeasible(int arr[], int n , int k , int ans);




int allocateMinimum(int arr[], int n , int k  ){

int maximum =  0;
int sum = 0;

for(int i = 0; i<n ; i++){

    sum+=(arr[i]);
    maximum = max(maximum , arr[i]);

}

int low = maximum; 
int high = sum;
int result = 0;

while(low<=high){


    int mid = (low+high)/2;

    if(isFeasible(arr , n  , k , mid )){

        result  = mid ; 
        high = mid-1;

    }

    else{
        low = mid+1 ; 
    }


}
return result;
}



int isFeasible(int arr[], int n , int k , int ans){


    int sum = 0;
    int studentCount = 1;

    for(int i = 0; i<n; i++){

        if(sum+arr[i] > ans){

                studentCount++;
                sum = arr[i];


        }
        else{
            sum += arr[i];
        }


    }

    if(studentCount <= k){
        return true;
    }
return false ; 

}










//Driver Fuunction

int main(){


    int arr[] = {10,30,10,30};

    int size = sizeof(arr)/sizeof(arr[0]);

    int k = 2;
    cout<<allocateMinimum(arr , size, k);

return 0;
}




