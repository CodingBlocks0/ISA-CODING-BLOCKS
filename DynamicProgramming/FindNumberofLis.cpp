class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {

        int n = nums.size();
        int ans = 0;

        int dp[n]; // maxmimum length ka lis
        int cnt[n];  // kitni bar aaya hai

        for (int i = 0 ; i < n ; i++){
            dp[i]  = 1;
            cnt[i] = 1;
        }

        for (int i = 1 ; i < n ; i++){
            for (int j = 0 ; j < i ; j++){
                if (nums[j] < nums[i])
                {
                    // 2 case  ..... (update , reset)
                    if (dp[i] == 1 + dp[j]){
                        cnt[i] += cnt[j]; // update
                    }
                    if ((1 + dp[j])  > dp[i]){
                        // reset
                        dp[i] = 1 + dp[j];
                        cnt[i] = cnt[j];
                    }
                }
            }
        }

        int maximum_dp = INT_MIN;
        for (int i = 0 ; i < n ; i++){
            maximum_dp = max(maximum_dp , dp[i]);
        }

        for (int i = 0 ; i < n ; i++){
            if (dp[i] == maximum_dp){
                ans += cnt[i];
            }
        }

        return ans;
    }
};