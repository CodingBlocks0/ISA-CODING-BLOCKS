#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

node* BuildTree(){

    int x;
    cin >> x;

    if (x == -1){
        return NULL;
    }

    node* root = new node(x);

    root->left = BuildTree();
    root->right = BuildTree();
    return root;
}


int SUM(node* root){
    // base case //
    if (root == NULL){
        return 0;
    }

    int left_sum = SUM(root->left);
    int right_sum = SUM(root->right);

    return (left_sum + right_sum + root->data);
}


int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    int ans = SUM(root);
    cout << ans << endl;
    return 0;
}

//3 2 4 -1 -1 5 -1 -1 1 6 7 -1 -1 8 -1 -1 -1