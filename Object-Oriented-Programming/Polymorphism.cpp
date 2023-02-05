#include<bits/stdc++.h>
using namespace std;



// compile time polymorphism
// 1) function overload
// 2) function overriding  (parent class hai hum uske ek function ko apne function se override kar rhe hai)

class Vehicle{
public:
    void print(){
        cout << "Vehicle" << endl;
    }
};

class car: public Vehicle{
public:
    void print(){
        cout << "Car" << endl;
    }
};


int main(){
    Vehicle v;
    car c;  // car vala object hai
    v.print();   // vehicle
    c.print();  //  car

    // In term of pointer Base class pointer will point out to child class pointer //
    // you can only access those properties of a child class that is present in the base class .... with the help of base class pointers//

    // compile time polymorphisme//
    Vehicle *v1;
    v1 = &c;
    v1->print();
    return 0;
}