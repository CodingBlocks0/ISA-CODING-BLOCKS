#include<iostream>
using namespace std;

int convert(string &s , char ch , int flips){
    int ans = 0;
    int i = 0 , j = 0;
    int n = s.size();
    // acquire and release
    while (j < n){
        // acquire
        if (s[j] == ch) {flips -= 1;}
        // condition wrong : (release)
        while (flips < 0){
            if (s[i] == ch) flips += 1;
            i++;
        }
        ans = max(ans ,j-i+1);
        j++;
    }
    return ans;
}

int main() {
    int k;
    cin >> k;

    string s;
    cin >> s;

    cout << max(convert(s , 'a' , k) , convert(s , 'b' , k)) << endl;
}