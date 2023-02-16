class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int value) {
        // base case //
        if (root == NULL or root->val == value){
            return root;
        }

        if (root->val < value)
        {
            return searchBST(root->right , value);
        }

        return searchBST(root->left , value);
    }
};

// leetcode question : https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/