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

