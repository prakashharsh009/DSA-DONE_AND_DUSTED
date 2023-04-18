// regardless of the position in column 
int func(int i1, int j1, int j2, int m, int n, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp){

    //Out of Bound Test Case
    if(j1 < 0 or j1 >= m or j2 < 0 or j2 > m) return 0;


    //Destination Test Case
    if(i1 == m-1){
        if(j1 == j2) return grid[i1][j1];
        else return grid[i1][j1] + grid[i1][j2];
    }

    if(dp[i1][j1][j2] != -1) return dp[i1][j1][j2];

    //exploring all paths - 3 x 3 movement (for simulataneous traversal of Alice and Bob)
    int maxi = 0;
    for (int dj1  = -1 ; dj1 <= 1 ; dj1++){
        for (int dj2 = -1 ; dj2 <= 1 ; dj2++){
          int value = 0;
          if (j1 == j2) value =  grid[i1][j1];
          else value = grid[i1][j1] + grid[i1][j2];
          value += func(i1 + 1, j1 + dj1, j2 + dj2, m, n, grid, dp);
          
          maxi = max(maxi,value);
        }
    }
    return dp[i1][j1][j2] = maxi;
}


//DYNAMIC PROGRAMMING - TABULATION
int tabulation(int r, int c, vector<vector<int>> &grid){

 
    vector<vector<vector<int>>> dp(r+1, vector<vector<int>>(c+1, vector<int>(c+1,-1))); 

    //Base Case
    for (int j1  = 0 ; j1 < c ; j1++){
        for (int j2  = 0 ; j2 < c ; j2++){
            if(j1 == j2) dp[r-1][j1][j2] = grid[r-1][j1];
            else dp[r-1][j1][j2] = grid[r-1][j1] + grid[r-1][j2];
        }
    }

    for (int i =  r-2 ; i >= 0 ; i--) {        
        for (int j1 = 0 ; j1 < c; j1++){
          for (int j2 = 0; j2 < c; j2++) {
              int maxi = -1e8;
                for (int dj1  = -1 ; dj1 <= 1 ; dj1++){
                for (int dj2 = -1 ; dj2 <= 1 ; dj2++){

                        int value = 0;

                        if (j1 == j2) value = grid[i][j1];
                        else value = grid[i][j1] + grid[i][j2];

                        //out of bound check
                        if(j1+ dj1 >= 0 and j1 + dj1 < c and j2+dj2 >= 0 and j2+ dj2 < c){
                            value += dp[i + 1][j1 + dj1][j2 + dj2];
                        }
                        else value += -1e8;
                        
                        maxi = max(maxi,value);
                    }
                }
                dp[i][j1][j2] = maxi;

          }
        }
    }
    return dp[0][0][c-1];
}

