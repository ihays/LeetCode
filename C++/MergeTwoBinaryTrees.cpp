/***********************************************************************************************
Problem      Merge Two Binary Trees
Developer    Ian Hays
Date         05/15/2021
URL          https://leetcode.com/problems/merge-two-binary-trees/
Space        O(N) 
Time         O(N)
Description  Sum nodes into root1. If root1 node doesn't exist, create a copy of node2 in its place            
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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return nullptr;
        if(!root1){
            root1 = new TreeNode(root2->val);
        } else {
            root1->val += root2 ? root2->val : 0;    
        }
        root1->left = mergeTrees(root1 ? root1->left : nullptr, root2 ? root2->left : nullptr);
        root1->right = mergeTrees(root1 ? root1->right : nullptr, root2 ? root2->right : nullptr);
        return root1;
    }
};
