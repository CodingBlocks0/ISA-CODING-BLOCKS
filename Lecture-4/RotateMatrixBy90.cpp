#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;


    int arr[n][n];

    for (int row = 0 ; row < n ; row++){
        for (int col = 0 ; col < n ; col++){
            cin >> arr[row][col];
        }
    }

    // transpose of matrix
    for (int row = 0 ; row < n ; row++){
        for (int col = row ; col < n ; col++){
            swap(arr[row][col] , arr[col][row]);
        }
    }

    for (int row = 0 ; row < n ; row++){
        int start = 0 , end = n-1;
        while (start <= end){
            swap(arr[row][start] , arr[row][end]);
            start = start+1;
            end = end-1;
        }
    }

    for (int row = 0 ; row < n ; row++){
        for (int col = 0 ; col < n ; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}