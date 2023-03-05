Link - https://takeuforward.org/data-structure/dynamic-programming-introduction/


EXAMPLE = FIBONACCI NUMBER

Recursive Approach

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
