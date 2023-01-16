#include<bits/stdc++.h>
using namespace std;

char board[11][11];
bool CanWePlace(int row , int col , int n){

    for (int j = 0 ; j < n ; j++){
        if (board[row][j] == 'Q'){
            return false;
        }
    }

    for (int j = 0; j < n ; j++){
        if (board[j][col] == 'Q'){
            return false;
        }
    }

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){

            if ((i + j) == (row + col) and board[i][j] == 'Q'){
                return false;
            }

            if ((i-j) == (row - col) and board[i][j] == 'Q'){
                return false;
            }

        }
    }

    return true;
}

void func(int curr_row , int tot_row){

    // base case batao //
    if (curr_row == tot_row){
        for (int i = 0 ; i < tot_row ; i++){
            for (int j = 0 ; j < tot_row ; j++){
                cout << board[i][j];
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

   // ek row par kya kaam
   for (int col = 0 ; col < tot_row ; col++){
       if (CanWePlace(curr_row , col , tot_row) == true){
           board[curr_row][col] = 'Q';
           func(curr_row+1 , tot_row);
           board[curr_row][col] = '.';
       }
   }

   return;
}


int main(){

    int n;
    cin >> n;

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            board[i][j] = '.';
        }
    }

    func(0 , n);
    return 0;
}