#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int pre[n];
    int sum = 0;

    for (int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
        pre[i] = sum;
    }

    int q;
    cin >> q;

    for (int queries_cnt = 1 ; queries_cnt <= q ; queries_cnt++){

        int left , right;
        cin >> left >> right;
// --------- Brute Force -------------- //
//        int sum = 0;
//        for (int i = left ; i <= right ; i++){
//            sum = sum + arr[i];
//        }
//        cout << sum;
//        cout << endl;

    // -------- prefix sum -------------- //
        if (left == 0){
            cout << pre[right] << endl;
        }
        else {
            cout << pre[right] - pre[left-1] << endl;
        }
    }

}

//     while (q--){
//
//     }