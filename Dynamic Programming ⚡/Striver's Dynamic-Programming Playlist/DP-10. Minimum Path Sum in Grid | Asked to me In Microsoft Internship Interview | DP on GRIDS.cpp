//Basic Recursion
int func(int i, int j, vector<vector<int>> &grid){

    //Base Cases
    if(i == 0 and j == 0)return grid[0][0];

    //out of bound
    if(i < 0 or j < 0) return 1e9;

    int up = abs(grid[i][j] + func(i-1,j,grid));
    int left = abs(grid[i][j] + func(i, j-1, grid));

    return min(up,left);

}

//DYNAMIC PROGRAMMING - MEMOIZATION
int func(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp){

    //Base Cases
    if(i == 0 and j == 0)return grid[0][0];

    //out of bound
    if(i < 0 or j < 0) return 1e9;

    if(dp[i][j] != -1) return dp[i][j];

    int up =  grid[i][j] + func(i-1,j,grid,dp);
    int left = grid[i][j] + func(i, j-1, grid,dp);

    return dp[i][j] = min(up,left);

}

//DYNAMIC PROGRAMMING - TABULATION
int tab(int m , int n , vector<vector<int>> &grid){

    vector<vector<int>> dp(m, vector<int>(n,0));

    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){

            if(i == 0 and j == 0) dp[i][j] = grid[i][j];

            else{
                int up  = 1e9, left = 1e9;

                if(i > 0) up = grid[i][j] + dp[i-1][j];
                if(j > 0) left = grid[i][j] + dp[i][j-1];

                dp[i][j] = min(up, left);
            }

        }
    }
    return dp[m-1][n-1];
}

//SPACE OPTIMISED
