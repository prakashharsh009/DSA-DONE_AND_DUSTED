#include <bits/stdc++.h>

using namespace std;



//Naive Function - O(n^2)
int leftmost(string &str){

for (int i = 0 ; i < str.length() ; i++){
    for (int j =  i+1 ; j <  str.length() ; j++){
        if(str[i] == str[j]){
            return i;
        }
    }
}
return -1;
}



//Efficient Method
int effleft(string &str){


    int count[26] = {0};

    for (int i = 0 ; i  < str.length() ; i++){
        count[str[i]]++;
    }

    for (int i = 0 ; i< str.length() ;  i++){
        if(count[str[i]] > 1){
            return i;
        }
    }
    return  -1; 
}

//Best Approach - 1 

int leftmost1(string & str){

    int table[256];

    fill(table, table + 256, -1);

    int res = INT_MAX;

    for (int i = 0 ; i <str.length(); i++){

        int f = table[str[i]];

        if(f == -1){
            table[str[i]] = i;

        }
        else {
            res = min(res, f);
        }
    }
    return (res == INT_MAX) ? -1 : res;
}


//Best Approach - 2
int leftmost2(string &str){

    bool table[256];

    fill(table , table  + 256 , false);

    int res = - 1 ;

    for (int i = 0 ; i < str.length(); i++){
        
    }


}



//Driver Fuunction
int main(){

    
    string str = "cabbbad";
    cout<<leftmost1(str);
    
    
}