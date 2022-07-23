/***********************************************************************************************
Problem      Validate Binary Search Tree
Developer    Ian Hays
Date         07/23/2022
URL          https://leetcode.com/problems/validate-binary-search-tree/
Space        O(1) 
Time         O(N)
Description  in order search binary tree keeping track of the previous node. If current node is 
             ever larger than previous, we return false
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
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = nullptr;
        return inOrder(root, prev);
    }
    
    bool inOrder(TreeNode* root, TreeNode*& prev){
        if(!root) return true;
        if(!inOrder(root->left, prev)) return false;
        if(prev && prev->val >= root->val) return false;
        prev = root;
        return inOrder(root->right, prev);
    }
};
