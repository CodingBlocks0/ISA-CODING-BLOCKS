#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0 ; i < n ;i++){
        int x; cin >> x;
        arr.push_back(x);
    }

    vector<int> nge(n , n);

    stack<int> st;
    st.push( n-1);

    for (int i = n-2 ; i >= 0 ; i--){
        while (st.empty() == false   and arr[i] <= arr[st.top()]){
            st.pop();
        }

        if (st.empty() == false){
            nge[i] = st.top();
        }
        st.push(i);
    }


    for (int i = 0 ; i < n ;i++){
        cout << nge[i] << " ";
    }

    cout << endl;
    return 0;
}