#include <iostream>

using namespace std;




int naiveLCM(int a , int b){

    int ans = max(a,b);

    while(true){

        if(ans%a == 0 && ans%b == 0){

            return ans;
        }
        else{
            ans++;
        }


    }

return ans;


}


/*Efficient LCM

a*b = gcd(a,b) * lcm(a,b)

*/

int gcd(int a , int b)
{
        if(b == 0){
            return a;
        }

        return gcd(b, a%b);

}

int main(){
     
    int a = 4;
    int b = 6;

    int gcdA = gcd(a,b);

    cout<<(a*b)/gcdA;

}