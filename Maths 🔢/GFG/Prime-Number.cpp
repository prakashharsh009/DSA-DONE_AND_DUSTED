#include <iostream>

using namespace std;



//Naive_Method

bool primeNaive(int n){

    if(n == 0 || n == 1){
        return false;
    }
    
    for(int i = 2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}









//Driver Function
int main(){

    int n = 11;

    for (int i = 0 ; i  < n ; i ++){
        if(primeNaive(i)){
            cout<<i<<" ";
        }
    }

return 0;

}
