#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

node* InsertBst(node* root , int value){
    // base case //
    if (root == NULL){
        node* curr = new node(value);
        return curr;
    }

    if (root->data < value){
      //  InsertBst(root->right,value);
        root->right = InsertBst(root->right , value);
    }
    else {
        root->left = InsertBst(root->left , value);
    }
    return root;
}

// its always sorted
void Inorder(node* root){

    if (!root) return;

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
    return;
}

int main(){

    int n;
    cin >> n;

    node* root = NULL;
    for (int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        root = InsertBst(root , x);
    }
    cout << "Inorder" << endl;
    Inorder(root);
    return 0;
}