#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&arr , int start , int end , int year , int dp[5][5]){
    // base case //
    if (start > end){
        return 0;
    }
    // agar ye state already computed hai
    if (dp[start][end] != -1){
        return dp[start][end];
    }

   int op1 = arr[start]*year + func(arr,start+1 , end , year+1 , dp);
   int op2 = arr[end]*year + func(arr , start , end-1 , year+1 , dp);
   // memoization
   dp[start][end] = max(op1 , op2);
   return max(op1 , op2);
}


int main(){
    vector<int> arr = {2 , 4 , 6 , 2 , 5};
    int dp[5][5];

    for (int i = 0 ; i < 5 ; i++){
        for (int j = 0 ; j < 5 ; j++){
            dp[i][j] = -1;
        }
    }

    cout << func(arr , 0 , arr.size()-1 , 1 , dp) << endl;
    return 0;
}