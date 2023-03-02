class Solution {
public:
    int func(vector<int>&nums , int index , vector<int> &dp)
    {
        // base case //
        if (index >= nums.size()){
            return 0;
        }

        if (dp[index] != -1){
            return dp[index];
        }

        // chori
        int op1 = nums[index] + func(nums , index+2 , dp);
        int op2 = 0 + func(nums , index+1 , dp);
        // memoization
        dp[index] = max(op1 , op2);
        return max(op1 , op2);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1 , -1);
        return func(nums , 0 , dp);

        vector<int> TDP(n+1 , -1);
        dp[0] = nums[0];
        dp[1] = max(nums[0] , nums[1]);
        for (int i = 2 ; i < n ; i++){
            dp[i] = max(dp[i-1] , nums[i] + dp[i-2]);
        }
        return dp[n-1];
    }
};