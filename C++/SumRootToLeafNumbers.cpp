/***********************************************************************************************
Problem      Sum Root to Leaf Numbers
Developer    Ian Hays
Date         11/03/21
URL          https://leetcode.com/problems/sum-root-to-leaf-numbers/
Space        O(1) 
Time         O(N)
Description  Dfs through each node multiplying by 10 for each digit and sum the leaves and return.
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
    int sum = 0;
    int sumNumbers(TreeNode* root) {
        dfs(root, 0);
        return sum;
    }
    
    void dfs(TreeNode* root, int val){
        if(!root) return;
        val *= 10;
        val += root->val;
        if(!root->left && !root->right){
            sum += val;
            return;
        } 
        dfs(root->left, val);
        dfs(root->right, val);
    }
};
