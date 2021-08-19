/***********************************************************************************************
Problem      Maximum Product of Splitted Binary Tree
Developer    Ian Hays
Date         08/19/2021
URL          https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/
Space        O(1) 
Time         O(N)
Description  DFS through Binary Tree to grab the total sum of all nodes at the root. DFS through each
             node finding the product of total sum of all nodes subtract the total sum of each node with
             the total sum of each node.
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
    long long total;
    long long res;
    int maxProduct(TreeNode* root) {
        total = getTotal(root);
        getTotal(root);
        return res%1000000007;
    }
    
    long long getTotal(TreeNode* root){
        if(!root) return 0;
        long long currSum = root->val + getTotal(root->left) + getTotal(root->right);
        res = max(res,(total - currSum) * currSum);
        return currSum;
    }
};
