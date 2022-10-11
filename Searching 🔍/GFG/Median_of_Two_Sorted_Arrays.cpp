#include <bits/stdc++.h>

using namespace std;



//O(nlogn) - Naive Approach

int naiveMedian(int arr1[], int arr2[], int n1 , int n2 ){

int size = n1+n2;
int temp[n1+n2];


for(int i = 0 ; i<n1 ; i++){

    temp[i] = arr1[i];
}

int j = 0;
for(int i  = n1 ; i<size ; i++){

    
    temp[i] = arr2[j];
    j++;
}

int low = 1;
int high = size;


sort(temp , temp+size);

    int mid = (low+high)/2;


if(size %2 == 0){

        float oddRes = (temp[mid]+temp[mid-1])/2;

        return oddRes ;

}

    else{
        return temp[mid];
    }


}





//Driver Function
int main(){

    int arr1[] = {10,20,30,40,50};

    int arr2[] = {5,15,25,35,45};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);


    cout<<naiveMedian(arr1 , arr2 , n1 , n2);

    return 0;
}