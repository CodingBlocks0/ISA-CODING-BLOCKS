#include<bits/stdc++.h>
using namespace std;

class Bus{
public:
   void print();
};


class Truck{
private:
    int x;
protected:
    int y;
public:
    int z;
    friend void Bus :: print();
};

void Bus :: print(){
    Truck t;
    t.x = 10;
    t.y = 20;
    cout << t.x << " " << t.y << endl;
}

int main(){

    return 0;
}