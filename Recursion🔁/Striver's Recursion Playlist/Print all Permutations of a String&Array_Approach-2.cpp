void permute(int index , vector<int> &vec, vector<vector<int>> &res){


    if(index == vec.size()){
        res.push_back(vec);
        return;
    }

    for(int i = index ; i < vec.size(); i++){
        swap(vec[i], vec[index]);
        permute(index+1, vec, res);
        //Additional Swapping so that initial permutation is not lost while backtracking
        swap(vec[i], vec[index]);
    }

}
