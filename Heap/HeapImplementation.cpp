#include<bits/stdc++.h>
using namespace std;

class heap{
public:
    vector<int> arr;
    int left(int index){
        return (2*index + 1);
    }
    int right(int index){
        return (2*index+2);
    }
    int parent(int index){
        return (index-1)/2;
    }

    void push(int value){
        arr.push_back(value);
        int index = arr.size()-1;

        while (index > 0  and arr[parent(index)] > arr[index]){
             swap(arr[parent(index)] , arr[index]);
             index = parent(index);
        }
    }

    void heapify(int index){

        int smallest = index;
        int left_child_index = left(index);
        int right_child_index = right(index);

        if (left_child_index < arr.size() and arr[left_child_index]  < arr[smallest]){
            smallest = left_child_index;
        }
        if (right_child_index < arr.size() and arr[right_child_index]  < arr[smallest]){
            smallest = right_child_index;
        }

        if (smallest != index ){
            swap( arr[smallest], arr[index]);
            heapify(smallest);
        }
        return;
    }

    void pop(){
        // first element , last element
        swap(arr[0] , arr[arr.size()-1]);
        arr.pop_back();
        heapify(0);  // rectify karna heap ko
    }

    int top(){
       return arr[0];
    }
};



int main(){

    heap pq;
    pq.push(10);
    pq.push(20);
    pq.push(2);
    pq.push(30);
    cout << pq.top() << endl;
    pq.pop();
    pq.pop();
    cout << pq.top() << endl;
    return 0;
}
