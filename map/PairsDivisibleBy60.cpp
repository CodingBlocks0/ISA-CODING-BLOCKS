class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {

        map<int , int> mp;

        for (auto x : time){
            mp[x%60]++;
        }

        long ans = 0;

        for (int rem = 0 ; rem <= 30 ; rem++){
            if (rem == 0 or rem == 30){
                long n = mp[rem];
                ans = ans + (n * (n-1) * 1LL) / 2*1LL;
            }
            else {
                ans = ans + (mp[rem] * mp[60-rem]);
            }
        }
        return ans;
    }
};

question link:
https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/