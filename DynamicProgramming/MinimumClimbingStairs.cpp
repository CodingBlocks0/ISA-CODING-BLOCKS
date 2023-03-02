class Solution {
public:
    int func(vector<int>&cost , int index , vector<int>&dp){
        if (index >= cost.size()){
            return 0;
        }

        if (dp[index] != -1){
            return dp[index];
        }

        int op1 = func(cost , index+1 , dp);
        int op2 = func(cost , index+2 , dp);

        int ans = cost[index] + min(op1 , op2);
        dp[index] = ans;
        return ans;
    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1 , -1);
        func(cost , 0 , dp);
        return min(dp[0] , dp[1]);
    }
};