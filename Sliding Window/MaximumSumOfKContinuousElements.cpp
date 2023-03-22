#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans = INT_MIN;
    int Sum = 0;
    vector<int> arr = {2 , 3 , 4 , 6 , 1 , 2 , 1 };
    int k; cin >> k;

    for (int i = 0 ; i < k ; i++){
        Sum += arr[i];
    }
    ans = max(ans , Sum);
    int j = k;
    int i = 0;

    while ( j < (int)arr.size()){
        Sum = Sum - arr[i] + arr[j];
        ans = max(ans , Sum);
        i++; j++;
    }
    cout << "ans :" << ans << endl;
    return 0;
}

// Time complexity : O(n)