#include<bits/stdc++.h>
using namespace std;

class Vehicle{
private:
    int maxSpeed;
protected:
    int numTypers = 12;
public:
    string color;
};

// syntax
class car: private Vehicle{
public:
    int numgears;
    void print(){
        cout << "NumTyres:" << numTypers << endl;
        cout << "Color:" << color << endl;
        cout << "numgears" << numgears << endl;
    }
};

int main(){


      Vehicle V;
//   V.numTyres = 10;  you cannnot it is protected
      car c;
      c.print();
  //  c.numTyres   you cannot use protected members outside of derived classes
    return 0;
}