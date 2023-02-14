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

void LeftViewofBinaryTree(node *root) {

    queue<node *> q;
    q.push(root);
    int level = 0;

    while (q.empty() == false) {
        int no = q.size(); // is level par kitni nodes hai
        int printed = 0; // phla element print nahi kiya

        while (no--) {
            node *curr = q.front();
            q.pop();

            if (printed == 0){
                cout << curr->data << "\n";
                printed = 1;
            }

            if (curr->left)
                q.push(curr->left);
            if (curr->right) {
                q.push(curr->right);
            }

        }
        level += 1;
    }

}

void RightView(node *root) {

    queue<node *> q;
    q.push(root);
    int level = 0;

    while (q.empty() == false) {
        int no = q.size(); // is level par kitni nodes hai
        int printed = 0; // phla element print nahi kiya

        while (no--) {
            node *curr = q.front();
            q.pop();

            printed = curr->data;

            if (curr->left)
                q.push(curr->left);
            if (curr->right) {
                q.push(curr->right);
            }

        }
        cout << printed << "\n";
        level += 1;
    }

}

int main() {
    node *root = BuildTree();
    LeftViewofBinaryTree(root);
    return 0;
}
// 2 3 9 -1 -1 -1 4 5 7 -1 -1 8 -1 -1 6 -1 -1