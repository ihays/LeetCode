/***********************************************************************************************
Problem      Maximum Average Subtree
Developer    Ian Hays
Date         09/02/2021
URL          https://leetcode.com/problems/132-pattern/
Space        O(N) 
Time         O(N)
Description  We store the third value in an integer, second value candidate in a stack. The first
             value is validated when it is less than the third after assigning it in our while loop.
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
