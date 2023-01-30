#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
                st.push(s[i]);
            } else {
                // closing bracket par par stack empty hai
                if (st.empty()){
                    return false;
                }
                if (s[i] == ')' and st.top() != '(') {
                    return false;
                } else if (s[i] == ']' and st.top() != '[') {
                   return false;
                } else if (s[i] == '}' and st.top() != '{') {
                    return false;
                }
                else {
                    st.pop();
                }
            }
        }

        return st.empty();
    }
};

int main() {

    string s;
    cin >> s;

    Solution obj;
    obj.isValid(s);

    return 0;
}


