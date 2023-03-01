#include <bits/stdc++.h> 

bool isSafe(string &s, int start , int end){

    while (start <= end){
        if(s[start++] != s[end--]){
            return false;
        }
    }
    return true;
}

void solve(int index , string &s, vector<string> &curr , vector<vector<string>> &res){

    //Base Case
    if(index == s.size()){
        res.push_back(curr);
        return;
    }

    //looping from starting index the string to the end 
    for(int i = index; i < s.size(); i++){
        if(isSafe(s, index ,i)){
            //pushing the substring with given indices
            curr.push_back(s.substr(index , i - index + 1));
            //increasing the partition size
            solve(i+1, s, curr, res);
            //remove the value while back-tracking 
            curr.pop_back();
        }
    }

}

vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<vector<string>> res;
    vector<string> curr;

    solve(0 , s , curr , res);

    return res;
}
