/***********************************************************************************************
Problem      Maximum Average Subtree
Developer    Ian Hays
Date         09/02/2021
URL          https://leetcode.com/problems/maximum-average-subtree/
Space        O(N^2) 
Time         O(N^2)
Description  Grab the maximum average subtree for each node and return. 
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
    double res;
    double maximumAverageSubtree(TreeNode* root) {
        if(!root) return 0;
        res = max(res, sumTree(root)/countTree(root));
        maximumAverageSubtree(root->left);
        maximumAverageSubtree(root->right);
        return res;
    }
    
    double sumTree(TreeNode* root){
        if(!root) return 0;
        return sumTree(root->left) + sumTree(root->right) + root->val;
    }
    
    double countTree(TreeNode* root){
        if(!root) return 0;
        return countTree(root->left) + countTree(root->right) + 1;
    }

};
