/--------------------------------------------------------------------- CHECK ANAGRAM ---------------------------------------------------------------------/

  bool isAnagram(string a, string b){
        
        // Your code here
        if(a.size() != b.size()){
            return false;
        }
        
        int count[26]  = {0};
        
        for (int i = 0 ; i < a.size(); i++){
            count[a[i] - 'a']++;
            count[b[i] - 'a']--;
        }
        
        for ( int i  = 0; i < 26; i++){
            if(count[i] != 0){
                return false;
            }
        }
        return true;
    }

/--------------------------------------------------------------------- NO. OF OPERATIONS FOR ANAGRAM ---------------------------------------------------------------------/

int remAnagram(string str1, string str2)
{
  
    // Your code goes here
    int count1[26] = {0}; 
    int count2[26] = {0};
    
    for (int i  = 0 ; i < str1.size(); i++){
        count1[str1[i] - 'a']++;
    }
     
    for (int i  = 0 ; i < str2.size(); i++){
        count2[str2[i] - 'a']++;
    }
    
    int result  = 0;
    
    for (int i = 0 ; i < 26; i++){
        result += abs(count1[i] - count2[i]);
    }
    return result;
}
