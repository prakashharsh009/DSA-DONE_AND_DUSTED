//Basic Recursion
int func(int i , int j , vector<vector<int>> &matrix){

    //BASE CASES

    //Out of Bounds Check  - only for J beacuse i will always be in check
    if(j  < 0 or j >= matrix[0].size()) return -1e9;
    if(i == 0) return matrix[0][j];
  
    int up  = matrix[i][j] + func( i - 1 , j , matrix);
    int leftdiag = matrix[i][j] + func( i - 1, j - 1, matrix);
    int rightdiag = matrix[i][j] + func( i - 1, j + 1, matrix);
  
    return max(up, max(leftdiag, rightdiag));
}

//DYNAMIC PROGRAMMING - MEMOIZATION
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
