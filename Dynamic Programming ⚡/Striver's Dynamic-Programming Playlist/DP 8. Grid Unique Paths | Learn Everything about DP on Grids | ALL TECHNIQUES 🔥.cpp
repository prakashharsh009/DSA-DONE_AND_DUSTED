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
int tab(int m , int n){

	vector<vector<int>> dp(m, vector<int>(n,-1));

	for (int i = 0  ; i < m ; i++){
		for (int j = 0 ; j < n ; j++){
			if(i == 0 and j == 0) dp[i][j] = 1;
			else{
				int up = 0 ,  left = 0;
				if(i > 0) up = dp[i-1][j];
				if(j > 0) left = dp[i][j-1];

				dp[i][j] = up + left;
			}	
		}
	}
	return dp[m-1][n-1];
}


//SPACE OPTIMISED
int space(int m , int n){

	vector<int> prev(n, -1);
	for (int i  = 0 ; i < m ; i++){
		vector<int> temp(n, -1);
		for (int j = 0 ; j < n ; j++){
			if( i == 0 and j == 0) temp[j]  = 1;
			else{
				int up = 0 , left = 0;
				if(i > 0) up = prev[j];
				if(j > 0) left = temp[j-1];
			 	temp[j] = up + left;
			}
		}
		prev = temp;
	}
	return prev[n-1];
}
