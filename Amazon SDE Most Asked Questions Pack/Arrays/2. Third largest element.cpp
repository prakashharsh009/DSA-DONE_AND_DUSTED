class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         int finalres = INT_MIN;
         
         int first_Max = INT_MIN;
         for (int i = 0 ; i < n ; i++){
             first_Max = max(a[i],first_Max);
         }
         int second_Max = INT_MIN;
         for (int i  =  0; i < n ; i++){
             if(a[i] != first_Max){
                 second_Max = max(second_Max,a[i]);
             }
         }
         
         for (int i  = 0 ; i < n ; i++){
             if(a[i] != first_Max and a[i] != second_Max){
                 finalres  = max(finalres, a[i]);
         }
    }
    return finalres;
}
};
