/***********************************************************************************************
Problem      Maximum Depth Of Binary Tree
Developer    Ian Hays
Date         02/14/2022
URL          https://leetcode.com/problems/maximum-depth-of-binary-tree/
Space        O(1) 
Time         O(N)
Description  DFS and return the maximum value child. The largest value is the depth of the binary tree.
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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
    
    
};
