#include<bits/stdc++.h>
using namespace std;

int can_we_place_cows_at_this_dis(int arr[] , int n , int cows , int dis){

    int tot_cows = 1;
    int last_cow = arr[0];

    for (int i = 1 ; i < n ; i++){
        if (arr[i] - last_cow >= dis){
            tot_cows = tot_cows + 1;
            last_cow = arr[i];
        }
    }

    if (tot_cows >= cows){
        return true;
    }
    else {
        return false;
    }
}


int main(){


    int n;
    cin >> n;

    int arr[n];

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    sort(arr , arr + n);

    int cows;
    cin >> cows;

    int valid_ans = -1;

//    for (int dis = 1 ;     ; dis++){
//        bool ans = can_we_place_cows_at_this_dis(arr , n , cows , dis);
//        if (ans == true){
//            myans = ans;
//        }
//        else {
//            break;
//        }
//    }

    int start = 1 , end = 1000000;

    while (start <= end){

        int mid = (start + end) / 2;
        // how much distance i need to maintain between two cows

        bool ans = can_we_place_cows_at_this_dis(arr , n , cows , mid);

        if (ans == true){
            valid_ans = mid;
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }

    cout << valid_ans << endl;
}