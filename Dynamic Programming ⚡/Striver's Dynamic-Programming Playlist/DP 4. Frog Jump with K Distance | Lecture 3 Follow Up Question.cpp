//Basic Recursion
int func(int index, vector<int> &heights, int K){
  
  if(index == 0) return 0;
  
  int minSteps  = INT_MAX;
  
  for (int i  = 1 ; i <= K ; i++){
    
    if(index - i >= 0){
    int jump = func(index-i, heights, K) + abs(heights[index] - heights[index-i]);
    
    minSteps = min(minSteps, jump);
   }
  }
  
  return minSteps;
}

//DYNAMIC PROGRAMMING - MEMOIZATION
int func(int index , int K , vector<int> &heights, vector<int> &dp){
  
  if(index == 0) return 0;
  
  if(dp[index] != -1) return dp[index];
  
  int minSteps = INT_MAX;
  
  for (int i = 1 ; i <= K ; i++){
    if(index - i >= 0 ){
      int jump = func(index - i ; K  ,heights, dp) +  abs(heights[index] - heights[index-i]);
      minSteps = min(minSteps, jump);
    }
  }
  return dp[index] = minSteps;
}

//DYNAMIC PROGRAMMING - TABULATION
int func(int n, int K , vector<int> &heights, vector<int> &dp){
  
  dp[0] = 0;
  
  for (int i = 1 ; i <= n ; i++){
    int minSteps  = INT_MAX;
    
    for (int j = 1  ; j <= K ; j++){
      if(i - j >= 0){
      int jump = dp[i - j] + abs(heights[i] - heights[i-j]);
      minSteps = min(minSteps , jump);
    }
  }
  dp[i] = minSteps;
  }
  return dp[n-1];
}

//SPACE OPTIMISED

    
