class Solution {
public:
    bool isAnagram(string s, string t) {

        map<char , int>mp1;
        map<char , int> mp2;

        for (auto ch : s){
            mp1[ch]++;
        }

        for (auto ch : t){
            mp2[ch] += 1;
        }

        if (mp1.size() != mp2.size()){
            return false;
        }

        for (auto itr : mp1){

            int key = itr.first;
            int val = itr.second;

            if (val != mp2[key]){
                return false;
            }
        }

        return true;
    }
};