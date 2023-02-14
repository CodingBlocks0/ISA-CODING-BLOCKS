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

void ZigZagOrder(node* root){

    int level = 1;
    queue<node*> q;
    q.push(root);

    while (q.size() > 0){
        int n = q.size();
        vector<int> arr;
        while (n--){
            node* curr = q.front();
            arr.push_back(curr->data);
            if (curr->left != NULL){
                q.push(curr->left);
            }
            if (curr->right != NULL){
                q.push(curr->right);
            }
            q.pop();
        }

        if (level%2 == 0){
            for (int i = arr.size()-1 ; i>= 0 ; i--){
                cout << arr[i] << " ";
            }
        }
        else{
            for (int i = 0 ; i < arr.size() ; i++){
                cout << arr[i] << " ";
            }
        }
        level += 1;
        cout << endl;
    }
}
int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    ZigZagOrder(root);
    return 0;
}