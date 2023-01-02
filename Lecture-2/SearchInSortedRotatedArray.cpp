#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int start = 0 , end = n-1;

    while (start <= end){

        int mid = (start + end) / 2;

        if (arr[mid] == target){
            cout << "Yes Element Found : " << mid << endl;
            return 0;
        }
        //   (start  , mid) => kya ye sorted hai  (if)
        //   (mid ,    end)  (else)
        else if (arr[start] <= arr[mid]){
            if (arr[start] <= target and target < arr[mid]){
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }
        else {
           //  (mid , end)
           if (arr[mid] < target and target <= arr[end]){
               start = mid+1;
           }
           else {
               end = mid-1;
           }
        }
    }
    cout << -1 << endl;
}