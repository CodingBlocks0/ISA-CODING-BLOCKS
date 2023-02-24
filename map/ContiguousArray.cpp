class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        map<int , int> mp;

        int sum = 0;
        int dis = 0;

        for (int i = 0 ; i < nums.size() ; i++){
            sum += (nums[i] == 0 ? -1 : 1);

            if (sum == 0){
                dis = max(dis , i+1);
                continue;
            }
            if (mp.find(sum) != mp.end()){
                dis = max(dis , i-mp[sum]);
            }
            else {
                mp[sum] = i;
            }
        }

        return dis;
    }
};

https://leetcode.com/problems/contiguous-array/