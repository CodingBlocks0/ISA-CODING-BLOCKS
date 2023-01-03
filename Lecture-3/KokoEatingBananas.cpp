#include<bits/stdc++.h>
using namespace std;

bool can_we_eat(int arr[] , int speed , int guardcomeback , int n){

    int tot_hours_to_eat = 0;

    for (int i = 0 ; i < n ; i++){

        tot_hours_to_eat = tot_hours_to_eat + arr[i] / speed;

        if (arr[i] % speed != 0){
            tot_hours_to_eat = tot_hours_to_eat + 1;
        }

    }

    if (tot_hours_to_eat <= guardcomeback){
        return true;
    }
    return false;
}


int main(){

    int pilessize;
    cin >> pilessize;

    int arr[pilessize];

    int maximum = INT_MIN;

    for (int i = 0 ; i < pilessize ; i++){
        cin >> arr[i];
        maximum = max({ maximum , arr[i] });
    }

    int guardcomeback;
    cin >> guardcomeback;

    int valid_ans = -1;
    int start = 1  , end = maximum;

    while (start <= end){

        int mid = (start + end) / 2;
        // speed (bananas / hour)
        bool ans = can_we_eat(arr , mid , guardcomeback , pilessize);

        if (ans == true){
            valid_ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }

    cout << valid_ans << endl;
}
