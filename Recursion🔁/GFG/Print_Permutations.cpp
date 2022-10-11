#include <bits/stdc++.h>

using namespace std;



void permute (string s , int i = 0){


    if(i == s.length()-1){   //Base Case
        cout<<" "<<s<<" ";
        return;
    }

    for(int j = i; j<s.length(); j++){

        swap(s[i], s[j]);

        //Recursive Call
        permute(s, i+1);

        swap(s[j], s[i]);

    }

}







//Driver Function

int main(){

    string s = "ABC";
    permute(s);
    return 0;
}