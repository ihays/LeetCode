/***********************************************************************************************
Problem      Invert Binary Tree
Developer    Ian Hays
Date         10/25/2021
URL          https://leetcode.com/problems/invert-binary-tree/
Space        O(1) 
Time         O(N)
Description  Swap children as you traverse through the tree and return. 
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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);    
        return root;
    }
};
