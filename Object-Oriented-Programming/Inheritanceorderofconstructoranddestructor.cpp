#include<bits/stdc++.h>
using namespace std;

class Vehicle{
private:
    int maxSpeed;
protected:
    int numTypers;
public:
    string color;
    Vehicle(){
        cout << "Vehicle Default Constructor is called" << endl;
    }
    ~Vehicle(){
        cout << "Vehicle Default Destructor is called" << endl;
    }
};


class car: public Vehicle{
public:
    int numgears;
    void print(){
        cout << "NumTyres:" << numTypers << endl;
        cout << "Color:" << color << endl;
        cout << "numgears" << numgears << endl;
    }
    car(){
        cout << "Car construtor is called " << endl;
    }
    ~car(){
        cout << "Car Default Destructor is called" << endl;
    }
};

class Honda: public car{
public:
    Honda(){
        cout << "Honda constructor is called" << "\n";
    }
    ~Honda(){
        cout << "Honda Destructor is called " << "\n";
    }
};


int main(){

    Honda a;
//    Vehicle V;
//    car c;
 //   c.color = "Black";
    return 0;
}