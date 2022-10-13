bool stringPal(string s, int i ){
    if(i  > s.length()/2){ return true;}
    
    if(s[i] != s[s.length() - i - 1]){return false; }
    
    return stringPal(s,i+1);
}

//Functional recursion using one parameter
