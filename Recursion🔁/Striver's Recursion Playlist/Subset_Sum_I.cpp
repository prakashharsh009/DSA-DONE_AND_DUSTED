void subsetSum(int index , int sum , vector<int> &arr, vector<int> &res){

    //BASE CASE
    if(index == arr.size()){
        res.push_back(sum);
        return;
    }

    //PICKING UP THE ELEMENT AT INDEX
    subsetSum(index+1, sum + arr[index], arr, res);
    //NOT PICKING UP THE ELEMENT AT INDEX
    subsetSum(index+1, sum, arr, res);
}
