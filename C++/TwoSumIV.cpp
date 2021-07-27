/***********************************************************************************************
Problem      Two Sum IV - Input is a BST
Developer    Ian Hays
Date         07/27/2021
URL          https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
Space        O(N) 
Time         O(N)
Description  Store difference in set as we check if those differences exist as we traverse through
             the tree. Return true when found, otherwise, false.
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
    unordered_set<int> uset;
    
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        if(uset.count(root->val)) return true;
        uset.insert(k-root->val);
        return findTarget(root->left,k) || findTarget(root->right,k);
    }
    
};
