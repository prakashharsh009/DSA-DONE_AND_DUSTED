/***************************************************** APPROACH 1 - BRUTE FORCE (recursive) *****************************************************/

void solve(string input, int index , vector<string> &res, int n ){

    if(index == n){
        res.push_back(input);
        return;
    }

    for (int  i = index ; i < n ; i++){
        swap(input[i], input[index]);
        solve(input, index + 1 , res , n);
        swap(input[i], input[index]);
    }

}

string kthPermutation(int n, int k) {
    // Write your code here.
     string input = "";
  
     for (int i = 1 ; i <= n ; i++) {
        char ch = i + 48;
        input += ch;
     }  
       
    vector<string> res;
    solve(input, 0 , res,n);
    sort(res.begin(), res.end());

    return res[k-1];
}

/***************************************************** APPROACH 2 - EFFICIENT *****************************************************/

string kthPermutation(int n, int k) {
    // Write your code here.
    int fact = 1;
    vector<int> numbers;

    for (int i  = 1 ; i < n ; i++){
        fact *= i;
        numbers.push_back(i);
    }
    numbers.push_back(n);
    string ans = "";
    //since we are following zero based indexing 
    --k;

    while(true){

        ans += to_string(numbers[k/fact]);
        numbers.erase(numbers.begin() + k / fact);
        if(numbers.size() == 0){
            break;
        }
        k = k % fact;
        fact /= numbers.size();

    }
    return ans;
}   
