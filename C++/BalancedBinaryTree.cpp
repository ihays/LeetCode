//Ian Hays
//01-04-2021
//https://leetcode.com/problems/balanced-binary-tree/
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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int l = dfs(root->left);
        int r = dfs(root->right);
        return abs(r-l) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
    
    int dfs(TreeNode* root){
        if(!root) return 0;
        return max(dfs(root->left), dfs(root->right))+1;
    }
};
