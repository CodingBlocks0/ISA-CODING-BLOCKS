#include<bits/stdc++.h>
using namespace std;

int main(){

    int n , m;
    cin >> n >> m;

    int arr[n][m];

    for (int row = 0 ; row < n ; row++){
        for (int col = 0 ; col < m ; col++){
            cin >> arr[row][col];
        }
    }

    // row - wise traversal
    cout << "Row-wise Traversal :" << endl;
    for (int row = 0 ; row < n ; row++){
        for (int col = 0 ; col < m ; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Colwise Traversal :" << endl;
   // column wise traversal
    for (int col = 0 ; col < m ; col++){
        for (int row = 0 ; row < n ; row++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}