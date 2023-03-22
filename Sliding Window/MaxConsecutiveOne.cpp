class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int ans = 0;
        int cnt = 0;

        for (auto x : nums){
            if (x == 0){ cnt = 0; }
            else {cnt += 1;}
            ans = max(ans ,cnt);
        }

        return ans;

    }
};