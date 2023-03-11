class Solution {
public:
    int change(int amount, vector<int>& coinsarray) {
        vector<int> dp(amount+1 , 0);
        dp[0] = 1;

        for (int i = 0 ; i < coinsarray.size() ; i++){
            int coin = coinsarray[i];
            for (int j = coin ; j <= amount ; j++){
                dp[j] += dp[j-coin];
            }
        }

        return dp[amount];
    }
};