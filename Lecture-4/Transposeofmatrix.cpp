#include<bits/stdc++.h>
using namespace std;

int main(){

    // square matrix
    int n; // no of rows

    cin >> n;

    int arr[n][n];

    for (int row = 0 ; row < n ; row++){
        for (int col = 0 ; col < n ; col++){
            cin >> arr[row][col];
        }
    }

    cout << "Before Transpose" << endl;
    for (int row = 0 ; row < n ; row++){
        for (int col = 0 ; col < n ; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    for (int row = 0 ; row < n ; row++){
        for (int col = row ; col < n ; col++){
              swap(arr[row][col] , arr[col][row]);
        }
    }

    cout << "After Transpose" << endl;

    for (int row = 0 ; row < n ; row++){
        for (int col = 0 ; col < n ; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }


    return 0;
}
