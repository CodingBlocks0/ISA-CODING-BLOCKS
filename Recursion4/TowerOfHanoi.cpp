#include<bits/stdc++.h>
using namespace std;


void TowerofHanoi(int n , string src , string helper , string desc){

    // base case //
    if (n == 0){
        return;
    }

    TowerofHanoi(n-1 ,src  , desc  , helper);
    cout << n << " Disk Move from " << src << " to " << desc << endl;
    TowerofHanoi(n-1 , helper ,  src    , desc);

    return;
}



int main(){

    int n;
    cin >> n;

    TowerofHanoi(n , "A" , "B" , "C");

    return 0;
}


