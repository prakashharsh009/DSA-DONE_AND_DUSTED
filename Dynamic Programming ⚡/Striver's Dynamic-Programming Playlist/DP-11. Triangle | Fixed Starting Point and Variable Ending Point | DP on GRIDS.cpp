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
int tab( int n, vector<vector<int>> &triangle){

	vector<vector<int>> dp(n, vector<int>(n,-1));

	//Since starting from the last row therefore filling the last row of DP with repective values from traingle 2D
	for (int j = 0 ; j < n ; j++){
		dp[n-1][j] = triangle[n-1][j];
	}
	for (int i = n-2 ; i >= 0 ; i--){
		for (int j = 0 ; j < i + 1 ; j++){
			int down = triangle[i][j] + dp[i+1][j];
			int diag = triangle[i][j] + dp[i+1][j+1];
			dp[i][j] = min(down,diag);
		}
	
	}
	return dp[0][0];
}

//SPACE OPTIMISED
int space(int n, vector<vector<int>> &triangle){

	vector<int> prev(n,0);

	//Since starting from the last row therefore filling the first instance of prev with repective values from traingle 2D
	for (int j = 0 ; j < n ; j++){
		prev[j] = triangle[n-1][j];
	}
	for (int i = n-2 ; i >= 0 ; i--){
		vector<int> temp(n,0);
		for (int j = 0 ; j < i + 1 ; j++){

			int down = triangle[i][j] + prev[j];
			int diag = triangle[i][j] + prev[j+1];

			temp[j] = min(down,diag);
		}
		prev = temp;
	}
	return prev[0];
}
