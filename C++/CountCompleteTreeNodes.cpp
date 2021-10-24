/***********************************************************************************************
Problem      Count Complete Tree Nodes
Developer    Ian Hays
Date         10/23/2021
URL          https://leetcode.com/problems/count-complete-tree-nodes/
Space        O(1) 
Time         O(N)
Description  recurse on nodes returning additive 1. 
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
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);   
    }
};
