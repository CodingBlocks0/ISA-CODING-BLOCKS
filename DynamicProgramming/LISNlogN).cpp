class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        vector<int> lis;

        for (auto ele : nums){
            auto itr = lower_bound(lis.begin() , lis.end() , ele);
            if (itr == lis.end()){
                lis.push_back(ele);
            }
            else {
                int index = itr-lis.begin();
                lis[index] = ele;
            }
        }

        return (int)lis.size();

    }
};