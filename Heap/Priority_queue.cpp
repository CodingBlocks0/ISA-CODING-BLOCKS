#include<bits/stdc++.h>
using namespace std;

int main(){

    // syntax
    priority_queue<int> mx_heap;  // maximum

    priority_queue< int , vector<int> , greater<int>> mn_heap;     // minimum
    pq.push(4);
    pq.push(-1);
    pq.push(3);
    pq.push(5);

    // print karane hue toh
    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}