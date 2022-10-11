#include <bits/stdc++.h>
using namespace std;


//Driver Function
int main(){

    char s1[] = "harsh";

    char s2[] = "prakash";

    int res = strcmp(s1,s2);

    /*if(res == 0){
        cout<<"Same !";
    
    }

    else{
        cout<<res;
    }*/
        


  //  string str = "geeksforgeeks";

  /*  cout<<str.length()<<" ";
    str = str + "xyz";
    cout<<str<<" ";
    cout<<str.substr(1,3)<<" ";
    cout<<str.find("eek")<<" ";
    */


 /*   string str1 = "abc";
    string str2 = "bcd";

    if (str1 == str2){
        cout<<"Same";

    }
    else if(s1 < s2){
        cout<<"Smaller";
    }

    else{
        cout<<"Greater";
    }*/

    string str;

    cout<<"Enter Name - ";
    getline(cin,str);

    cout<<str;

    return 0;
}