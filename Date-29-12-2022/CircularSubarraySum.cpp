#include<bits/stdc++.h>
using namespace std;

bool AllNegative(int arr[] , int n){
    // return true (sari negative hui toh)
    // return false;
    for (int i = 0 ; i < n ; i++){
        if (arr[i] >= 0){
            return false;
        }
    }

    return true;
}


int maximumSubarraySum(int arr[] , int n){
    int ans = -100000000;
    int sum = 0;
    for (int i = 0 ; i < n ; i++){
        sum += arr[i];
        ans = max({ans , sum});
        if (sum < 0){
            sum = 0;
        }
    }
    return ans;
}

int minimumsubarray(int arr[] , int n){
    int ans = 100000000;
    int sum = 0;
    for (int i = 0 ; i < n ; i++){
        sum += arr[i];
        ans = min({ans , sum});
        if (sum > 0){
            sum = 0;
        }
    }
    return ans;
}



int main(){

    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        int arr[n];

        int sum = 0;

        for (int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }

        for (int i = 0 ; i < n ; i++){
            sum = sum + arr[i];
        }

        int maximum =  maximumSubarraySum(arr , n);
        int minimum =  minimumsubarray(arr , n);

        if (AllNegative(arr , n) == true){
            cout << maximum << endl;
        }
        else {
            cout << max({ maximum , sum - minimum }) << endl;
        }
    }
    return 0;
}