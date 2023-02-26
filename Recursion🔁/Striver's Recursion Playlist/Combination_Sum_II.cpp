void findCombs(int index , int target , vector<int> &arr, vector<int> &ds, vector<vector<int>> &res){

	//BASE CASE
	if(target == 0){
		res.push_back(ds);							
		return;  					
	}

        for (int i = index; i < arr.size(); i++) {
		// CONDITION TO AVOID DUPLICATE ENTRIES AND COMBINATIONS
          if (i > index and arr[i] == arr[i - 1]) {
            continue; 
          }
		// OPTIMISING BY BREAKING LOOP AND INITIALISING A NEW ELEMENT  AS A STARTING POINT
          if (arr[i] > target) {
            break;
          }
          ds.push_back(arr[i]);

          findCombs(i + 1, target-arr[i], arr, ds, res);
		  /* THE ELEMENT IS REMOVED SO THAT A NEW COMBINATION CAN BE GENERATED
		   WHEN RECURSION CALL IS BACK-TRACKED */
		  ds.pop_back(); 
        }
}
