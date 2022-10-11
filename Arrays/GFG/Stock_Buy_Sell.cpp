#include <bits/stdc++.h>

using namespace std;





//Naive Solution 

int maxProfit(int price[], int start, int end){


    int currentProfit = 0;
    int totalProfit =  0;


    //Corner Case
    if(start>=end){
        return 0; //Profit for one day or less is Zero
    }

        for(int i = start; i<end; i++){

            for(int j = i+1; j<=end; j++){


                if(price[j] > price[i] ){

                    currentProfit = (price[j]-price[i])+maxProfit(price,start,i-1) +maxProfit(price,j+1, end);
                    //Recursive Calls for left of ith subarray and Right of jth subarray

                   
                }

                totalProfit = max(totalProfit, currentProfit);
            }

           
        }

        return totalProfit;
}


//Efficient Approach

int effStock(int price[], int n ){

    int maxProfit = 0;


    for(int i = 1 ; i<n; i++){

        if(price[i]>price[i-1]){
            maxProfit+= (price[i] - price[i-1]);
        }

    }



return maxProfit;

}



int main(){

    int price[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(price)/sizeof(price[0]);

    int start = 0;

    int end = size-1;

   // cout<<maxProfit(price , start , end);

    cout<<effStock(price, size);
    return 0;

}