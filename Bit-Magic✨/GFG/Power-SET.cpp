#include <bits/stdc++.h>

using namespace std;




int powerSet(string str){


    int n = str.length();

    int powerSize = pow(2,n);

    for (int counter = 0; counter<powerSize; counter++ ){

        for (int j = 0; j<n; j++){

            if(counter & (1<<j) != 0){
                cout<<str[j];
            }

        }

    cout<<endl;


    }
return 0;

}






//Driver Function

int main(){

    string str = "abc";

    powerSet(str);
    return 0;
}