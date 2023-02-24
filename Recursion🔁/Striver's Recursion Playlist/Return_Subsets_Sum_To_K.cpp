void subsets(vector<int> &arr, vector<int> vec, vector<vector<int>> &res , int index , int n , int sum, int k){

    if(index == n){
      if (sum == k) {
        res.push_back(vec);
      }
      return;
    }
    //Take and Not-Take Approach

    vec.push_back(arr[index]);
    sum += arr[index];

    subsets(arr,vec, res, index+1, n, sum, k);

    vec.pop_back();
    sum -= arr[index];

    subsets(arr, vec, res, index+1, n, sum, k);
}
