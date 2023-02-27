 /************************************************ APPROACH 1 ************************************************/

bool isSafe(int row, int col , vector<vector<int>> &board, int n ){

    /*Since we are filling columns from the left and only just queen in one
    column so , we have to check in just three directions */

    int tempRow = row;
    int tempCol = col;

    //UPWARDS - DIAGONALLY
    while (row >= 0 and col >= 0){
        if(board[row][col] == 1){
            return false;
        }
        col--; row--;
    }

    //EAST - VERTICALLY
    col = tempCol ; row = tempRow;
    while( col  >= 0){
        if(board[row][col] == 1){
            return false;
        }
        col--;
    }

    //DOWNWARDS - VERTICALLY
    col  = tempCol ; row = tempRow;
    while (row < n and col >= 0){
        if(board[row][col] == 1){
            return false;
        }
        row++; col--;
    }

    return true;
}


void solve(int col , vector<vector<int>> &board , vector<vector<int>> &res , int n ){

    //Base Case
    if(col == n){
       vector<int> temp;
       for (auto it : board){
           for (auto x : it){
               temp.push_back(x);
           }
       }

       //Filling Row by Row ( O => n-1)
       res.push_back(temp);
       return;
    }

    //Filling up every column
    for (int row = 0  ; row < n ; row++){

        if(isSafe(row , col , board , n)){

            board[row][col] = 1;
            //Move further deep in recursion tree
            solve(col + 1 , board, res , n);

            //Back-Tracking 
            board[row][col] = 0;
        }
    }
}

vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>> res;

    //Board for solving and estimating possible positioning of queens
    vector<vector<int>> board(n , vector<int>(n,0));

    solve(0 , board , res, n);

    return res;
}


 /************************************************ APPROACH 2 ************************************************/

