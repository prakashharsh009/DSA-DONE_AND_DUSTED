//BASIC RECURSION
int basicRecursion( int index, vector<int> &heights){

  if(index == 0){ return 0;}
  
       int left  = basicRecursion( index-1, heights) + abs(heights[index] - heights[index-1]);
       int right = INT_MAX;
    if(index > 1){
        right = basicRecursion( index-2, heights) + abs(heights[index] - heights[index-2]);

    }
    return min(left, right);

}

//DYNAMIC PROGRAMMING - MEMOIZATION
int memo(int index, vector<int> &heights, vector<int> &dp){
  
  if(index == 0) return 0;
  
  if(dp[index] != -1) return dp[index];
  
  int left = memo(index - 1, heights, dp) + abs(heights[index] - heights[index-1]);
  int right = INT_MAX;
  if(index > 1){
    right = memo(index - 2, heights, dp) + abs(heights[index] - heights[index-2]);
  }
  
  return dp[index] = min(left , right);
}


//DYNAMIC PROGRAMMING - TABULATION
int tab(int n, vector<int> &heights, vector<int> &dp){

    dp[0] = 0;
    int left, right;
    for (int i = 1 ;  i < n ; i++){
        left = dp[i - 1] + abs(heights[i] - heights[i-1]);
        right = INT_MAX;
        if(i > 1){
            right = dp[ i -2] + abs(heights[i] - heights[i-2]);
        }
        dp[i] = min(left, right);
    }
    return dp[n-1];
}

Note - There will always be a space optimised solution of questions like (indx - 1) (indx - 2)

//SPACE OPTIMISATION
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
   //vector<int> dp(n+1, -1);
   //int res =  memo(n-1, heights,dp);

   int left, right;
   int n1 = 0,n2 = 0;
   int n3;

   for (int i = 1 ; i < n ; i++){
      left = n2 + abs(heights[i] - heights[i-1]);
      right = INT_MAX;
      if(i > 1){
          right = n1 + abs(heights[i] - heights[i-2]);
      }

      n3 = min(left,right);
      n1 = n2;
      n2 = n3;
   }

   return n3;
}
