#include <bits/stdc++.h>

using namespace std;



//Function
bool anagram(string &s1 , string &s2){

    if(s1.length() != s2.length()){
        return false;
    }

    sort(s1.begin() , s1.end());
    sort(s2.begin() , s2.end());

    return (s1 == s2);

}


//Effcicient Function
bool effAnagram(string &s1 , string &s2){

    if(s1.length() != s2.length()){
        return false;
    }

    int count[26] = {0};

    for (int i = 0 ; i < s1.length() ; i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for (int i = 0 ; i < 26 ; i++){
        if(count[i] != 0){
            return false;
        }
    }

return true;
}


//Driver Function
int main(){

    string s1 = "silent";
    string s2 = "listen";

    cout<<effAnagram(s1,s2);

    return 0;
}