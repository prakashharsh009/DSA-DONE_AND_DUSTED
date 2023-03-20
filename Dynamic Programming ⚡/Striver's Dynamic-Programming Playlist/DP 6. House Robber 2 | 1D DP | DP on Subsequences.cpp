#include <bits/stdc++.h> 

//SAME LOGIC OF THE FUNCTION AS THE LECTURE 5
long long space(vector<int> &nums){

    int n  = nums.size();
    long long prev = nums[0];
    long long  prev2 = 0;

    for (int i = 1 ; i < n ; i++){
        long long take = nums[i];
        if(i > 1) take += prev2;
        long long nottake = 0 + prev;

        long long curri = max(take, nottake);

        prev2 = prev;
        prev = curri;
    }
    return prev; //prev would be at the position of dp[n-1];
}


long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    vector<int> temp1 , temp2;
    int n = valueInHouse.size();
    //Base Case
    if(n == 1) return valueInHouse[0];

    for (int i = 0 ; i < n ; i++){
        if(i != 0)   temp1.push_back(valueInHouse[i]);
        if(i != n-1) temp2.push_back(valueInHouse[i]);
    }

    return max(space(temp1), space(temp2));
}
