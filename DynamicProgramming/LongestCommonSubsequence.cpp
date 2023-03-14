class Solution {
public:
    int dp[1005][1005];
    int func(string &a , string &b , int i , int j){

        // base cases //
        if (i >= a.size() or j >= b.size()){
            return 0;
        }

        if (dp[i][j] != -1){
            return dp[i][j];
        }


        // recursion
        if (a[i] == b[j]){
            dp[i][j] = (1 + func(a , b , i+1 , j+1));
            return dp[i][j];
        }

        int op1 = func(a , b , i+1 , j);
        int op2 = func(a , b , i , j+1);
        dp[i][j] = max(op1 , op2);
        return max(op1 , op2);
    }


    int longestCommonSubsequence(string a, string b) {
        //memset(dp , 0 , sizeof dp);
        // memset(dp , -1 , sizeof dp); // recursion
        // return func(a , b , 0 , 0);
        int n = a.size();
        int m = b.size();

        for (int i = 1 ; i <= a.size() ; i++){
            for (int j = 1 ; j <= b.size() ; j++){
                if (a[i-1] == b[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }

        return dp[n][m];
    }
};