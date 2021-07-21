/***********************************************************************************************
Problem      Inorder Successor In BST
Developer    Ian Hays
Date         07/21/2021
URL          https://leetcode.com/problems/inorder-successor-in-bst/
Space        O(1) 
Time         O(N)
Description  DFS through tree until node is found and set the found boolean to true. Return the 
             successor when node is found. 
************************************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool found = false;
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        if(!root) return NULL;
        TreeNode* res = inorderSuccessor(root->left, p);
        if(res) return res;
        if(found) return root;
        if(root->val == p->val) found = true;
        return inorderSuccessor(root->right, p);
    }
};
