#include <bits/stdc++.h>

using namespace std;


bool isPalindrome(string &str, int start, int end ){


    //Base Case
    if(start>=end){
        return true;
    }

    //Works as a short-circuit -> only proceeds to recursion iff the letters are same at start and the end points
    return (str[start] == str[end]) && isPalindrome(str, start+1, end-1);


}



//Driver Function

int main(){
    string str = "abba";
    int start = 0;
    int end = str.length();

    cout<<isPalindrome(str, start, end-1);
    return 0;
}