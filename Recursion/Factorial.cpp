#include<bits/stdc++.h>
using namespace std;

int factorial(int no){

    if (no == 1){
      return 1;
    }

    int value =  no * factorial(no-1);
    cout << value << endl;
    return value;
}


int main(){

    int no = 5;

    cout << factorial(no);
}