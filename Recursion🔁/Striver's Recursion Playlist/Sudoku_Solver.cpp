bool isSafe(vector<vector<int>> &sudoku, int row , int col , int val){

    for (int i = 0 ; i < 9 ; i++){

        //Checking the row
        if(sudoku[row][i] == val){
            return false;
        }
        //Checking the column
        if(sudoku[i][col] == val){
            return false;
        }

        //Checking all the elements in 3*3 Sub-Matrix using a generalised relation
        if(sudoku[3 * (row/3) + i/3][3 * (col/3) + i%3] == val){
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<int>> &sudoku){

    //Traversing and finding the empty spaces

    for(int i  = 0 ; i < sudoku.size(); i++){
        for (int j = 0 ; j < sudoku[i].size(); j++){

                if(sudoku[i][j] == 0){

                    //Trying every number from One to Nine if it can be placed

                    for (int k = 1 ; k <= 9 ; k++){

                      if (isSafe(sudoku, i, j, k)) {
                        sudoku[i][j] = k;

                        // if the recursive call returns true, do not remove the
                        // element, as we only require a single solution
                        if (solve(sudoku))
                          return true;

                        else
                          // If the recusive call returns false (notSafe), then
                          // remove the element
                          sudoku[i][j] = 0;
                      } 
                    }
                        // if not able to place any value
                        return false;
                    }

                }

        
    }

    //if the sudoku has all pieces already
    return true;
}


void solveSudoku(vector<vector<int>>& sudoku)
{
	// Write your code here
    // No need to print the final sudoku
    // Just fill the values in the given matrix

    solve(sudoku);
}
