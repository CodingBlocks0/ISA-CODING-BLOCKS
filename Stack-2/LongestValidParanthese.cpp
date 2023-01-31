#include<bits/stdc++.h>
using namespace std;


int main(){

    string s;
    cin >> s;

    stack<int> st;
    st.push(-1);
    int max_length = 0;



    for (int i = 0 ; i < s.size() ; i++){
        if (s[i] =='('){
           st.push(i);
        }
        else {
            if (st.top() != -1 and s[st.top()] == '('){
                st.pop();
                max_length = max(max_length , i - st.top());
            }
            else {
                st.push(i);
            }
        }
    }

    cout << max_length << endl;

    return 0;
}