/***********************************************************************************************
Problem      Leaf-Similar Trees
Developer    Ian Hays
Date         07/20/2021
URL          https://leetcode.com/problems/leaf-similar-trees/
Space        O(N) 
Time         O(N)
Description  DFS through each tree recording the leaves into two different strings. return the compare
             of both strings to check for equivalence.
************************************************************************************************/

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

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string leaves1, leaves2;
        dfs(root1, leaves1);
        dfs(root2, leaves2);
        return leaves1 == leaves2;
    }
    
    void dfs(TreeNode* root, string& leaves){
        if(!root) return;
        if(!root->left && !root->right) leaves += to_string(root->val) + "#";
        dfs(root->left,leaves);
        dfs(root->right,leaves);
    }
};
