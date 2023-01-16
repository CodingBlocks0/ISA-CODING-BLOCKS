#include<bits/stdc++.h>
using namespace std;

// call by value
void func(vector<int>&arr , int index , int sum , vector<int> output , int target , int&count){

    // base case //
    if (index == (int)arr.size()){
        if (sum == target){
            count++;
            for (int i = 0 ; i < (int)output.size() ; i++){
                cout << output[i] <<" ";
            }
            cout <<" ";
        }
        return;
    }
    // recursions calls //
    output.push_back(arr[index]);
    func(arr , index+1 , sum + arr[index] , output , target , count);
    output.pop_back();

    func(arr , index+1 , sum , output , target , count);

}

int main() {

    int n;
    cin >> n;

    int target; int count = 0;

    vector<int> arr , output;

    for (int i = 1 ; i <= n ; i++){
        int x; cin >> x;
        arr.push_back(x);
    }

    cin >> target;

    func(arr , 0 , 0 , output , target , count);
    cout << endl;
    cout << count << endl;
    return 0;
}