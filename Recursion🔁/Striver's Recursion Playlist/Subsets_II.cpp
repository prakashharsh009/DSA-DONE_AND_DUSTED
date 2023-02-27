void findSubs(int index , vector<int> &arr, vector<int> &ds, vector<vector<int>> &res){

    res.push_back(ds);

    for (int i = index ; i < arr.size() ; i++){
        //Conditions to avoid duplicate subsets from entering result
        if (i != index and arr[i] == arr[i - 1]) {
          continue;
        }
        //Take and Not-Take Approach
        //Take
        ds.push_back(arr[i]);

        findSubs(i+1, arr, ds, res);

        //Not-Take
        ds.pop_back();
    }

}
