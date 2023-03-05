How to Identify a DP problem?

When we see a problem, it is very important to identify it as a dynamic programming problem. Generally (but not limited to) if the problem statement asks for the following:

Count the total number of ways
Given multiple ways of doing a task, which way will give the minimum or the maximum output.
We can try to apply recursion. Once we get the recursive solution, we can go ahead to convert it to a dynamic programming one.

  -----------------------------------------------------------------------------------------------------------------------------------------------------------------
Steps To Solve The Problem After Identification

Once the problem has been identified, the following three steps comes handy in solving the problem:

Try to represent the problem in terms of indexes.
Try all possible choices/ways at every index according to the problem statement.
If the question states
Count all the ways – return sum of all choices/ways.
Find maximum/minimum- return the choice/way with maximum/minimum output.

 -----------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  #include <bits/stdc++.h> 

#define mod 1000000007

int countDistinctWays(int nStairs) {
    //  Write your code here.

    int n = nStairs;

    int n1 = 1 , n2 = 1;

    int n3;

    if(n == 0 or n == 1){
        return 1;
    }
    for (int i = 2 ; i <= n; i++){
        n3 = (n1+n2)%mod;
        n1 = n2;
        n2 = n3;
    }
    return n3%mod;
}
