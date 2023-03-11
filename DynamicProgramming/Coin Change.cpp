class Solution {
public:
    int coinChange(vector<int>& coinsarray , int amount) {

        vector<int> dp(amount+1 , 1e9);
        dp[0] = 0;

        for (int i = 0 ; i < coinsarray.size() ; i++){
            int coin = coinsarray[i];
            for (int j = coin ; j <= amount ; j++){
                dp[j] = min(dp[j] , 1 + dp[j-coin]);
            }
        }

        if (dp[amount] >=  1e9) return -1;
        return dp[amount];
    }
};