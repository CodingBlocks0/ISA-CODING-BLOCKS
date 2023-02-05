#include<bits/stdc++.h>
using namespace std;

// parametirzed constructor
//struct node {
//    int data;
//    node* next;
//    node(int val){
//        data = val;
//        next = NULL;
//    }
//};
//
//node* ptr = new node(10);


class Student{
private:
    int age;
public:
    int rollno = 10;
    string name = "abc";

    Student(){
       cout << "Constructor Called" << "\n";
    }

    Student(string Name){  // parametrized constructor
        name = Name;
    }

    void myname(){
        cout << age << endl;
        cout << name << endl;
    }
    // destructor //
    ~Student(){
        cout << "Destructor is called" << "\n";
    }
};

void dummy(){
    Student s1;
}

int main(){

    dummy();

    Student s1("anshul");
    // copy constructor
    Student s2(s1);
    // copy assignment operator
    Student s3;
    s3 = s1;
    cout << s1.name << endl;
    cout << s2.name << endl;
    cout << s3.name << endl;

    Student *s4 = new Student;
    delete s4;
//    cout << s1.age << endl; (error because its private)
    return 0;
}