#include<bits/stdc++.h>
using namespace std;

int ways(int n){
    // base case
    if (n == 1){
        return 1;
    }

    if (n == 2){
        return 2;
    }
    // recursive case
    return ways(n-1) + ways(n-2);
}


int main(){

    int n;
    cin >> n;

    cout << ways(n) << endl;
    return 0;
}