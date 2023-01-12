#include<bits/stdc++.h>
using namespace std;

void func(int open , int close , string output){
    // base cases //
    if (open == 0 and close == 0){
        cout << output << endl;
        return;
    }

    if (open > close){
        // invalid state .....//
        return;
    }
    // recursion
    if (open > 0)
    func(open-1 , close , output + '(');
    func(open , close-1 , output + ')');
}

int main(){
    int n;
    cin >> n;
    string output = "";
    func(n , n , output);
}