class Solution {
public:
    int dp[101][101];
    int func(int i , int j , int m , int n){

        if (i == m-1 and j == n-1){
            return 1;
        }

        if (i >= m or j >= n){
            return 0;
        }
        // base case
        if (dp[i][j] != -1){
            return dp[i][j];
        }


        int op1 = func(i+1 , j , m ,n);
        int op2 = func(i , j+1 , m , n);
        // memo
        dp[i][j] = (op1 + op2);
        return (op1 + op2);
    }


    int uniquePaths(int m, int n) {

        for (int i = 0 ; i <= 100 ; i++){
            for (int j = 0 ; j <= 100 ; j++){
                dp[i][j] = -1;
            }
        }

        return func(0 , 0 , m , n);
    }
};

// tabulation
class Solution {
public:
    int dp[101][101];
    int uniquePaths(int row , int col) {

        for (int i = 0 ; i < row ; i++){
            for (int j = 0 ; j < col ; j++){
                if (i == 0) {dp[i][j] = 1;}
                else if (j == 0) {dp[i][j] = 1;}
                else  {
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }

        return dp[row-1][col-1];
    }
};