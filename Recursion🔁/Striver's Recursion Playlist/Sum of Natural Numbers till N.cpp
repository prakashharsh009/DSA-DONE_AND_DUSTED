int sumN(int n){
    
    if(n == 0){
        return 0;
    }
    
     
   return n + sumN(n-1);
   
}
