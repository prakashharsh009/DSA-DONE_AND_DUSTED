#include <bits/stdc++.h>

using namespace std;



//Function - using stack
string reverseStr(string str){

 stack <string> myStack;

  string s = "";

for (int i =  0 ; i < str.length() ; i++){

  if(str[i] == ' '){
      myStack.push(s);
      s = "";
      
  }

    else{
        s  += str[i];
    }

}

//Inserting the last word since the i will reach str.length() and complete loop
myStack.push(s);

str = "";

while(myStack.empty() != true){

    str += myStack.top();
    str += " ";
    myStack.pop();    

}

return str;
}




//NO AUX SPACE APPROACH
//first reverse every word of the whole string
// then reverse the whole string again

// I love coding
// I evol gnidoc
// coding love I

void reverseAux(char str[], int low , int high){

    while( low <= high){
        swap(str[low] , str[high]);
        low++;
        high--;
    }

}


string reverseMain( char str[] , int n  ){

    int start = 0;

    for (int end = 0 ; end < n ; end++){

        if(str[end] == ' '){
            reverseAux(str , start, end - 1);
            start = end + 1;
        }

    }
    //Explicitly reversing the last word
     reverseAux(str, start , n - 1);


        //reversing the whole string top get the final output
      reverseAux(str, 0 ,  n - 1);  

      

return str;
}



//Driver Function
int main(){
    
    char str[] = "I want to travel the World";
    int size = sizeof(str)/sizeof(str[0]);

    cout << reverseMain(str , size);

    return 0;
}