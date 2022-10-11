#include <bits/stdc++.h>

using namespace std;

//Naive Method 
int leftmost(string  &str){

    for (int i = 0 ; i <  str.length(); i++){

            bool flag = false;

            for (int j = 0 ; j < str.length(); j++){
                if( i != j && str[i] == str[j]){
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                return i;
            }
    }
return -1;
}

//Efficient Two Traversal Solution 
int leftmost1(string &str){

    int table[256];

    for (int i =  0; i < str.length() ; i++){
        
        table[str[i]]++;
    }

    for (int i = 0  ; i < str.length(); i++){
        if(table[str[i]]  == 1){
            return i;
        }
    }

return -1;
}

//Best Approach 




//Driver Function 
int main(){

    string str = "abcabc";
    cout << leftmost1(str);

    return  0;
}