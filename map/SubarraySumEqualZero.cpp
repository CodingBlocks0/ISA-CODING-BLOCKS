class Solution{
public:
    bool subArrayExists(int arr[], int n)
    {
        map<int , int> mp;
        int sum = 0;

        for (int i = 0 ; i < n ; i++){
            sum += arr[i];
            if (sum == 0 or mp.find(sum) != mp.end()){
                return true;
            }
            mp[sum] += 1;
        }

        return false;
    }
};


// gfg problem : https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
