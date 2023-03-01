bool isSafe(int node , int color[], vector<vector<int>> &mat, int N, int col){
    //Traversing through given node's every adjacent node in graph 
    for (int k = 0 ; k < N ; k++){
        if(k != node and mat[k][node] and color[k] == col){
            return false;
        }
    }
    return true;
}

bool solve(int node , vector<vector<int>> &mat , int color[], int m , int N){

    //Base Case
    if(node == N){
        return true;
    }

    //Now trying to apply every color individually on each nodes

    for (int i =  1; i <= m; i++){
        if(isSafe(node , color , mat , N , i )){
           color[node] = i;
           //Since we require just one combination we do not require multiple recursive calls
           //and will immediately return true
           if(solve(node + 1 , mat, color, m , N))
               return true;    
           else
               //Back-Tracking and thus removing wroong entered value
               color[node] = 0;
        }
    }
    return false;
}



string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here

    int N = mat.size();
    //Color array to track the usage of colors on that specific node
    int color[N] = {0};

    if(solve(0, mat,color , m , N)){
        return "YES";
    }
    return "NO";
}
