class Solution {
public:
    int dp[205][20005];
    bool func(vector<int>&nums, int index , int sum , int tot){

        // base case //
        if (index >= nums.size()){
            if (sum == tot/2) return true;
            return false;
        }
        if (dp[index][sum] != -1){
            return dp[index][sum];
        }

        // pick //
        bool ans1 = func(nums , index+1 , sum+nums[index] , tot);

        // non pick //
        bool ans2 = func(nums , index+1 , sum , tot);

        if (ans1 == true or ans2 == true) {
            dp[index][sum] = true;
            return true;
        }
        dp[index][sum] = false;
        return false;
    }


    bool canPartition(vector<int>& nums) {

        memset(dp , -1 , sizeof dp);
        int sum = 0;

        for (auto x : nums){
            sum += x;
        }

        if (sum%2 != 0) return false;

        return func(nums , 0 , 0 , sum);
    }
};

// leetcode question : https://leetcode.com/problems/partition-equal-subset-sum/