int func(int i1, int j1, int j2, int m, int n, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp){

    //Out of Bound Test Case
    if(j1 < 0 or j1 >= m or j2 < 0 or j2 > m) return -1e9;


    //Destination Test Case
    if(i1 == m-1){
        if(j1 == j2) return grid[i1][j1];
        else return grid[i1][j1] + grid[i1][j2];
    }

    if(dp[i1][j1][j2] != -1) return dp[i1][j1][j2];

    //exploring all paths - 3 x 3 movement (for simulataneous traversal of Alice and Bob)
    int maxi = 0;
    for (int dj1  = -1 ; dj1 <= +1 ; dj1++){
        for (int dj2 = -1 ; dj2 <= +1 ; dj2++){
            
          if (j1 == j2) {
            maxi = max(maxi, grid[i1][j1] + func(i1 + 1, j1 + dj1, j2 + dj2,
                                                   m, n, grid, dp));
          } else {
            maxi = max(maxi,grid[i1][j1] + grid[i1][j2] +
                            func(i1 + 1, j1 + dj1, j2 + dj2, m, n, grid, dp));
          }
        }
    }
    return dp[i1][j1][j2] = maxi;
}
