class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int , int> mp;

        for (auto x : nums){
            mp[x]+=1;
        }

        priority_queue<pair<int , int>  ,vector<pair<int , int>> , greater<pair<int , int>>> pq;


        for (auto x : mp){

            int key = x.first;
            int freq = x.second;

            if (pq.size() < k){
                pq.push({freq , key});
            }
            else {
                if(pq.top().first  < freq){
                    pq.pop();
                    pq.push({freq , key});
                }
            }
        }

        vector<int> ans;

        while (!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

// https://leetcode.com/problems/top-k-frequent-elements/