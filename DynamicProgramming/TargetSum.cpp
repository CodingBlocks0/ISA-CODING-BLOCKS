class Solution {
public:
    int dp[25][20005];
    int func(vector<int>&nums , int index , int sum , int total , int tar){


        // base case
        if (index >= nums.size()){
            if ((total-2*sum) == tar){
                return 1;
            }
            return 0;
        }
        if (dp[index][sum] != -1){
            return dp[index][sum];
        }

        // pick
        int op1 = func(nums , index+1 , sum + nums[index] , total , tar);
        // not - pick
        int op2 = func(nums , index+1 , sum , total , tar);

        // memoization
        dp[index][sum] = (op1 + op2);
        return (op1 + op2);
    }



    int findTargetSumWays(vector<int>& nums, int target) {

        memset(dp , -1 , sizeof dp);
        int sum = 0;
        for (auto x : nums) sum += x;

        // int sum = accumulate(nums.begin() , num.end() , 0);

        return func(nums , 0 , 0 , sum , target);

    }
};

// leetcode (https://leetcode.com/problems/target-sum/submissions/)