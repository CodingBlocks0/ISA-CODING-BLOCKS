#include<bits/stdc++.h>
using namespace std;

void bruteforce(){
        int n;
        cin >> n;
        vector<int> arr(n , 0);

        for (int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }

        int ans = 0;

        for(int i = 0 ; i < n ;i++){
            int miniheight = arr[i];
            for (int j = i ; j < n ; j++){
                miniheight = min(miniheight , arr[j]);
                ans = max(ans , (j-i+1)*miniheight);
            }
        }

        cout << ans << endl;
};


int main(){

    int n;
    cin >> n;
    vector<int> arr(n , 0);

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    // next smaller element
    vector<int> nse(n , n);

    stack<int> st;
    st.push( n-1);

    for (int i = n-2 ; i >= 0 ; i--){
        while (st.empty() == false   and arr[i] <= arr[st.top()]){
            st.pop();
        }

        if (st.empty() == false){
            nse[i] = st.top();
        }
        st.push(i);
    }
    // nse vala complete //

    vector<int> pse(n , -1);
    stack<int> st2;
    st2.push(0);

    for (int i = 1; i < n ; i++){
        while (st2.empty() == false   and arr[i] <= arr[st2.top()]){
            st2.pop();
        }

        if (st2.empty() == false){
            pse[i] = st2.top();
        }
        st2.push(i);
    }

    // previous smallest element //

    int ans = 0;

    for (int i = 0 ; i < n ; i++){
        ans = max(ans ,  arr[i] * (nse[i]-pse[i]-1));
    }

    cout << ans << endl;

    return 0;
}