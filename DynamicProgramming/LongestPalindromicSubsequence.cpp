class Solution {
public:
    int dp[1005][1005];
    int func(string &s ,  int i , int j){

        // base case //
        if (i > j){
            return 0;
        }
        if (i == j){
            return 1;
        }
        if (dp[i][j] != -1)
            return dp[i][j];

        // recursion .. //
        if (s[i] == s[j]){
            return dp[i][j] = (2 + func(s , i+1 , j-1));
        }

        int op1 = func(s , i+1 , j);
        int op2 = func(s , i , j-1);
        dp[i][j] = max(op1 , op2);
        return max(op1 , op2);
    }


    int longestPalindromeSubseq(string s) {
        memset(dp , -1 , sizeof dp);
        return  func(s , 0 , s.size()-1);

    }
};