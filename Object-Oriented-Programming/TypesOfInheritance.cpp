#include<bits/stdc++.h>
using namespace std;

//1) single       -> A->B
//2) multilevel   -> A->B->C
//3) hierarchical -> one base class and more than one child class
//4) Multiple  -> multiple base classes and one child class

/* Hierarchical */
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

class Truck: public Vehicle{
public:
};


/* mutiple inheritance */

class Teacher{
public:
    string name;
    string age;
    void print(){
        cout << "Teacher" << endl;
    }
};

class student{
public:
    string name;
    string age;
    void print(){
        cout << "Student" << endl;
    }
};

class TA : public Teacher , public student{
public:
//    void print(){
//        cout << "TA" << endl;
//    }
};


int main(){
    TA a;
  //  a.print();  // error
  //  a.Teacher :: print(); // 2.scope resolution operator
}