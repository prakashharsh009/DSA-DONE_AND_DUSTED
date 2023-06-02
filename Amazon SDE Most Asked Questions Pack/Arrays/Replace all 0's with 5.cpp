int convertFive(int num) {
    // code here
    int res = 0;
    
    while (num){
        if(num%10){
            res = res *10 + num%10;
        }
        else{
            res = res * 10 + 5;
        }
        num /= 10;
    }
    int ans = 0;
    while(res){
        ans  =  ans *10 + res % 10;
        res /= 10;
    }
    return ans;
}
