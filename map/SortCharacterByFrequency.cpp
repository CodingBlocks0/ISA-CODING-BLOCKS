class Solution {
public:
    string frequencySort(string s) {

        map<char , int> mp;
        for (auto x : s){
            mp[x] += 1;
        }

        map<int , vector<char>> mp2;

        for (auto x : mp){
            char ch = x.first;
            int value = x.second;
            mp2[value].push_back(ch);
        }

        string ans = "";

        for (auto itr = mp2.rbegin() ; itr != mp2.rend() ; ++itr){

            int value = itr->first;
            vector<char> arr = itr->second;

            for (auto ch : arr){
                for (int i = 0 ; i < value ; i++){
                    ans += ch;
                }
            }

        }
        return ans;
    }
};