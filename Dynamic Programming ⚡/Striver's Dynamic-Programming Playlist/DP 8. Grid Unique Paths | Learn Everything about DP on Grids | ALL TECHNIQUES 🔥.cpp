//BASIC RECURSION
int func(int i , int j){

	//Base Case
	if(i == 1 and j == 1){
		return 1;
	}

	//if indices get out of bounds
	if(i < 0 or j < 0) return 0;

	int up   = func(i-1, j);
	int left = func(i, j-1);

	return up + left;
}

//DYNAMIC PROGRAMMING - MEMOIZATION
int memo(int i , int j , vector<vector<int>> &dp){

	if(i == 1 and j == 1) return 1;

	if(i < 0 or j < 0) return 0;

	if(dp[i][j] != -1) return dp[i][j];

	int up = memo(i-1, j, dp);
	int down = memo(i, j-1, dp);

	return dp[i][j] = up + down;
}

//DYNAMIC PROGRAMMING - TABULATION
