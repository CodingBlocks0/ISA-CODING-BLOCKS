#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    vector<int> arr;
    int top(){
        // top most element kon sa hai
        if (arr.size() > 0){
            return arr.back();
        }
        else {
            return -1;
        }
    }
    void pop(){
        if (arr.size() > 0){
            arr.pop_back();
        }
    }
    void push(int value){
        // insert at top
        arr.push_back(value);
        return;
    }
    bool empty(){
        if (arr.size() == 0){
            return true;
        }
        else {
            return false;
        }
    }
};

int main(){

    Stack obj;

    obj.push(10);
    obj.push(20);
    obj.push(30);
    cout << obj.top() << endl;
    cout << obj.top() << endl;
    obj.pop();
    obj.push(40);
    cout << obj.top() << endl;

}