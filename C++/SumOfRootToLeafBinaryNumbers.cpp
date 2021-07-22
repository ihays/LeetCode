/***********************************************************************************************
Problem      Sum of Root To Leaf Binary Numbers
Developer    Ian Hays
Date         07/22/2021
URL          https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/
Space        O(1) 
Time         O(N)
Description  We increment a sum by the node value and bit shifting to the left for each call deeper 
             into tree. When we reach a leaf node, we increment the result by the sum. 
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
    int res = 0;
    int sumRootToLeaf(TreeNode* root, int sum = 0) {
        if(!root) return 0;
        sum += root->val == 1;
        if(!root->left && !root->right) res += sum;
        sumRootToLeaf(root->left, sum*2);
        sumRootToLeaf(root->right, sum*2);
        return res;
    }
};
