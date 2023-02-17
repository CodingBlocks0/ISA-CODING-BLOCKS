class Solution {
public:
    TreeNode* func(TreeNode* root , int &sum){

        if (root == NULL)
        {
            return root;
        }

        func(root->right , sum);  // right gye

        root->val = root->val + sum;  // beech mei work kiya
        sum = root->val;

        func(root->left , sum);  // left gye
        return root;
    }

    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        return func(root , sum);
    }
};

// leetcode question : (https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/)