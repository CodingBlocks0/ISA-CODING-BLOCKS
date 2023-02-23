#include<bits/stdc++.h>

using namespace std;

struct node{
    int first;
    int second;
    node(int x , int y){
        first = x ;
        second = y;
    }
};

int main() {

    node* a = new node(10 , 20);
    cout << (*a).first << endl;
    cout << a->first << endl;


    // key and value
    map<int, int> mp; // ordered
    unordered_map<int , int> mp4; // unordered


    mp.insert({3, 2});
    mp.insert({4, 5});
    mp.insert({4, 3}); // same key se insert nahi hoga

    // syntax
//    cout << mp[4] << endl;
//    mp[4] = 6;
//    cout << mp[4] << endl;
//    cout << mp[5] << endl;// error  -> zero
//    cout << mp[6] << endl;// error  -> zero
//    cout << "size :" << mp.size() << endl;

    // iterate kese kar skte hai //
    // iterate //
    // !=
    // auto
//    long long int  a = 12;
//    double b = 10;
//    string c = "abcddef";
//   auto c = "acbdyfer";
//    auto d = 10000000000000000;
//    cout << c << endl;
//    cout << d << endl;

    // for each loop
//    vector<long long> brr = {2 , 3 , 4 ,5};
//    for (auto x : brr){
//        cout << x << " ";
//    }

//    map<int, int>::iterator itr;
//    for (itr = mp.begin(); itr != mp.end(); itr++) {
//        cout << itr->first
//             << '\t' << itr->second << '\n';
//    }

//    for (auto x : mp){
//        cout << x.first << " " << x.second << endl;
//        // cout << x->first << " " << x->second << endl;
//    }


    // hamesh    ( . , ->)
    // find
   // (*a).second
    auto x = mp.find(5);
//    cout << x->first << " " << x->second << endl;

    map<int , int> mp1;
    map<int , int> mp2;
    mp1[1] = 1, mp1[2]=2 ,mp1[3]=3;
    mp2[1] = 4, mp2[2]=5 ,mp2[3]=6;

    for (auto x : mp1){
        cout << x.first << "  " << x.second << endl;
        auto y = mp2.find(x.first);
        cout << y->first << " " << y->second << endl;
        cout << (*y).first << " " << (*y).second << endl;
    }

    cout << mp1.begin()->first << endl;
    cout << mp1.begin()->second << endl;
    cout << (*mp1.begin()).first << endl;
    cout << (*mp1.begin()).second << endl;
    return 0;
}

// design a hash map