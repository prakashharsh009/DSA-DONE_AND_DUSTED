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
