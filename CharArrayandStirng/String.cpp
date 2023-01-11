#include<bits/stdc++.h>
using namespace std;

int main(){


    string s;
    // syntax getline(cin , string ka naam , kha se read ni karna)
//    getline(cin , s);
//    cout << s << endl;

//    string a = "hello";
//    string b = "world";
//
//    string c = a+b;
//
//    cout << c.size() << endl;

    // yaad rakhna ek dikkat hai
     //  (right thing)
      string d = "Satyam";
//      d += 'a';
//      cout << d << endl;

//       string f = "bcd";
//       d += f;
//       cout << d << endl;
//    cout << c << endl;

    //  substr

     string c = "abcdefgh";

    cout << c.substr(3 , -1);
    return 0;
}