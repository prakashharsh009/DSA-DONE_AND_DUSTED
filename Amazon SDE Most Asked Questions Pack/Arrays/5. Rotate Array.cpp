void rotateArr(int arr[], int d, int n){
    // code here
    
    while ( d > n){
        d -= n;
    }
    reverse(arr, arr+d);
    reverse(arr+d , arr+ n);
    reverse(arr, arr+n);
  
}
