#include<bits/stdc++.h>
using namespace std;
int board[9][9];

bool check(int index , int val){

    int row = (index-1)/9;
    int col = (index-1)%9;

    int s_r = (row/3)*3;
    int s_c = (col/3)*3;

    for (int i = 0 ; i < 9 ; i++){
        if (board[row][i] == val){
            return false;
        }
    }

    for (int i = 0 ; i < 9 ; i++){
        if (board[i][col] == val){
            return false;
        }
    }

    int N = s_r+2 , M = s_c+2;

    for (int i = s_r ; i <= N  ; i++){
        for (int j = s_c ; j<= M ; j++){
            if (board[i][j] == val){
                return false;
            }
        }
    }

    return true;
}



void func(int index){

    // base case //
    if (index > 81){
        for (int i = 0 ; i < 9 ; i++){
            for (int j = 0 ; j < 9 ; j++){
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        return;
    }

    // recursion .......//
    int row = (index-1)/9;
    int col = (index-1)%9;

    if (board[row][col] != 0){
        func(index+1);
    }
    else {
        for (int value = 1 ; value <= 9 ; value++){
            if (check(index , value) == true){
                board[row][col] = value;
                func(index+1);
                board[row][col] = 0;
            }
        }
    }

}


int main(){


    for (int i = 0 ; i < 9 ; i++){
        for (int j = 0 ; j < 9 ; j++){
           cin >> board[i][j];
        }
    }

    func(1);

    return 0;
}

//5 3 0 0 7 0 0 0 0
//6 0 0 1 9 5 0 0 0
//0 9 8 0 0 0 0 6 0
//8 0 0 0 6 0 0 0 3
//4 0 0 8 0 3 0 0 1
//7 0 0 0 2 0 0 0 6
//0 6 0 0 0 0 2 8 0
//0 0 0 4 1 9 0 0 5
//0 0 0 0 8 0 0 7 9
