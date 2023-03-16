#include<bits/stdc++.h>
using namespace std;

int main(){
     // 01010100
     // 00000001 -> 1 , 0
      int no;
      cin>> no;
      if ((no&1) == 1) cout << "odd";
      else cout << "even" << endl;
    // odd even
    //    0010101
    //    no of set bits kitni hai
    int setbits = 1;                  // no : 1101//  0010
    for (int bit = 0 ; bit < 32 ; bit++){
        int mask = (1 << bit); // 1
        if ((no & mask) > 0){
            setbits += 1;
        }
    }
    cout << setbits << endl;
}


