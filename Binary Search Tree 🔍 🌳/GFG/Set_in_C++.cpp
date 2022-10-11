#include <bits/stdc++.h>
#include <set>

using namespace std;



//Driver Function
int main(){

    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);

 //   s.insert(10); // duplicate value , which is ignored by the set

   /* for(int x : s){
        cout<<x<<" ";
    }
    */

   //Find function
   /* auto it = s.find(3);

    if(it == s.end()){
        cout<<"NOT FOUND \n";

    }
    else cout<<"FOUND \n";

    //printing the rest of element
    while( it != s.end()){
        cout<<*it<<" ";
    } */

   /*for (auto it = s.begin() ; it != s.end(); it++){
       cout<<(*it)<<" ";
   }*/

// CLEAR FUNCTION
/*
cout<<s.size()<<endl;
s.clear(); // removes all the elements/nodes
cout<<s.size();

*/

// COUNT FUNCTION - returns boolean function 
/*
if(s.count(13)){
    cout<<"Found !";
}
else cout<<"Not Found !";*/

//ERASE FUNCTION
/*
s.erase(5);
for(int x: s){
    cout<<x<<" ";
}
*/

// or 
 /*auto it = s.find(10);// delete the element or range of elements after the it(iterator)
s.erase(it, s.end());
for(int x: s){
    cout<<x<<" ";
}*/

//LOWER BOUND 
auto it = s.upper_bound(18); // if the same values exist then return the value otherwise return the closest greater value to that value.

if( it != s.end()){
    cout<<(*it)<<" ";
}
else{
    cout<<"Given element is greater than the largest ";
}

return 0;

}
