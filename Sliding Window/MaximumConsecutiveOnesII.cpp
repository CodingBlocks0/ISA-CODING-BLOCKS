#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {0 , 1 , 1, 0 , 1 , 1 , 1 , 0 , 1 , 1, 1 , 0 , 1, 0 , 0 , 0 , 1};
    int n = arr.size();
    // flips => 1
    int flips = 1; // k
    int ans = 0;

    int i = 0 , j = 0;
//   example : 1 1 0 1 1 0 1 1 1 0 1
    while (j < n){
        if (arr[j] == 0) {flips -= 1;}
        while (flips < 0){
            if (arr[i] == 0) {flips += 1;}
            i++;
        }
        ans = max(ans , j-i+1);
        j++;
    }
    cout << "ans : " << ans << endl;
    return 0;
}