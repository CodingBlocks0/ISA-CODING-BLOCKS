class Solution {
public:
    int dp[505][505];
    int func(string &word1 , string &word2 , int i , int j){
        // base cases .//
        if (i >= word1.size() and j >= word2.size()){
            return 0;
        }

        if (i >= word1.size()){
            // "" , "jbc";
            return ((int)word2.size()-j); //insert remaining
        }

        if (j >= word2.size()){
            return ((int)word1.size()-i);     // delete remaining
        }

        if (dp[i][j] != -1)
            return dp[i][j];
        // recursion //

        if (word1[i] == word2[j]){
            return dp[i][j] = func(word1 , word2 , i+1 , j+1);
        }

        int op1 = 1 + func(word1, word2 , i , j+1);// insert
        int op2 = 1 + func(word1 , word2 , i+1 , j);      // delete
        int op3 = 1 + func(word1 , word2 , i+1 , j+1);       // replace
        return dp[i][j] = min({op1 , op2 , op3});
    }
    
    int minDistance(string word1, string word2) {
        memset(dp , -1 , sizeof dp);
        return func(word1 , word2 , 0 , 0);
    }
};