int largestelement(int arr[], int n ){

    int maxIndex = 0; //Index of the max element in the array

    for(int i = 0; i<n-1; i++){


        if(arr[maxIndex] <= arr[i+1] ){
            maxIndex = i+1;
        }
        else continue;

 }

    cout<<"Max element is at the position "<<maxIndex+1;

    return 0;   

}
