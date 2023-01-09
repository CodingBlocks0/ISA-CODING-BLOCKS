#include<bits/stdc++.h>
using namespace std;

void Ascendingprint(int no){

    if (no == 6){
        return;
    }

    cout << no << endl;

    Ascendingprint(no+1);
}


void descpart1(int no){

    if (no == 0){
        return;
    }
   cout << no << endl;
   descpart1(no-1);

}

void descpart2(int no){
    if (no == 6){
        return;
    }
    // recursion se phle call
    // recursion call
    // kuch kaam karenge
    descpart2(no+1);
    cout << no << endl;
}


int main(){
     int no = 1;
   Ascendingprint(no);

       no = 5;
    descpart1(no);
       descpart2(no);


    return 0;
}