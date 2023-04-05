//Basic Recursion
int func(int i , int j , vector<vector<int>> &matrix){
  
  //Base Cases
  if( j < 0 or j >= matrix[0].size()) return -1e9;
  if(i == 0) return matrix[0][j];
  
  int up = matrix[i][j] + func(i-1, j, matrix);
  int leftdiag = matrix[i][j] + func(i - 1, j - 1, matrix);
  int rightdiag = matrix[i][j] + func(i  - 1, j + 1, matrix);
  
  return max(up, max(leftdiag, rightdiag));
}


//DYNAMIC PROGRAMMING  - MEMOIZATION
int func(int i , int j , vector<vector<int>>& matrix, vector<vector<int>> &dp){

    //BASE CASES
    //Out of Bounds Check  - only for J beacuse i will always be in check
    if(j  < 0 or j >= matrix[0].size()) return -1e9;
    if(i == 0) return matrix[0][j];
    
    if(dp[i][j] != -1) return dp[i][j];

    int up  = matrix[i][j] + func( i - 1 , j , matrix,dp);
    int leftdiag = matrix[i][j] + func( i - 1, j - 1, matrix,dp);
    int rightdiag = matrix[i][j] + func( i - 1, j + 1, matrix,dp);

    return dp[i][j] =  max(up, max(leftdiag, rightdiag));
}


//DYNAMIC PROGRAMMING - TABULATION

int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n  = matrix.size();
    int m = matrix[0].size();
    int maxi = -1e9;

    vector<vector<int>> dp(n,vector<int>(m, -1));


    //Base Case - Filling the first row
    for (int j = 0 ; j < m ; j++){
        dp[0][j] = matrix[0][j];
    }

    for (int i = 1 ; i < n ; i++){
        for (int j =  0  ; j < m ; j++){

            int up        = matrix[i][j] + dp[i-1][j];
            int leftdiag  = matrix[i][j];
            if(j  - 1 >= 0) leftdiag += dp[i-1][j-1];
            else leftdiag += -1e9;
            //Out of Bound checks
            int rightdiag = matrix[i][j];
            if(j+1 < m) rightdiag+= dp[i-1][j+1];
            else rightdiag += -1e9;
            
            dp[i][j] = max(up, max(rightdiag, leftdiag));
        }
    }

   for (int j  = 0 ; j < m ; j++){
        maxi = max(maxi, dp[n-1][j]);
    }
    
    
   return maxi;
}

//SPACE OPTIMISED
int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n  = matrix.size();
    int m = matrix[0].size();
    int maxi = -1e9;

    vector<int> prev(m,0);

    //Base Case - Filling the first row
    for (int j = 0 ; j < m ; j++){
        prev[j] = matrix[0][j];
    }

    for (int i = 1 ; i < n ; i++){
        vector<int> temp(m,0);
        for (int j =  0  ; j < m ; j++){

            int up        = matrix[i][j] + prev[j];
            int leftdiag  = matrix[i][j];
            if(j  - 1 >= 0) leftdiag += prev[j-1];
            else leftdiag += -1e9;
            //Out of Bound checks
            int rightdiag = matrix[i][j];
            if(j+1 < m) rightdiag+= prev[j+1];
            else rightdiag += -1e9;
            
            temp[j] = max(up, max(rightdiag, leftdiag));
        }
        prev = temp;
    }

   for (int j  = 0 ; j < m ; j++){
        maxi = max(maxi, prev[j]);
    }
    
   return maxi;
}


//Note include this part in the main function so that we can get the maximum path since this question also has variable ending points
//For Basic and Memoization Soln Only
for (int j  = 0 ; j < m ; j++){
        maxi = max(maxi, func(n-1, j, matrix, dp));
    }
return maxi;
