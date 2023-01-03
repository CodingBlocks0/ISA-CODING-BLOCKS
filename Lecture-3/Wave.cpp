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

    for (int row = 0 ; row < n ; row++){
        if (row % 2 == 0){
           for (int col = 0 ; col < m ; col++){
               cout << arr[row][col] << " ";
           }
        }
        else {
            for (int col = m-1 ; col >= 0 ; col--){
                cout << arr[row][col] << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}