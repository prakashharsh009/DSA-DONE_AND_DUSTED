/**************************************************** APPROACH 1 /****************************************************/

void solve(int i , int j , int n ,vector<vector<int>> &arr, vector<string> &res, string move, vector<vector<int>> &vis){

    //Base Case
    //if reached the end-point, store the string (successful traversal)
    if(i == n-1 and j == n-1){
        res.push_back(move);
        return;
    }

    //Traversing through every direction in a lexicographical manner (DLRU)

    //Downward

    //if the upcoming index is inside bound, has not been visited yet and its open for traversal(1)
    if(i + 1 < n and !vis[i+1][j] and arr[i+1][j] == 1){
        vis[i][j] = 1;

        //Subsequent Recursive Call
        solve(i + 1, j ,n , arr, res , move + 'D' , vis);

        //Changing the status of the element as not visited while back-tracking
        vis[i][j] = 0;
    }

    //Leftwards

    if(j - 1 >= 0 and !vis[i][j-1] and arr[i][j-1] == 1){
        vis[i][j] = 1;
        solve(i, j-1 , n , arr , res , move + 'L', vis);
        vis[i][j] = 0;
    }
   

    //Rightwards

     if(j + 1 < n and !vis[i][j+1] and arr[i][j+1] == 1){
        vis[i][j] = 1;
        solve(i , j + 1, n ,arr , res , move + 'R', vis);
        vis[i][j] = 0; 
    }

    //Upwards

    if(i - 1 >= 0 and !vis[i-1][j] and arr[i-1][j] == 1){
        vis[i][j] = 1;
        solve(i-1 , j , n , arr , res , move + 'U', vis);
        vis[i][j] = 0;
    }

}


vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    // Write your code here.
    vector<string> res;

    //Maintaiing visited array to accurately traverse through the maze(matrix)
    vector<vector<int>> vis(n , vector<int>(n,0));

    //check if the starting point is open/available

    if(arr[0][0] == 1){
        solve(0,0,n,arr,res,"", vis);
    }
    return res;
}

/**************************************************** APPROACH 2 /****************************************************/

void solve(int i , int j , int n ,vector<vector<int>> &arr, vector<string> &res, string move, vector<vector<int>> &vis, int di[], int dj[]){


    //Base Case
    //if reached the end-point, store the string (successful traversal)
    if(i == n-1 and j == n-1){
        res.push_back(move);
        return;
    }

    //Generalised Lexicographical Path
    string dir = "DLRU";

    for (int index  = 0 ; index < 4 ; index++){
        int nextI = i + di[index];
        int nextJ = j + dj[index];

        if(nextI >= 0 and nextJ >= 0 and nextI < n and nextJ < n  and !vis[nextI][nextJ] and arr[nextI][nextJ] == 1){
            vis[i][j] = 1;
            solve(nextI, nextJ, n , arr, res , move + dir[index], vis, di , dj);
            vis[i][j] = 0;
        }
     }
}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    // Write your code here.
    vector<string> res;

    //Maintaiing visited array to accurately traverse through the maze(matrix)
    vector<vector<int>> vis(n , vector<int>(n,0));

     // Combinations for D | L | R | U
    int di[] = {1 , 0 , 0 , -1};
    int dj[] = {0 , -1, 1,  0};
   
    //check if the starting point is open/available

    if(arr[0][0] == 1){
        solve(0,0,n,arr,res,"", vis, di , dj);
    }
    return res;
}
