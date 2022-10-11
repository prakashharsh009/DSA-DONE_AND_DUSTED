#include <bits/stdc++.h>

using namespace std;

void subsetsString(string s, int i = 0,  string current = "")
{

    int n = s.length();
    if(i == n){
        cout<<current<<endl;
        return;
    }

    //ith element not included
    subsetsString(s, i + 1, current);
    //ith element included
    subsetsString(s, i+1 , current + s[i]);
    
}

//Driver Function

int main(){

    string s = "abc";
    subsetsString(s);


    return 0;
}




