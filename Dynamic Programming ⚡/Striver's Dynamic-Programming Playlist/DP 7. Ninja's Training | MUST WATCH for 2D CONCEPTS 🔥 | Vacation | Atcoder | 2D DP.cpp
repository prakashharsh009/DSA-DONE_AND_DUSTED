//BASIC RECURSION
int func(int day, int last, vector<vector<int>> &points){

    //Base Case
    if(day == 0){
        int maxi = 0;
        for (int task = 0  ; task < 3 ; task++){
          if (task != last) {
            maxi = max(maxi, points[0][task]);
          }
        }
        return maxi;
    }

    int maxi = 0;

    for (int task  = 0 ; task < 3 ; task++){
        if(task != last){
            int point = points[day][task] + func(day  - 1, task ,points);
            maxi  = max(point, maxi);
        }
    }
    return maxi;
}

//DYNAMIC PROGRAMMING - MEMOIZATION
int memo(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp){

    if(day == 0){
        int maxi  = 0;
        for (int task  = 0 ; task < 3 ; task++){
            if(task != last){
                maxi = max(maxi , points[0][task]);
            }
        }
        return maxi;
    }
    int maxi  = 0;
    if(dp[day][last] != -1) return dp[day][last];

    for ( int task = 0 ; task < 3 ; task++){
        if(task != last){
            int point = points[day][task] + memo(day - 1, task, points,dp);
            maxi = max(point, maxi);
        }
    }
    return dp[day][last] = maxi;
}

//DYNAMIC PROGRAMMING - TABULATION
int tab(int n, vector<vector<int>> &points, vector<vector<int>> &dp){

    //STORING THE BASE VALUES (BOTTOM-UP)
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][0], points[0][1]);
    dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));

    for (int day = 1 ; day < n; day++){
        for (int last = 0 ; last < 4 ; last++){
            
            for (int task = 0 ; task < 3 ; task++){
                if(task != last){
                    int point = points[day][task] + dp[day - 1][task];
                    dp[day][last] = max(point, dp[day][last]);
                }
            }

        }
    }    
    return dp[n-1][3];
}


//SPACE OPTIMISED SOLUTION
int space(int n, vector<vector<int>> &points, vector<vector<int>> &dp){

    //STORING THE BASE VALUES (BOTTOM-UP)
    vector<int> prev(4,0);

    prev[0] = max(points[0][1], points[0][2]);
    prev[1] = max(points[0][0], points[0][2]);
    prev[2] = max(points[0][0], points[0][1]);
    prev[3] = max(points[0][0], max(points[0][1], points[0][2]));

    for (int day = 1 ; day < n; day++){
        vector<int> temp(4,0);
        for (int last = 0 ; last < 4 ; last++){
            for (int task = 0 ; task < 3 ; task++){
                if(task != last){
                    int point = points[day][task] + prev[task];
                    temp[last] = max(point, temp[last]);
                }
            }

        }
        prev = temp;
    }    
    return prev[3];
}
