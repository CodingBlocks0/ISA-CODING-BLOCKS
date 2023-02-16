class Solution {
public:
    bool isValidBST(TreeNode* root , long left = -1e15 , long right = 1e15) {
        // base case
        if (root == NULL){
            return true;
        }

        if (root->val <= left or root->val >= right){
            return false;
        }

        bool L = isValidBST(root->left , left , root->val);
        bool R = isValidBST(root->right , root->val , right);

        if (L == false or R == false){
            return false;
        }

        return true;
    }
};
// leetcode question : https://leetcode.com/problems/validate-binary-search-tree/