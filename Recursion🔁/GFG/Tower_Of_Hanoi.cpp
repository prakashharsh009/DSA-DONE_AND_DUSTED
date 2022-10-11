#include <bits/stdc++.h>

using namespace std;


void toh(int n , char A , char B , char C){

    //Char A, B, C are the towers which are to traversed


    //Base Case
    if(n == 1){
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }

    //moving (n-1) discs from A to B using C tower as an Auxiliary Space(middle-man)
    toh(n-1 , A, C , B);

    //when the (n-1) discs are moved from A to B using C then move directly the most bottom disc from A to C
    cout<<"Move "<<n<<"  from "<<A<<" to "<<C<<endl;


    //moving (n-1) discs from B to C using A tower as an Auxiliary Space(middle-man)
    toh(n-1, B , A , C);

}





int main(){

    int n = 3;
    
    toh(n, 'A', 'B', 'C');

    return 0;
}