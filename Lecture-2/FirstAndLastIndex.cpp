#include<bits/stdc++.h>
using namespace std;

int func1(int arr[] , int target , int n){

    int start = 0 , end = n-1;

    int ans = -1;

    while (start <= end){

        int mid = (start + end) / 2;

        if (arr[mid] == target){
            ans = mid;
            end = mid-1;
        }
        else if (arr[mid] < target){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }

    return ans;
}

int func2(int arr[] , int target , int n){

    int start = 0 , end = n-1;

    int ans = -1;

    while (start <= end){

        int mid = (start + end) / 2;

        if (arr[mid] == target){
            ans = mid;
            start = mid+1;
        }
        else if (arr[mid] < target){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }

    return ans;
}


int main(){

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int first_occurance = func1(arr , target , n); // log(n)
    int last_occurance =  func2(arr , target , n); // log(n)

    cout << first_occurance << " " << last_occurance << endl;
}



/*
 * 5
 * 2 3 4 5 6
 * 5        => (3 ,3 )
 *
 * 6
 * 1 1 1 1 1 1
 * 1    => (0 , 5)
 *
 * 7
 * 2 4 8 10 10 12 15
 * 16      => (-1 , -1)
 *
 * */
