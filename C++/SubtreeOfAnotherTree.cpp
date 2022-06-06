/***********************************************************************************************
Problem      Subtree of Another Tree
Developer    Ian Hays
Date         06/06/2022
URL          https://leetcode.com/problems/subtree-of-another-tree/
Space        O(1) 
Time         O(N^2)
Description  traverse through the root and compare to subtree. Result is true if they match. 
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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        return isValid(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
    
    bool isValid(TreeNode* root, TreeNode* subRoot){
        if(!root && !subRoot) return true;
        if(!root || !subRoot) return false;
        return root->val == subRoot->val && isValid(root->left, subRoot->left) && isValid(root->right, subRoot->right);
    }
};
