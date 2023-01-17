#include<bits/stdc++.h>
using namespace std;

int main(){

//    int a = 10;
////    cout << &a << endl;
////    cout << a << endl;
//   int *ptr = &a;
//   cout << *ptr << endl;
//   cout << ptr << " " << &a << " " << &ptr << endl;

//   int b = 10;
//   int *ptr = &b;
//
//   cout << ptr << " " << *ptr << endl;


//     int a = 10;
//     cout << *a << endl;  // ERROR //

//    int a = 10;
//
//    int *ptr = &a;
//
//    *ptr = *ptr + 1;
//
//    cout << a << endl;


//    int a = 10;
//    int b = 20;
//    int *ptr = &a;
//  //  *ptr = &b;   // error
//    ptr = &b;

   int a = 10;
   int *ptr = &a;

   cout << "address of a " << &a << endl;
   int** ptr2 = &ptr;

   cout << &ptr2 << " " << ptr2 << " " << &ptr << endl;

   cout << *ptr2 << endl;
   cout << **ptr2 << endl;

   return 0;
}


