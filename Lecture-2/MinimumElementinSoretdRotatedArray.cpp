#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int start = 0 , end = n-1;

    while (start < end){

        int mid = (start + end) / 2;

        if (arr[mid] < arr[end]){
            end = mid;
        }
        else {
           start = mid+1;
        }
    }

    cout << arr[start];
}