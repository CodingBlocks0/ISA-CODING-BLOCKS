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

void LeafNode(node* root){

    if (root ==  NULL){
        return;
    }

    if (root->left == NULL and root->right == NULL)
    {
        cout << root->data << " ";
        return;
    }

    LeafNode(root->left);
    LeafNode(root->right);
    return;
}


int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    LeafNode(root);
    return 0;
}

//3 2 4 -1 -1 5 -1 -1 1 6 7 -1 -1 8 -1 -1 -1