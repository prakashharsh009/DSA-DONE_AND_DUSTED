vector<int> KClosest(vector<int> &a, int n, int k, int x) {
	// Write your code here.
  
  //Using Max Heap
  priority_queue<pair<int,int>> pq;
    
    for (auto ele : a){
        pq.push(make_pair(abs(x - ele), ele));
    if(pq.size() > k){
        pq.pop();
    }
    }    
    vector<int> res;

    while (!pq.empty()){
        res.push_back(pq.top().second);
        pq.pop();
    }
    
  sort(res.begin(), res.end());
    
    return res;
    
    //2nd Method
    int low = 0, high = n - 1;

    while (high - low + 1 > k) {
        if (abs(a[low] - x) <= abs(a[high] - x)) {
            high--;
        } else {
            low++;
        }
    }

    vector<int> ans;
    for (int i = low; i <= high; i++) {
        ans.push_back(a[i]);
    }

    return ans;
    }
    
