/***********************************************************************************************
Problem      Closest Binary Search Tree Value
Developer    Ian Hays
Date         08/10/2021
URL          https://leetcode.com/problems/closest-binary-search-tree-value/
Space        O(1) 
Time         O(N)
Description  DFS through binary tree based on whether or not the value greater than target. We return
             the smallest difference. 
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
    int closestValue(TreeNode* root, double target) {
        if(!root) return -1;
        int val = root->val > target ? closestValue(root->left, target) : closestValue(root->right, target);
        return abs(root->val - target) < abs(val - target) ? root->val: val;
    }
};
