class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // base case //
        if (root == NULL){
            return root;
        }
        invertTree(root->left); // left
        invertTree(root->right); // right
        swap(root->left , root->right);                     // apna kuch work lar rhe ho
        return root;
    }
};



// leetcode question : https://leetcode.com/problems/invert-binary-tree/