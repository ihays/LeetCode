/***********************************************************************************************
Problem      Binary Tree Preorder Traversal
Developer    Ian Hays
Date         08/08/2021
URL          https://leetcode.com/problems/binary-tree-preorder-traversal/
Space        O(N) 
Time         O(N)
Description  DFS pushing inorder values into result array and return. 
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
    vector<int> res;
    vector<int> preorderTraversal(TreeNode* root) {
        dfs(root);
        return res;
    }
    
    void dfs(TreeNode* root){
        if(!root) return;
        res.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
};
