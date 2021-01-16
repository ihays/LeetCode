//Ian Hays
//01-16-2021
//https://leetcode.com/problems/insufficient-nodes-in-root-to-leaf-paths/
//SC: O(N) TC: O(1)

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
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        return dfs(root,limit,0) < limit ? NULL : root;
    }
    
    int dfs(TreeNode* root, int limit, int sum){
        if(!root->left && !root->right) return root->val + sum;       
        int l = INT_MIN; int r = INT_MIN;
        if(root->left){
            l = dfs(root->left, limit, root->val + sum);  
            if(l < limit) root->left = NULL;
        } 
        if(root->right){
            r = dfs(root->right, limit, root->val + sum);  
            if(r < limit) root->right = NULL;
        } 
        return max(l,r);
    }
};
