#include <bits/stdc++.h>
using namespace std;


//Naive Method
bool isPal(string str){

    string rev = str;

    reverse(rev.begin() , rev.end());

    return (rev == str);

}



//EFFICIENT METHOD - Two pointer approach
bool efficientisPal(string str){


    int low = 0;
    int high = str.length() - 1;

    while(low <= high ){

        if(str[low] != str[high]){
            return false;
        }
        low++;
        high--;

    }
return true;

}



//Driver Function
int main(){

 string str = "ABBA";

 cout<<efficientisPal(str);

 return 0;
}