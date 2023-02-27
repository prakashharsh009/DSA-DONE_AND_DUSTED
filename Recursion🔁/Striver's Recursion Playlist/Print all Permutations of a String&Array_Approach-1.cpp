void permute(vector<int> &ds, vector<int> &vec, vector<vector<int>> &res, int freq[]){

    //Base Case
    if(ds.size() == vec.size()){
        res.push_back(ds);
        return;
    }

    for (int i = 0 ; i < vec.size(); i++){
        if(!freq[i]){
            ds.push_back(vec[i]);
            freq[i] = 1;

            permute(ds, vec, res, freq);
            ds.pop_back();
            freq[i] = 0;
        }
    }
}
