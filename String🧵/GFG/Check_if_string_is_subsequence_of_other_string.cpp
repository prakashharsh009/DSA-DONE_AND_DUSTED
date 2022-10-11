#include <bits/stdc++.h>

using namespace std;


bool checkSub(string str1, string str2){

    bool flag = false;
    int i , j = 0;

    while(i <= str1.length() - 1 || j <= str2.length() - 1){

    if(str1[i] == str2[j]){
        i++;
        j++;
        flag  = true;
        continue;
    }
    
    if(str1[i]<str2[j]){
        i++;
        flag = false;
        continue;
    }
    else{
        j++;
        flag = false;
        continue;
    }

    }

    return flag;

}


//LESS VERBOSE SOLUTION - ITERATIVE

bool isSub(string s1 , string s2){

    int l1 = s1.length();
    int l2 = s2.length();

    int j = 0;
    
    for (int i = 0 ; i <l1 && j < l2 ; i++){

        if(s1[i] == s1[j]){
            j++;
        }
    }
    return (j == l2);
}



//RECURSIVE 
int checkSubRecursive(string s1 , string s2 , int l1 , int l2 ){




    //Base Case

    if(l1 == 0){
        return false;
    }
    if(l2 == 0){
        return true;
    }
    if(s1[l1-1] == s2[l2-1]){
        return checkSubRecursive(s1 , s2 , l1 - 1 , l2 - 1);
    }

    return checkSubRecursive(s1 , s2 , l1 - 1 , l2);

}


//Driver Function
int main(){

    string str1 = "ABCDE";
    string str2 = "AED";

    if(checkSubRecursive(str1,str2, 5 ,3 )){
        cout<<"YES";
    }
    else cout<<"NO";
}