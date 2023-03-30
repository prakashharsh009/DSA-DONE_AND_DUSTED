//Basic Recursion
int func(int i , int j, int n, vector<vector<int>> &triangle){

	//Base Case
	if(i == n-1) return triangle[n-1][j];

	int down = triangle[i][j] + func(i+1, j,n, triangle);
	int diag = triangle[i][j] + func(i+1, j+1,n, triangle);

	return min(down,diag);
}

//DYNAMIC PROGRAMMING - MEMOIZATION
int memo(int i , int j, int n, vector<vector<int>> &triangle,vector<vector<int>>& dp){

	//Base Case
	if(i == n-1) return triangle[i][j];

	if(dp[i][j] != -1) return dp[i][j];
	int down = triangle[i][j] + memo(i+1, j,n, triangle,dp);
	int diag = triangle[i][j] + memo(i+1, j+1,n, triangle,dp);

	return dp[i][j] = min(down,diag);
}

//DYNAMIC PROGRAMMING - TABULATION
