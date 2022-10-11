#include <bits/stdc++.h>

using namespace std;





int naiveCountSetBit(int n){

    int resCounter = 0;
    
    while(n>0){
        if(n%2 !=0){
            resCounter++;
            
        }
            n= n/2;
    }

    cout<<resCounter;

    return 0;
}



int brianKerninghamAlgo(int n){


        int res = 0;

        while(n>0){

         n = (n&(n-1));

            res++;
        
        
        }

        cout<<res;

return 0;

}






// Driver Function

int main(){


    int n = 40;

    brianKerninghamAlgo(n);


}