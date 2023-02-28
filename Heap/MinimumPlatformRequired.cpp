#include<bits/stdc++.h>
using namespace std;

int main (){

    vector<int> arr = {950 , 960 , 980 , 1300 , 1400 ,1450};
    vector<int> dep = {1000 , 1100 , 1200 , 1400 , 1500 , 1600};

    priority_queue<int , vector<int> , greater<int>> pq;

    pq.push(1000);

    for (int i =  1; i < arr.size() ; i++){
        if (pq.top() < arr[i]){
            pq.pop();
            pq.push(dep[i]);
        }
        else {
             pq.push(dep[i]);
        }
    }
    cout << pq.size() << endl;
    return 0;
}