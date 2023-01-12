#include<bits/stdc++.h>
using namespace std;

void func(int arr[] , int index , int n){

    // base case
    if (index == n){
        for (int i = 0 ; i < n ; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int j = index ; j < n ; j++){
        swap(arr[index] , arr[j]);
        func(arr , index+1 , n);//recursion
        swap(arr[index] , arr[j]); // backtracking
    }
    return;
}

int main(){
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0 ; i < n ;i++){
       cin >> arr[i];
   }
   func(arr , 0 , n);
}