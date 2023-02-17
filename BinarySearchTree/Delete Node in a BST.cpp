class Solution {
public:
    TreeNode* func(TreeNode* root , int key)
    {
        if (root == NULL){
            return root;
        }

        if (root->val == key)
        {
            // work root->left ko apne right subtree ke extreme left par
            TreeNode* par = root->right;
            TreeNode* R = root->right; // NULL
            TreeNode* L = root->left; // NULL
            if (R == NULL ){
                return L;
            }
            root->left = NULL ; root->right = NULL;
            while (R->left != NULL){
                R = R->left;
            }

            R->left = L;
            return par;
        }

        root->left = func(root->left , key);
        root->right = func(root->right , key);
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        return func(root , key);
    }
};

leetcode question : https://leetcode.com/problems/delete-node-in-a-bst/