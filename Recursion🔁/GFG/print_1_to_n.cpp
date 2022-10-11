#include <bits/stdc++.h>

using namespace std;




int oneton(int n ){

if(n == 0){
    return 0;
}

oneton(n-1);

cout<<n<<" ";

return 0;

}






//Driver Function

int main(){

    int n = 10;

    oneton(n);

    return 0;

}