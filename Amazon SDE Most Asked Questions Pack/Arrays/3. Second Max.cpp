int print2largest(int arr[], int n) {
	    // code here
	    int largest = -1, res = -1;
	    
	    for (int i = 0 ; i <  n  ; i++){
	        largest = max(largest, arr[i]);
	    }
	    
	    for (int i =  0; i < n ; i++){
	        if(arr[i] != largest){
	            res = max(res, arr[i]);
	        }
	    }
	    
	    return res;
	}
