#include<bits/stdc++.h>
using namespace std;

// recursive solution
// dp = recursion + memoization
int func(int n , vector<int> &dp){
    if (n == 1) return 0;
    if (n == 2) return 1;

    if (dp[n] != -1){
       return dp[n];
    }

    int ans = func(n-1 , dp) + func(n-2 , dp);
    // memoization - step
    dp[n] = ans;
    return ans;
}


int main(){

    int n;
    cin >> n; // 6 -> 0 1 2 3 4 5

    vector<int> dp(n+1 , -1);
    cout << func(n , dp) << endl;

   // tabulation dp , iterative dp
    vector<int> TDP(n+1 , -1);
    TDP[0] = 0;
    TDP[1] = 1;

    for (int i = 2 ; i <= n ; i++){
        TDP[i] = TDP[i-1] + TDP[i-2];
    }

    cout << TDP[n] << endl;
    return 0;
}