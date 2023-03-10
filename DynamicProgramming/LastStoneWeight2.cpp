class Solution {
public:
    int total;
    int dp[31][3005];

    int func(vector<int>&stones , int index , int sum){

        // base cases //
        if (index >= stones.size()){
            int bag1 = sum;
            int bag2 = total - sum;

            return abs(bag1-bag2);
        }

        if (dp[index][sum] != -1)
            return dp[index][sum];

        // recursion //
        int op1 = func(stones , index+1 , sum + stones[index]);
        int op2 = func(stones ,index+1 , sum);
        dp[index][sum] = min(op1 , op2);
        return min(op1 , op2);
    }

    int lastStoneWeightII(vector<int>& stones) {
        memset(dp , -1 , sizeof dp);
        total = accumulate(stones.begin() , stones.end() , 0);
        return func(stones , 0 , 0);
    }
};

// leetcode (https://leetcode.com/problems/last-stone-weight-ii/submissions/)