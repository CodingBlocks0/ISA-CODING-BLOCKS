class Solution{
public:
    int  dp[1005][1005];
    int func(int wt[] , int val[] , int index , int cap , int N){
        // base case //
        if (index >= N or cap == 0){
            return 0;
        }
        if (dp[index][cap] != -1){
            return dp[index][cap];
        }
        // recursion //
        int op1 = 0;
        if (wt[index] <= cap){
            op1 = val[index] + func(wt , val , index , cap-wt[index],N);
        }
        int op2 = func(wt , val , index+1 , cap , N);
        // memoization //
        dp[index][cap] = max(op1 , op2);
        return max(op1 , op2);
    }


    int knapSack(int N, int W, int val[], int wt[])
    {
        memset(dp , -1 , sizeof dp);
        return func(wt , val , 0 , W , N);
    }
};


// Tabulation //
//class Solution{
//public:
//    int knapSack(int N, int W, int val[], int wt[])
//    {
//
//        int dp[1005] = {0};
//        // weight0   1   2   3   4   5
//        //     [ 0 , 0 , 3 , 4 , 6 , 7]
//        //              {2}  {3} {2,2} , {2, 3}
//
//        for (int i = 0 ; i < N ; i++){
//            int weight = wt[i]; // 2
//            int profit = val[i]; // 3
//            for (int j = weight ; j <= W ; j++){
//                dp[j] =  max(dp[j] , profit + dp[j-weight]);
//            }
//        }
//
//        return dp[W];
//    }
//};