//Ian Hays
//12-22-2020
//https://leetcode.com/problems/path-sum/
//SC: O(1) TC: O(N)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum){
        if(!root) return false;
        bool res = false;
        dfs(root, sum, res);
        return res;
    }
    void dfs(TreeNode* root, int sum, bool& res){
        if(res == true) return;
        if(root->left == NULL && root->right == NULL){
            if(sum == root->val){
                res = true;
            } 
            return;
        }
        if(root->left) dfs(root->left, sum-root->val, res);
        if(root->right) dfs(root->right, sum-root->val, res);
    }
    
    
};
