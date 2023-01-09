#include<bits/stdc++.h>
using namespace std;

int ways(int n , int k){
    // base cases
    if (n < 0){
        return 0;
    }
    if (n == 0){
        return 1;
    }
//    if ( n == 1 ){
//        return 1;
//    }
//    if ( n == 2 ){
//        return 2;
//    }

//    ways(n-1) + ways(n-2) + ways(n-3) .......... + ways(n-k);

   int sum = 0;
   for (int jump = 1 ;  jump <= k ; jump++){
      sum = sum +  ways(n - jump , k);
   }
   return sum;
}


int main(){

   int n , k;
   cin >> n >> k;

   cout << ways(n , k);
}