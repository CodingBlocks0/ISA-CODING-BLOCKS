#include<bits/stdc++.h>
using namespace std;


void func(int cnt){

    if (cnt == 5){
        return;
    }

    cout << "Hello recursion" << endl;
    func(cnt + 1);

    return;
}



int main(){
    int cnt = 1;
    func(cnt);
    return 0;
}