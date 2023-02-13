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

int Height(node* root){

    if (root == NULL)
    {
        return 0;
    }

    int lh = Height(root->left);
    int rh = Height(root->right);

    return 1 + max(lh , rh);
}


int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    Height(root);
    return 0;
}

//3 2 4 -1 -1 5 -1 -1 1 6 7 -1 -1 8 -1 -1 -1