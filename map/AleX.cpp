#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> arr(n , 0);
    for (int i = 0 ; i <n ; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;

    map<int , int> mp;

    for (auto x : arr){
        mp[x] += 1;
    }

    int ans = 0;

    if (d == 0){
        for (auto x : mp){
            int key = x.first;
            int value = x.second;
            if (value >= 2){
                ans += 1;
            }
        }
    }
    else {
        for (auto x : mp){
            int first_location = x.first;
            int second_location = first_location + d;
            if (mp.find(second_location) != mp.end()){
                ans += 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}



// home work
// d = 1
// 1 1 1 2 2 3 3  pair (1 , 2) , pair(3 , 3)
// d = 0
// 1 2 1 2 1 3  : ans = 2  , pair(1 , 1) , pair(2 , 2) ,
//
// d = 2
// 2 2 2 3 3 3 4  5  6 7 8  ans = 5 , pair(2 , 4) , pair(3 , 5) pair(4 , 6)
//                              pair(5 , 7)   pair(6 , 8)
// d =  1
// 1 2 3 4 5 ans : pair(1 , 2) pair(2 , 3) , pair(3 , 4) , pair(4 , 5)

// d = 0
// 1 2 1 3 4 1 ans : pair(1 , 1)

// d = 2

// 1  3 1 3 1 3 , ans: pair(1 , 3)
// question link : https://hack.codingblocks.com/app/contests/3796/2907/problem