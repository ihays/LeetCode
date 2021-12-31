/***********************************************************************************************
Problem      Maximum Difference Between Node and Ancestor
Developer    Ian Hays
Date         12/30/2021
URL          https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/
Space        O(1)
Time         O(N)
Description  DFS through tree and find the maximum difference between the current node and the 
             smallest/largest ancestor nodes. 
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
    int maxAncestorDiff(TreeNode* root) {
        dfs(root, root->val, root->val);
        return res;
    }
    int res;
    
    void dfs(TreeNode* root, int smallest, int largest){
        if(!root) return;
        smallest = min(smallest,root->val);
        largest = max(largest, root->val);
        res = max(abs(root->val - smallest), res);
        res = max(abs(root->val - largest), res);
        dfs(root->left, smallest, largest);
        dfs(root->right, smallest, largest);
    }
};
