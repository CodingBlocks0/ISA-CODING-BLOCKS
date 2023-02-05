#include<bits/stdc++.h>
using namespace std;

//  Diamond Problem //
class Vehicle{
public:
    Vehicle(){
        cout << "Vehicle Default Constructor is called" << endl;
    }
    void print(){
        cout << "Vehicle" << endl;
    }
};

class car: virtual public Vehicle{
public:
    int numgears;
    car(){
        cout << "Car construtor is called " << endl;
    }
    // step-3 //
//    void print(){
//         cout << "Car" << endl;
//    }
};

class Truck: virtual public Vehicle{
public:
    Truck(){
        cout << "Truck constructor is called" << endl;
    }
};

class Bus: public car , public Truck{
public:
    Bus(){
        cout << "Bus constructors is called" << "\n";
    }
};

int main(){

    Bus b;
    // step-1 : b.print(); (error)
    // step-2 :  b.car:: print();
    // step-3 : if car has a print function in it
    // step-4 : virtual in car and truck with the help of virtual bus will not class the car class constructor
    b.print();
    return 0;
}