/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    vector<int> ans;

    bool RootToNodePath(TreeNode *root, TreeNode* key, vector<TreeNode*> &path) {
        // base case
        if (root == NULL) {
            return false;
        }

        if (root == key) {
            path.push_back(root);
            return true;
        }

        path.push_back(root);

        bool l = RootToNodePath(root->left, key, path);
        bool r = RootToNodePath(root->right, key, path);

        if (l == false and r == false) {
            path.pop_back();
            return false;
        }
        return true;
    }

    void func (TreeNode* root , int distance , TreeNode* block){

        if (root == NULL){
            return;
        }

        if (root == block){
            return;
        }


        if (distance == 0){
            ans.push_back(root->val);
            return;
        }

        func(root->left , distance-1 , block);
        func(root->right , distance-1 , block);
    }


    vector<int> distanceK(TreeNode *root, TreeNode *target, int k) {

        // step-1 : root -> target ka path
        vector<TreeNode*>path;
        RootToNodePath(root , target , path);


        for (int i = path.size()-1 , distance = k;  i >= 0 and distance >= 0     ; i-- , distance--){

            TreeNode* block = NULL;
            if (i+1 < path.size()){
                block = path[i+1];
            }

            func(path[i] , distance , block);

        }

        return ans;
    }
};