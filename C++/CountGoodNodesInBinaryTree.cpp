/***********************************************************************************************
Problem      Count Good Nodes in Binary Tree
Developer    Ian Hays
Date         08/17/2021
URL          https://leetcode.com/problems/array-of-doubled-pairs/
Space        O(1) 
Time         O(N)
Description  DFS through binary tree keeping track of maximum value node. Any nodes greater than
             or equal increase result by one. 
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
    int res;
    int goodNodes(TreeNode* root, int val = INT_MIN) {
        if(!root) return 0;
        if(root->val >= val){
            val = root->val;
            res++;    
        }
        goodNodes(root->left, val);
        goodNodes(root->right, val);
        return res;
    }
};
