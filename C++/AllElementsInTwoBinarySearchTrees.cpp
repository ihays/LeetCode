/***********************************************************************************************
Problem      All Elements in Two Binary Search Trees
Developer    Ian Hays
Date         01/25/2021
URL          https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
Space        O(N) 
Time         O(N)
Description  dfs through each BST adding to a result vector. Sort vector and return.
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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res;
        dfs(root1, res);
        dfs(root2, res);
        sort(res.begin(), res.end());
        return res;
    }
    
    void dfs(TreeNode* root, vector<int>& res){
        if(!root) return;
        res.push_back(root->val);
        dfs(root->left, res);
        dfs(root->right, res);
    }
};
