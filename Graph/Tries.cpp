#include<bits/stdc++.h>
using namespace std;

struct node{
    vector<node*> arr;
    bool wordend;
    node(){
        arr.resize(26 , NULL);
        wordend = false;
    }
};

class Trie{
private: node* root;
public:
    void insert(string word){
         node* temp = root;
         for (auto ch : word){
             if (temp->arr[ch-'a'] == NULL){
                  temp->arr[ch-'a'] = new node();
             }
             temp = temp->arr[ch-'a'];
         }
         temp->wordend = true;
    }
    bool search(string word){
        node* temp = root;
        for (auto ch : word){
            if (temp->arr[ch-'a'] == NULL){
               return false;
            }
            temp = temp->arr[ch-'a'];
        }
        if (temp->wordend == true) return true;
        return false;
    }
    Trie(){
       root = new node();
    }
};


int main(){

    Trie obj;
    for (int i = 1 ; i <= 2 ; i++){
        string str;
        cin >> str;
        obj.insert(str);
    }
    return 0;
}