#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1 , 2 , 2 , 4 , 5 , 6 , 5 , 4 , 6};

    int val = INT_MAX;
    int val2 = INT_MIN;
   // cout << (val << 1) << " " << " " << val2 << endl;
    //cout << (15 << 1) << endl;

    cout << (3^0) << endl; //3
    cout << (7^8) << endl; // 15
    cout << (2 << 2) << endl; // 2 * 2^2 = 8
    cout << (3 >> 1) << endl; // 1
    int ans = 0;

    for (auto ele : arr){
        ans = ans ^ ele;
    }

    cout << ans << endl;
    return 0;
}