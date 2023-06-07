 int minDist(int arr[], int n, int x, int y) {
        // code here
       int p = -1, min_dist = INT_MAX;
     
        for(int i=0 ; i<n ; ++i)
        {
            if(arr[i]==x || arr[i]==y)
            {
                //we will check if p is not equal to -1 and
                //If the element at current index matches with
                //the element at index p , If yes then update
                //the minimum distance if needed
                if( p != -1 && arr[i] != arr[p])
                    min_dist = min(min_dist , i-p);
                  
                //update the previous index
                p=i;
            }
        }
    //If distance is equal to int max
    if(min_dist==INT_MAX)
        return -1;
 
    return min_dist;
    }
