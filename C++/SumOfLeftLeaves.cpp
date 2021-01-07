//Ian Hays
//01-07-2021
//https://leetcode.com/problems/sum-of-left-leaves/
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
    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root,false);
    }
    
    int dfs(TreeNode* root, bool isLeft){
        if(!root) return 0;
        int val = (isLeft && !root->left && !root->right) ? root->val : 0;
        return val + dfs(root->left,true) + dfs(root->right,false);
    }
};
