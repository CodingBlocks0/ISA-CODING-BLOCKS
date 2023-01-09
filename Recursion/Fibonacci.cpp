#include<bits/stdc++.h>
using namespace std;

int fibonacci(int no){
    if (no == 1){
        return 0;
    }
    if (no == 2){
        return 1;
    }

   return fibonacci(no-1) + fibonacci(no-2);
}


int main(){

    int no = 3;
    cout << fibonacci(no) << endl;

    return 0;
}