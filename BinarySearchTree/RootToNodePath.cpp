#include<bits/stdc++.h>

using namespace std;

class node {
public:
    int data;
    node *left;
    node *right;

    node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

node *BuildTree() {

    int x;
    cin >> x;

    if (x == -1) {
        return NULL;
    }

    node *root = new node(x);

    root->left = BuildTree();
    root->right = BuildTree();
    return root;
}

bool RootToNodePath(node *root, int key, vector<int> &path) {
    // base case
    if (root == NULL) {
        return false;
    }

    if (root->data == key) {
        path.push_back(root->data);
        return true;
    }

    path.push_back(root->data);

    bool l = RootToNodePath(root->left, key, path);
    bool r = RootToNodePath(root->right, key, path);

    if (l == false and r == false) {
        path.pop_back();
        return false;
    }
    return true;
}

int main() {
    // node* root = new node(10);
    node *root = BuildTree();
    int key;
    cin >> key;
    vector<int> path;

    RootToNodePath(root, key, path);

    for (int i = 0; i < path.size(); i++) {
        cout << path[i] << " ";
    }
    return 0;
}
// 1 7 2 -1 -1 8 6 -1 -1 15 -1 -1 9 -1 10 5 -1 -1 -1
