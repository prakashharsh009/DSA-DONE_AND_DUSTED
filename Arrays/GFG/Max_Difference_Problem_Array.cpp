 #include <bits/stdc++.h>


using namespace std;




//Naive Max Difference - O(n^2)

int naiveMaxDiff(int arr[], int n)
{

    int maxDiff = arr[1] - arr[0];
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if((arr[j] - arr[i]) > maxDiff){
                maxDiff = arr[j] - arr[i];
            }
            else continue;
        }

    }

cout<<maxDiff;

return 0;
}



//Efficient Approach


int efficientMaxDiff(int arr[], int n){

    int maxDiff = arr[1] - arr[0];

    int minValue = arr[0];

    for(int j = 1; j<n; j++){
    
            maxDiff = max( maxDiff , arr[j] - minValue);
            minValue  = min( minValue , arr[j]);
        }




    cout<<maxDiff;

    return 0;

    }








//Driver Function
int main(){

    int arr[] = {2,3,10,6,4,8,1 };

    int size = sizeof(arr)/sizeof(arr[0]);


    efficientMaxDiff(arr, size);
    return 0;

}