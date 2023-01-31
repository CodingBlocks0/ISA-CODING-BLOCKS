#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int> &arr) {

        int n = arr.size();

        vector<int> nse(n, n);

        stack<int> st;
        st.push(n - 1);

        for (int i = n - 2; i >= 0; i--) {
            while (st.empty() == false and arr[i] <= arr[st.top()]) {
                st.pop();
            }

            if (st.empty() == false) {
                nse[i] = st.top();
            }
            st.push(i);
        }
        // nse vala complete //

        vector<int> pse(n, -1);
        stack<int> st2;
        st2.push(0);

        for (int i = 1; i < n; i++) {
            while (st2.empty() == false and arr[i] <= arr[st2.top()]) {
                st2.pop();
            }

            if (st2.empty() == false) {
                pse[i] = st2.top();
            }
            st2.push(i);
        }

        // previous smallest element //

        int ans = 0;

        for (int i = 0; i < n; i++) {
            ans = max(ans, arr[i] * (nse[i] - pse[i] - 1));
        }

        return ans;
    }
};

int main() {


    Solution obj;

    int row , col;
    cin >> row >> col;

    int matrix[row][col];

    for (int i = 0 ;i < row ; i++){
        for (int j = 0 ; j < col ; j++){
            cin >> matrix[i][j];
        }
    }

    vector<int> height(col , 0);

    int ans = 0;

    for (int i = 0 ; i < row ; i++){

        for (int j = 0 ; j < col ; j++){

            if (matrix[i][j] == 1){
                height[j]++;
            }
            else {
                height[j] = 0;
            }

        }

        int area = obj.largestRectangleArea(height);
        ans = max(ans , area);
    }

    cout << ans << endl;
}

//4 5
//1 0 1 0 0
//1 0 1 1 1
//1 1 1 1 1
//1 0 0 1 0