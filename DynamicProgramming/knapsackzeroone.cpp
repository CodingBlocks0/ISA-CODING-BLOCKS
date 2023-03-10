#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
    // index , capacity

int func(int value[] , int weight[] , int index , int capacity){
    // base cases //
    if (index >= 5){
        return 0;
    }
    if (capacity == 0)
    {
        return 0;
    }
    if (dp[index][capacity] != -1){
        return dp[index][capacity];
    }
    // recursion calls //

    int op1 = 0;
    if (capacity >= weight[index]){
        op1 = value[index] + func(value , weight , index+1 , capacity-weight[index]);
    }
    int op2 = 0 + func(value , weight , index+1 , capacity);
   // memoization
    dp[index][capacity] = max(op1 , op2);
   return max(op1 , op2);
}


int main(){

    memset(dp , -1 , sizeof dp);

    int value[5] = {7 , 8 , 9 , 10 , 11};
    int weight[5] = {2 , 3 , 5 , 6 , 4};

    int capacity;
    cin >> capacity;

    cout << func(value , weight , 0 , capacity);
    return 0;
}