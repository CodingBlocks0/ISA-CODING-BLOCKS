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

int ans = 0;
int diameter(node* root){

    if (root == NULL){
        return 0;
    }

    int lh = diameter(root->left); // height
    int rh = diameter(root->right); // height

    ans = max(ans , lh + rh + 1);

    return max(lh , rh)+1;
}

int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    diameter(root);
    cout << ans << endl;
    return 0;
}

//3 2 4 -1 -1 5 -1 -1 1 6 7 -1 -1 8 -1 -1 -1