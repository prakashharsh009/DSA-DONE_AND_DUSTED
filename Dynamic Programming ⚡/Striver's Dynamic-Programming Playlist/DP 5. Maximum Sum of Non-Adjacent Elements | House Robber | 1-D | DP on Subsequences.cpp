//Basic Recursion
int func(int index, vector<int> &nums){
    if(index == 0) return nums[index];
    if(index < 0) return 0;

    //Pick or NotPick Approach
    int pick = nums[index] + func(index - 2 , nums);
    int notpick = 0 + func(index - 1, nums);

    return max(pick , notpick);

}

//DYNAMIC PROGRAMMING - MEMOIZATION
int func(int index, vector<int> &nums, vector<int> &dp){
    if(index == 0) return nums[index];
    if(index < 0) return 0;

    if(dp[index] != -1) return dp[index];
    //Pick or NotPick Approach
    int pick = nums[index] + func(index - 2 , nums, dp);
    int notpick = 0 + func(index - 1, nums, dp);

    return dp[index] = max(pick , notpick);

}

//DYNAMIC PROGRAMMING - TABULATION
int tab(int n , vector<int> &nums, vector<int> &dp){

    dp[0] = nums[0];

    for (int i = 1 ; i < n ; i++){
        
        //Take or Not-Take Approach
        int take  = nums[i];
        if(i > 1) take += dp[i-2];
        int nottake = 0 + dp[i-1];

        dp[i] = max(take , nottake);
    }
    return dp[n - 1];
}

//SPACE OPTIMISED APPROACH 
int space(int n , vector<int> &nums){
    int prev = nums[0];
    int prev2 = 0;

    for (int i = 1 ; i < n ; i++){
        int take = nums[i];
        if(i > 1) take += prev2;
        int nottake = 0 + prev;

        int curri = max(take, nottake);

        prev2 = prev;
        prev = curri;
    }
    return prev; //prev would be at the position of dp[n-1];
}
