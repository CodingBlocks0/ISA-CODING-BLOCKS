int LongestBitonicSequence(vector<int>nums)
{
    int n = nums.size();
    vector<int> lis(n , 1) , lds(n , 1);
    // lis
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < i ;j++){
            if (nums[j] < nums[i]){
                lis[i] = max(lis[i] , 1 + lis[j]);
            }
        }
    }
    // lds (left to right) , (right to left)
    for (int i = n-1 ; i >= 0 ; i--){
        for (int j = i+1 ; j < n ; j++){
            if (nums[i] > nums[j]){
                lds[i] = max(lds[i] , 1 + lds[j]);
            }
        }
    }

    int ans = 0;

    for (int i = 0 ; i < n ; i++){
        ans = max(ans , (lis[i] + lds[i] - 1));
    }

    return ans;
}