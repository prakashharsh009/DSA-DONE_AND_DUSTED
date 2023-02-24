void findCombs(vector<vector<int>> &res, vector<int> &ds , vector<int> &ARR, int target, int index){

	if(index == ARR.size()){
          if (target == 0) {
            res.push_back(ds);
          }
		  return;
        }

	//Pick up the element
	if(ARR[index] <= target){
		ds.push_back(ARR[index]);
		findCombs(res, ds, ARR, target - ARR[index], index);
		ds.pop_back();
	}
	
	//Not PickUp the element
	findCombs(res, ds , ARR, target, index+1);
}
