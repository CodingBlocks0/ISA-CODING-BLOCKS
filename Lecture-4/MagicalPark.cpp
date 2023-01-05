#include<bits/stdc++.h>
using namespace std;
int main() {

    int n , m , k , s;
    cin >> n >> m >> k >> s;

    char arr[n][m];
    for (int i = 0 ; i < n ;i++){
        for (int j = 0 ; j < m ; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            if (s < k){
                cout << "No" << endl;
                return 0;
            }
            if (arr[i][j] == '#' or j == m-1){
                if (arr[i][j] == '.'){
                    s -= 2;
                }
                else if (arr[i][j] == '*') {
                    s += 5;
                }
                break;
            }

            else if (arr[i][j] == '.'){
                s -= 2;
            }
            else {
                s += 5;
            }
            s -= 1;
        }
    }

    if (s >= k){
        cout << "Yes" << '\n';
        cout << s << endl;
    }
    else{
        cout << "No" << '\n';
    }

    return 0;
}
