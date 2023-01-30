#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};


class Stack{
public:
    node* head = NULL;
    int top(){
        // top most element kon sa hai
        if (head == NULL) return -1;
        return head->data;
    }
    void pop(){
        // top most element ko delete karna
        if (head == NULL) return;
        node* temp = head->next;
        head->next = NULL;
        delete head;
        head = temp;
    }
    void push(int value){
        // insert at top
        node* temp = new node(value);
        temp->next = head;
        head = temp;
    }
    bool empty(){
        if (head == NULL){
            return true;
        }
        else
            return false;
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

    return 0;
}