Link - https://takeuforward.org/data-structure/dynamic-programming-introduction/


EXAMPLE = FIBONACCI NUMBER

Recursive Approach - Top to Bottom 

int fib(int n){

if(n <= 1){
  return n;
}
  return fib(n-1) + fib(n-2);
}

Memoization Approach

int fib(int n , vector<int> &dp){

if(n <= 1){
  return n;
 }
if(dp[n] != -1){
  return dp[n];
  }
return dp[n] = fib(n-1) + fib(n-2);
}

Time Complexity = O(N)
Space Complexity = O(N)
Auxiliary Space = O(N)
  
  
Tabulation Approach - Bottom Up 

int fib(int n , vector<int> &dp){
  dp[0] = 0;
  dp[1] = 1;
  
  for (int i = 2 ; i < n ; i++){
    dp[i] = dp[i-1] + dp[i-2];
  }
return dp[n];
}
Time Complexity = O(N)
Space Complexity = O(N) (No recursion call stack)
  
  
  BEST APPROACH
  
int fib(int n ){

if(n == 0 or n == 1) return n;
int n1 = 0 , n2 = 1;
int n3;
for (int i = 2 ; i < n ; i++){
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
 }
 return n3;
}

