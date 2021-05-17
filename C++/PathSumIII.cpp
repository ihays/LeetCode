/***********************************************************************************************
Problem      Path Sum III
Developer    Ian Hays
Date         03/23/2021
URL          https://leetcode.com/problems/path-sum-iii/
Space        O(1) 
Time         O(N^2)
Description  DFS on each node the sums of all children. Any sum path equal to 0 increments the result.
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
    
    int pathSum(TreeNode* root, int targetSum) {
        if(root){
            dfs(root, targetSum);
            pathSum(root->left, targetSum);
            pathSum(root->right, targetSum);
        }
        return res;
    }
    
    void dfs(TreeNode* root, int sum){
        if(!root) return;
        if(!(sum -= root->val)) res++;
        dfs(root->left, sum);
        dfs(root->right, sum);
    }
};
