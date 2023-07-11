vector<int> stringMatch(string text, string pattern) {
	// Write your code here.
	vector<int> res;
	
	int d  = 256;
	int q  = INT_MAX;
	int n  = text.size();
	int m  = pattern.size();
	
	int h = 1;
	//Computing Hash Function D^(m-1) which we used multiple times later
	for (int i  = 1 ; i <= m - 1; i++){
		h  = (h*d)%q;
	}

	//Computing the pattern hash and initial text window hash
	int p = 0 , t = 0;
	for (int i = 0 ; i < m ; i++){
		p = (p*d  + pattern[i])%q;
		t = (t*d  + text[i])%q;
	}

	//Checking for Patterns(if exist)
	for (int i = 0 ; i <= n - m ; i++){
		if(p == t){
			//Check for Spurious Hits
			bool flag  = true;

			for (int j = 0 ; j < m ; j++){
				if(text[i+j] != pattern[j]){
					flag = false;
					break;
				}
			}
			if(flag){res.push_back(i);}
		}
		//Generating  t(i+1) hash using t(i)
		if(i < n - m){
			t = (d*(t - text[i]*h) + text[i+m])%q;
			//if T goes negative
			if(t < 0){
				t += q;
			}
		}
	}


	return res;
}
