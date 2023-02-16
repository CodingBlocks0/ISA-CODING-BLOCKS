class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {

        // base case //
        if (root == NULL){
            return root;
        }

        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);

        if (root->left == NULL and root->right == NULL and root->val == 0){
            return NULL;
        }

        return root;
    }
};

// leetcode question : https://leetcode.com/problems/binary-tree-pruning/