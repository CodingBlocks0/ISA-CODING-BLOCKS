#include<bits/stdc++.h>
using namespace std;


int main(){

    string s;
    cin >> s;

    int k;
    cin >> k;

    stack<char> st;

    for (int i = 0 ; i < s.size() ; i++){
        while ( k > 0 and st.size() > 0 and  st.top() > s[i]){
            st.pop();
            k--;
        }
        st.push(s[i]);
    }

    while (k > 0){
        st.pop();
        k--;
    }

    string ans = "";

    while (st.size() > 0){
        ans = ans + st.top();
        st.pop();
    }

    reverse(ans.begin() , ans.end()); // homework

    bool flag = false;
    for (int i = 0 ; i < ans.size() ; i++){
        if (ans[i] != '0') flag = true;
        if (flag) cout << ans[i];
    }

    return 0;
}