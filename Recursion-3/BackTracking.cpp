#include<bits/stdc++.h>
using namespace std;

void func(int &i, int cnt){
    if (cnt == 1){
        return;
    }
    i += 10;
    func(i , cnt+1);
    i -= 10;  // back-tracking
    return;
}

int main(){
    int i = 0;
    int count = 0;
    func(i , count);
    cout << i << endl;
    return 0;
}