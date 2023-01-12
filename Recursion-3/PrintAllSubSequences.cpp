#include<bits/stdc++.h>
using namespace std;


void func(string input , int index , string output){

    // Base Cases
     if (index == input.size()){
         cout << output << endl;
         return;
     }

    // Recursion Calls

    // pick
    func(input , index + 1 , output + input[index]);
    // non-pick
    func( input  , index + 1 , output );
}


int main(){

    string input;
    cin >> input;

    string output = "";

    func(input , 0 , output);
}